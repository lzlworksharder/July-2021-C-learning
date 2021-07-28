#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
// review

// typedef struct S
// {
//     int n;
//     // char c;
//     int arr[0]; //柔性数组成员
// }S;
// int main()
// {
//     printf("%d\n",sizeof(S));
//     S* ps = (S*) malloc(sizeof(S) + 10*sizeof(int));
//     ps->arr[3] = 5;
//     return 0;
// }

// *** 
    // 文件操作:
    // 程序文件,数据文件
    // 程序文件:(后缀为.c等),目标文件(.obj),可执行程序(.exe)
    // 数据文件:程序运行时读写的文件,或者输出内容的文件
    // 文件名:文件路径+文件名主干+文件后缀
    // 如: c:\code\test.txt
    // 数据文件:文本文件/二进制文件
    // 数据在内存中以二进制形式存储,不加转换直接输出到外存,就是二进制文件
    // 如果要求外存上以ascii码字符形式存储,则此文件为文本文件
    // 数据的内存存储形式:字符--ASCII码 ; 数值型--ASCII码或二进制(省字节)
    // 文件缓冲区:程序数据区--输出(输入)缓冲区--磁盘/屏幕
    // 输出(输入)缓冲区放满之后才会一次性放入磁盘/屏幕
    // 文件指针:每个文件的相关信息以结构体FILE类型放在内存的文件信息区
    // 打开文件时系统自动创建一个FILE类型变量,fopen会根据文件信息填充结构体变量
    // 一般通过一个FILE指针维护此结构变量

// ***
    // 文件的打开和关闭:
    // FILE* fopen(const char* filename,const char* mode);
    // int fclose(FILE* stream);
    // int main()
    // {
    //     // 相对路径:
    //     // ../表示上一级路径, ./表示当前路径
    //     // fopen("../../test.txt","r");
    //     FILE* pf = fopen("test.txt","a");
    //     // pf指向文件信息区中创建的一个含有文件信息的结构体变量,进行维护
    //     // fopen失败,pf=NULL
    //     if (!pf)
    //     {
    //         printf("%s\n",strerror(errno));
    //     }
    //     fclose(pf);
    //     // 关闭文件:把文件信息区的空间释放掉
    //     // 还需要把pf置成NULL
    //     pf = NULL;
    //     return 0;
    // }
    // 文件的顺序读写:
    // int fputc(int c, FILE* stream); 将c写进文件流中
    // int main()
    // {
    //     FILE* pf = fopen("test.txt","w");
    //     if (!pf)
    //     {
    //         printf("%s\n",strerror(errno));
    //     }
    //     else
    //     {
    //         //write
    //         fputc('b',pf);
    //         fputc('i',pf);
    //         fputc('t',pf);
    //         fclose(pf);
    //         pf = NULL;
    //     }
    //     // read
    //     pf = fopen("test.txt","r");
    //     printf("%c",fgetc(pf));
    //     printf("%c",fgetc(pf));
    //     printf("%c",fgetc(pf));
    //     fclose(pf);
    //     pf = NULL;
    //     return 0;
    // }
// 键盘-标准输入设备 stdin
// 屏幕-标准输出设备 stdout
// 是一个程序默认打开的两个流设备
// 默认打开三个流: stdin stdout stderr 都是FILE*类型

// fgetc/fputc 适用于所有输入/输出流
    // int main()
    // {
    //     char ch[10] = {0};
    //     fgets(ch,10,stdin); // fgets(char* buffer, int MAX_COUNT, FILE* stream)
    //     fputs(ch,stdout);
    //     return 0;
    // } // 从键盘中输入,从屏幕上输出

    // 文本行输入:fgets  gets(buf):从键盘中输入一行
    // 文本行输出:fputs  puts(buf):直接打印到屏幕上,一行
    // 格式化输入(读):fscanf
    // 格式化输出(写):fprintf
    // 二进制输入:fread // 只适用于文件
    // 二进制输出:fwrite // 只适用于文件

    struct S
    {
        int n;
        float f;
        char arr[1024];
    };
    // int main()
    // {
    //     // 写信息
    //     struct S s = {0};
    //     FILE *pf = fopen("test.txt","r");
    //     // fprintf(pf,"%d %f %s",s.n,s.f,s.arr);
    //     // fclose(pf);
    //     // pf = NULL;

    //     // 读信息
    //     fscanf(pf,"%d %f %s",&(s.n),&(s.f),&(s.arr));
    //     fprintf(stdout,"%d %f %s",s.n,s.f,s.arr);
    //     return 0;
    // }

    // 对比: scanf/fscanf/sscanf
    // printf/fprintf/sprintf
    // scanf/printf 针对标准输入/输出流
    // fscanf/fprintf 针对所有输入/输出流
    // sscanf/sprintf 针对字符串 

    
    // int main()
    // {
    //     // 把数据格式化放进字符串
    //     struct S s = {1,5.66f,"i like sleeping"};
    //     char buf[1024] = {0};
    //     struct S tmp = {0};
    //     sprintf(buf,"%d %f %s",s.n,s.f,s.arr);
    //     printf("%s\n",buf);

    //     // 从字符串把字符数据格式化读入
    //     sscanf(buf, "%d %f %s",&(tmp.n),&(tmp.f),tmp.arr); // arr中只有一个字符????
    //     printf("%d %f %s\n",tmp.n,tmp.f,tmp.arr); 
    //     return 0;
    // }

    // 二进制读写
    // fwrite(buf,size,count,stream); // buf:被写的内容的指针,size是一个元素字节数,count是写的元素个数,stream为文件指针
    // fread(buf,size,count,stream); // 与fwrite类似,注意buf可以是任意类型,可以是结构体,返回真实读到的个数

    // 文件的随机读写:
    int main()
    {
        FILE *pf = fopen("test.txt","w+");
        char* buf = "abcdef";
        fputs(buf,pf);// 写完之后,指针在末尾
        rewind(pf);
        // rewind()让文件指针回到起始位置
        printf("start = %c\n",getc(pf));
        // 1.定位文件指针
        fseek(pf,-2,SEEK_END); 
        // fseek(stream,offset,origin)
        // fseek():根据偏移量移动指针 offset偏移量,单位字节 origin当前位置
        // 起始位置:当前位置SEEK_CUR 文件末尾SEEK_END 文件起始位置SEEK_SET
        printf("offset = %d\n",ftell(pf));
        // ftell(pf) 返回相对于起始位置的偏移量
        // 2.读取文件
        int ch = 0;
        ch = getc(pf);
        printf("current char = %c\n",ch); // e
        
        fclose(pf);
        pf = NULL;
        return 0;
    }

// 文件结束处放一个eof
// feof用于判断文件结束方式,判断是因为读取失败结束还是因为遇到文件尾结束
// 判断读取结束:fgets()返回NULL  fgetc()返回-1
// 二进制文件判断:fread判断返回值是否小于读取的最大值

// perror("hehe") 其中加提示语,表示打印提示语+错误原因 即: hehe:NO SUCH FILE OR DIRECTORY

// while ((c = fgetc(fp)) != EOF)
// {
//     putchar(c);
// }
// // 判断是什么原因结束的,遇到了error还是eof
// if (ferror(fp)) puts("error when reading");
// else if (feof(fp)) puts("end of file reached successfully");
// ferror(fp) 中途遇到错误-返回1  
// feof(fp) 读到了eof-返回非0 否则中途出错-返回0
