#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 顺序: C -- 初级数据结构(顺序表,链表,二叉树) -- c++ -- 高级数据结构


// C语言预处理:
// 翻译环境:源文件到exe依赖的过程,exe中放的是二进制的信息,所以翻译环境把源代码(文本文件)转换为二进制指令
// 运行环境:exe产生结果依赖的环境
// 每个源文件都会经过编译器处理生成目标文件:test.obj
// 所有目标文件经过链接器,链接库生成可执行程序
// 编译分为三个阶段:预编译,编译,汇编
// linux环境: gcc -E test.c > test.i 预编译到test.i文件

// 预处理:
// 1. #include头文件的包含
// 2. 注释删除,使用空格替换注释
// 3. #define 定义符号的替换
// 总结:文本操作

// 编译:gcc -S test.i 生成test.i文件
// 把c代码翻译成汇编代码
// 1.语法分析
// 2.词法分析
// 3.语义分析
// 4.符号汇总 函数名,全局变量

// 汇编: gcc -c test.s  生成test.o文件(obj文件)
// 把汇编代码转换成二进制代码
// 形成符号表 符号(局部变量不参与)+地址(只有函数声明时随便给一个无效的地址)

// 链接:
// 1.合并段表
// .o文件分段,段格式一样(elf),段上数据进行合并
// 2.符号表的合并和重定位
// 合并后只留下有效的地址

// 运行环境:
// 1.程序载入内存
// 2.开始执行程序,调用main函数
// 3.程序使用运行时堆栈存储函数局部变量和返回地址,也可使用static静态内存
// 4.终止程序,意外或正常

// ***
    // 预处理详解:

    // 预定义符号:
    // __FILE__ 文件绝对路径
    // __LINE__ 代码所在的行号
    // __DATE__
    // __TIME__ 时间和日期
    // __FUNCTION__ 所在函数名
    // __STDC__ 遵循c语言标准返回1,否则返回0

    // 预处理指令:
    // #define include / pragma pack....
    // #define 标识符
    // #define MAX 100
    // #define STR "hehe"
    // #define reg register 也可以替换关键字,代码等....
    // #define do_forever for(;;)
    // #define 符号名 符号内容

    // #define 尽量不要+分号

    // #define 定义宏 带参数:
    // #define SQUARE(X) X*X 括号要紧跟宏名,否则括号将被认为是宏名的一部分
    // int ret = SQUARE(5); // 25
    // int ret = SQUARE(5+1); // 11
    // 宏是完全直接替换,不是传参,运算顺序可能出问题 5+1*5+1=11,给X加括号即可

    // #define DOUBLE(X) ((X)+(X)) 写宏时不要吝惜括号
    // #define替换规则: 1.检查参数,看是否包含由#define定义的符号,如果是首先替换
    // 2.替换文本被插入到原来文本位置,参数名被值替换(字面替换不做任何运算)
    // 3.再次扫描,有define就重复处理

    // 宏不能出现递归

    // #和##:

    // #X:把宏的参数插入字符串中:
    // #define PRINT(X) printf("the value of"#X "is %d\n",X)
    // #X 就是是字面的参数对应的字符串
    // #define PRINT(X) printf("the value of "#X" is %d\n",X)
    // int main()
    // { 
    //     int c = 10+30;
    //     PRINT(c);
    //     return 0;
    // }

    // X##Y:把两端的X Y合并
    // #define combine(x,y) x##y
    // int main()
    // {
    //     int class84 = 100;
    //     printf("%d\n",combine(class,84)); // class+84=class84 纯字面合并
    //     return 0;
    // }

    // 带有副作用的宏操作:
    // #define MAX(X,Y) ((X)>(Y)? (X):(Y))
    // int main()
    // {
    //     int a = 10;
    //     int b = 11;
    //     int max = MAX(a++,b++);
    //     printf("%d\n",max); // 12
    //     printf("%d\n",a); // 11
    //     printf("%d\n",b); // 13
    //     return 0;
    // }
    // 结论: 尽量不要在宏中带有副作用(a++等带有其他效果的语句)

    // 完成求最大值的任务:
    // 函数调用时会有函数调用和返回的开销
    // 宏更加灵活(不受数据类型限制),效率更高,没有函数调用和返回的开销

    // 宏的劣势:
    // 多次使用宏时,如果宏比较长则会大幅增加代码长度
    // 宏无法调试,调试只能调试可执行程序.exe,替换的过程在预编译阶段就已经完成了
    // 宏类型无关,不够严谨
    // 宏可能带来运算符优先级问题,容易出错,带有副作用时也容易出错

    // 但宏也可以做函数无法做到的事情,比如传一个类型进去
    // #define SIZEOF(TYPE) sizeof(type)
    // #define MALLOC(count,type) (type*)malloc(count*sizeof(type))
    // int* p = MALLOC(10,int);

    // 宏名尽量大写,函数名尽量不要全大写
    // #undef 宏名  :取消一个宏定义

    // 命令行定义: 预编译时,通过命令行传入一个参数

    // 条件编译指令:选择性编译
    // #define DEBUG
    // int main()
    // {
    //     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    //     int i = 0;
    //     for (i=0;i<10;i++)
    //     {
    //         arr[i] = 0;
    //     }
    //     #ifdef DEBUG // DEBUG被定义过才执行ifdef和endif之间的代码
    //     for (i=0;i<10;i++)
    //     {
    //         printf("%d\n",arr[i]);
    //     }
    //     #endif 

    //     // 或:
    //     // #if 常量表达式 常量为真则编译下面代码,否则不编译

    //     #if 0
    //     printf("%d\n",arr[1]);
    //     #endif

    //     return 0;
    // }

        // 分支条件编译:
        // #if 1==2
        // ...
        // #elif 2==2
        // ...
        // #else
        // ...
        // #endif

        // #if defined 和 #ifdef 用法相同

        // #if !defined(DEBUG)
        // ...
        // #endif
        // 等价于:
        // #ifndef
        // ...
        // #endif

        // 嵌套指令:
        // #ifdef debug
        //     #if osos
        //     ...
        //     #elif opop
        //     ...
        // #endif

        // 条件编译应用: 处理文件包含
        // 头文件被包含的方式:
        // 本地头文件 #include " "  默认现在源文件所在目录里查找,没找到去编译器安装路径的库里找
        // 库头文件 #include < > 直接去标准路径中查找,查找不到返回编译错误

        // 嵌套文件包含:同一文件被多次引用
        // 处理:
        // #ifndef __TEST_H__
        // #define __TEST_H__
        // int add(int,int);
        // #endif

        // 或者:
        // #pragma once   // 比较新,老版本可能不支持,但非常简洁
        // int add(int,int);

        // 预处理指令: 条件编译指令,#include,#define
        // 其他: #error #pragma #line -- 《c语言深度解刨》

// ***
    // offsetof(计算当前成员变量相对于起始位置的偏移量):
    // #include <stddef.h>
    // struct S
    // {
    //     char c1;
    //     int a;
    //     char c2;
    // }s;
    // int main()
    // {
    //     // 使用offsetof(struct_name,member_name)
    //     printf("%d\n",offsetof(struct S,a));
    //     // 编写一个宏计算成员偏移量:
    //     #define OFFSETOF(STRUCT_NAME,MEMBER_NAME) (int)(&(((STRUCT_NAME*)0)->MEMBER_NAME))
    //     printf("%d\n",OFFSETOF(struct S,a));
    //     return 0;
    // }

// *** 
// 题目讲解:
// 1.
// int main()
// {
//     unsigned char puc[4];
//     struct tagpim
//     {
//         unsigned char ucpim1;
//         unsigned char ucdata0:1;
//         unsigned char ucdata1:2;
//         unsigned char ucdata2:3;
//     }*pstpimdata;
//     pstpimdata = (struct tagpim*)puc;
//     memset(puc,0,4); // 00000000 00000000 00000000 00000000
//     pstpimdata->ucpim1 = 2; 
//     // 00000010 00000000 00000000 00000000
//     // 按照位段方式访问,首先开辟一个字节,全部使用,把2放进去,2 = 0010
//     pstpimdata->ucdata0 = 3; // 3 = 0x11
//     // 00000010 00000001 00000000 00000000
//     // 再开辟一个字节,但是先只用1bit,把1放到最低位
//     pstpimdata->ucdata1 = 4; // 4 = 0x100
//     // 00000010 00000001 00000000 00000000
//     // 截两位放进去
//     pstpimdata->ucdata2 = 5; // 5 = 0x101
//     // 00000010 00101001 00000000 00000000

//     printf("%02x %02x %02x\n",puc[0],puc[1],puc[2],puc[3]);
//     // 以十六进制打印,一次打印两位16进制数字, 02 29 00 00
//     return 0;
// } // 02 29 00

// 2.
// 当A=2,B=3时,pointer分配(9)个字节的空间?
// #define MAX_SIZE A+B
// struct _Record_Struct
// {
//     unsigned char a:4;
//     unsigned char b:2;
//     unsigned char c;
//     unsigned char d:1;
// }*env;
// // 此位段需要3bytes空间
// struct _Record_Struct* pointer = (struct _Record_Struct*)malloc(
//     sizeof((struct _Record_Struct)*MAX_SIZE);
// );
// 直接把字面表达式拿过来,即3*2+3=9

// 3.
// 判断输出结果:
// int main()
// {
//     union 
//     {
//         short k;
//         char i[2];
//     }*s,a;
//     s = &a;
//     s->i[0] = 0x39;
//     s->i[1] = 0x38;
//     // 小端字节序,内存存储倒过来是正常顺序
//     printf("%x\n",a.k); // 3839
//     return 0;
// }

// 4. 设计一个程序,找出偶数个元素的正整型数组中唯二存在的两个不成对数
int main()
{
    char arr[30] = {0};
    int i = 0;
    int t = 0;
    int sz = 0;
    int wei = 0;
    int a = 0;
    int b = 0;
    for (i=0;i<30;i++)
    {
        int input = 0;
        scanf("%d",&input);
        if (input == 0) break;
        arr[i] = input;
        sz++;
    }
    for (i=0;i<sz;i++)
    {
        t |= arr[i];
    }
    // printf("%d\n",t);
    for ( i = 0; i < 32; i++)
    {
        if (t%2) 
        {
            wei = i;
            break;
        }
        else t >>= 1;
    }
    
    for (i=0;i<sz;i++)
    {
        if ((arr[i]>>wei)%2 == 1) a ^=arr[i];
        
        else b ^=arr[i];
    }    
    printf("%d %d\n",a,b);
    return 0;
}








































