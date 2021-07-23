#include <stdio.h>
#include <string.h>
#include <assert.h>


    // int main() // 无限死循环
// {
//     int i = 0;
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     for (i=0; i<=12; i++)
//     {
//         arr[i] = 0;
//         printf("hhhh\n");
//     }
//     return 0;
// }
// 栈区的默认使用:先使用高地址处空间,再用低地址空间
// 数组随着下标增长,地址由低到高变化
// 数组越界访问时,从下往上访问,就有可能访问到先创建的i,从而改变i
// 不同编译器布局空间不同
// 把arr和i交换位置则不会死循环


// ***
    // unsigned char a = 200;
    // unsigned char b = 100;
    // unsigned char c = 0;
    // c = a+b;
    // printf("%d %d\n",a+b,c);
    // unsigned char-1个字节-8bit位
    // 0-255   有符号:-128-127
    // a+b不是整型,加减算术操作时整型提升
    // a:200 = 11001000 省略前三个byte
    // b:100 = 01100100 省略前三个byte
    // 相加:00000000000000000000000100101100 :a+b
    // c只能存后八个bit
    // c = 00101100
    // a+b少了压缩放进c的过程,直接以4个byte的整型大小打印,结果不同
    // a+b翻译成原码就是300,c=44


// ***
    // unsigned int a = 0x1234;
    // unsigned char b = *(unsigned char*) &a;
    // printf("%d\n",b);
    // // 在32位大端处理器上b=?
    // 0x1234 = 0x 00 00 12 34
    // 大端:
    // 低  00 00 12 34 高
    // 小端:
    // 低 34 12 00 00 低
    // unsigned char* 只能访问一个字节,只能访问到00,故结果为0x00
    // 小端52

// ***
    // char a[1000] = {0};
    // int i = 0;
    // for (i=0; i<1000; i++)
    // {
    //     a[i] = -1-i;
    // }
    // printf("%d\n",strlen(a));
    // char只能存-128-127
    // -1 -2 ... -128 127 126 125 ... 3 2 1 0 // 0在char里是\0
    // 255 
    // 转圈:
    // -1   ->     0
    // -2        1
    // ...        2
    // -127     ...
    // -128    <-   127 (01111111)
    // 10000000直接翻译成-128
 
 
 
 // ***
    // 打印杨辉三角(10*10):
    // int arr[10][10] = {0};
    // int i = 0;
    // int j = 0;
    // for (i=0;i<10;i++)
    // {
    //     for (j=0;j<10;j++)
    //     {
    //         if (j==0) arr[i][j] = 1;
    //         else 
    //         {
    //             if (i>=1) arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
    //         }
    //     }
    // }
    // for (i=0;i<10;i++)
    // {
    //     for (j=0;j<10;j++)
    //     {
    //         if (i>=j) printf("%-3d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }



// ***
    // 猜凶手:
    // 3真一假:
    // a:不是我
    // b:是c
    // c:是d
    // d:c在胡说
    // 确定谁是凶手
    // 排除法:
    //     int killer = 0;
    //     for (killer = 'a'; killer <= 'd'; killer++)
    //     {
    //         if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
    //             printf("killer = %c\n",killer);
    //     }


// *** 
    // 5个人只说了一半;猜出名次:
    // int a = 0;
    // int b = 0;
    // int c = 0;
    // int d = 0;
    // int e = 0;
    // 五层循环判断即可,每个人的两句话加在一起为1

// ***
    // free释放掉一个指针变量时,指针变量不会被置为null,不会更改指针内容,但应该被置为空指针
    // #include <stdlib.h>
    // int *p = (int*)malloc(10*sizeof(int));
    // // 使用空间
    // //***
    // //释放空间:
    // free(p);
    // p = NULL;

// ***
    // 定义一个函数指针,指向的函数有两个int形参并返回一个函数指针,返回的指针
    // 指向一个有一个int形参并且返回int的函数,下面那个是正确的: A
    // A. int (*(*F)(int,int))(int)
    // B. int (*F)(int,int)
    // C. int (*(*F)(int,int))
    // D. *(*F)(int,int)(int)

// *** 
    // 声明一个指向含有10个元素的指针,其中每个元素是一个函数指针,是该函数的返回值是int,参数是int*,正确的是:
    // A. (int* p[10])(int*)
    // B. int[10] *p(int*)
    // C. int(*(*p)[10])(int*)
    // D. int((int*)[10])*p
    // C


// ***
    // 下面代码中函数参数设计哪个是正确的:
    // int arr[3][5] = {1,2,3,4,5,6,7,8,9,10};
    // print_Arr(arr,3,5);
    // A. int arr[][],int,int
    // B. int* arr,int,int
    // C. int (*arr)[5],int,int
    // D. int (*arr)[3],int,int
    // C

// ***
    // 模拟实现qsort(冒泡排序)

// *** 
    // 下面代码输出的结果是:
    // int aa[2][5] = {10,9,8,7,6,5,4,3,2,1};
    // int *ptr1 = (int*)(&aa+1);
    // int* ptr2 = (int*)(*(aa+1));
    // printf("%d,%d",*(ptr1-1),*(ptr2-1));
    // 1,6

// ***
    // 实现一个函数,可以左旋字符串中的k个字符.
    // 如:abcd左旋一个字符得到bcda

    // 暴力求解法:
    // char arr[] = "abcdef";
    // int k = 0;
    // scanf("%d",&k);
    // int i = 0;
    // int len = strlen(arr);
    // for (i=0; i<k; i++)
    // {
    //     char tmp = arr[0];
    //     int j = 0;
    //     for (j=0; j<len-1; j++)
    //     {
    //         arr[j] = arr[j+1];
    //     }
    //     arr[len-1] = tmp;
    // }
    // printf("%s\n",arr);

    // 三步翻转法: 逆序前面,逆序后面,逆序总体
    // void reverse(char* ps, char* pe)
    // {
    //     assert(ps);
    //     assert(pe);
    //     while (ps<pe)
    //     {
    //         char tmp = *ps;
    //         *ps = *pe;
    //         *pe = tmp;
    //         ps++;
    //         pe--;
    //     }
    // }
    // int main()
    // {
    //     char arr[] = "abcdef";
    //     int k = 0;
    //     scanf("%d",&k);
    //     int len = strlen(arr);
    //     k = k%6;
    //     reverse(arr,arr+k-1);
    //     reverse(arr+k,arr+len-1);
    //     reverse(arr,arr+len-1);
    //     printf("%s\n",arr);
    //     return 0;
    // }
    // 初始化数组不要写 char* arr = "123456";
    // 因为此时arr指向一个常量字符串,该常量字符串不可变


// ***
    // 判断一个字符串是否能旋转得到另一个字符串:
    // abcdef;
    // efabcd;
    // 看第二个字符串是否是第一个串*2后的子串:
    // 即: abcdefabcdef中是否有efabcd
    // int is_left_move(char* str1,char* str2)
    // {
    //     if (strlen(str1) != strlen(str2)) return 0;
    //     // 1.在arr1中追加一个str1
    //     // strcat(arr1,arr2) arr1后字符串追加arr2
    //     // 自己给自己追加不能用strcat, str("abc","abc")因为a放到\0的位置后\0没了,在追加时候找不到\0无法停止
    //     // strncat(dest,source,n) n为追加字符个数
    //     strncat(str1,str1,strlen(str1));
    //     // 2.判断str2是否是str1的子串
    //     // strstr(str1,str2) 在str1里找str2,找到返回字符地址,找不到返回一个空指针
    //     char* ret = strstr(str1,str2);
    //     if (ret != NULL) return 1;
    //     else return 0;
    // }

    // int main()
    // {
    //     char arr1[30] = "abcdef";
    //     char arr2[] = "cdefabc";
    //     int ret = is_left_move(arr1,arr2);
    //     if (ret) printf("yes\n");
    //     else printf("No\n");
    //     return 0;
    // }


// ***
    // 杨氏矩阵:有一个数字矩阵,矩阵的每行从左到右是递增的,每列从上到下是递增的,请编写程序在这样的矩阵中查找某个数字是否存在
    // 要求:时间复杂度小于O(n);

    // 右上角元素a,查找元素k,k>a排除一行,k<a排除一列; 同理左下角也可
    int find(int arr[3][3], int k, int* px, int* py)
    {
        int x = 0;
        int y = *py-1;
        while (x<=*px-1 && y>=0)
        {
            if (k>arr[x][y]) x++;
            else if(k<arr[x][y]) y--;
            else 
            {
                *px = x;
                *py = y;
                return 1;
            }
        }
        return 0;
    }
    int main()
    {
        int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
        int k = 7;
        int x = 3;
        int y = 3;
        scanf("%d",&k);
        int ret = find(arr,k,&x,&y); // 传指针,可以操作外面的数,相当于带回来坐标(坐标为2个数,但一般无法返回两个值)
        if (ret) 
        {
            printf("找到了\n"); 
            printf("下标为:x=%d,y=%d\n",x,y);
        }
        else printf("找不到\n");
        return 0;
    }

























