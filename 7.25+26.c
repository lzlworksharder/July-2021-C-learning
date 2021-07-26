#include <stdio.h>
#include <string.h>
#include <assert.h>

// ***
    // int memcmp(const char* arr1, const char* arr2,size_t num); 比较内存的num个字节
    // 返回值和strcmp类似

// ***
    // memset - 内存设置
    // void* memset(void*dest,int c,size_t count);
    // c 设置的字符
    // count 设置多少字符,单位是字节!

    // int main()
    // {
    //     char arr[10] = {0};
    //     memset(arr,65,10); // 把10个字符的空间改成ascii码为65的字符(A)
    //     printf("%s\n",arr);
    //     return 0;
    // }


// ***
    // 自定义数据类型--结构体/枚举/联合体

    // 结构体
    // 结构是一些值的集合,这些值成为成员变量
    // 声明结构体类型
    
    // struct Stu
    // {
    //     char name[20];
    //     char tele[12];
    //     char gender[10];
    //     int age; // 结构体的成员变量
    // }s4,s5,s6; // 全局变量
    // struct Stu s3; // 全局变量
    // int main()
    // {
    //     // 局部结构体变量
    //     struct Stu s1;
    //     struct Stu s2;
    // }

    // 特殊声明:
    // struct 
    // {
    //     int a;
    //     char c;
    // }x; 匿名结构体类型,必须立即跟变量

    // struct
    // {
    //     int a;
    //     char c;
    // }*px; 匿名结构体指针

    // 结构体自引用:
    // 链表节点:
    // typedef struct Node
    // {
    //     int data; // 数据域
    //     struct Node n; // 错误写法,不能包含自己类型的变量
    //     struct Node* next; // 正确,大小可以确定 (指针域)
    // }Node;

    // 结构体变量的定义和初始化:
    // struct T
    // {
    //     double t;
    //     int a;
    // };
    // struct S
    // {
    //     char c;
    //     int a;
    //     struct T;
    //     double d;
    //     char arr[20];
    // };
    // int main()
    // {
    //     struct S s = {'c',100,{3.14,100},3.14,"hello"}; // 一个大括号,里面每个成员变量用逗号隔开
    //     // 成员变量用 . 访问
    //     return 0;
    // }

    // 结构体内存对齐:
    // struct S1
    // {
    //     char c1;
    //     int a;
    //     char c2;
    // };
    // struct S2
    // {
    //     char c1;
    //     char c2;
    //     int a;
    // };
    // int main()
    // {
    //     struct S1 s1 = {0};
    //     struct S2 s2 = {0};
    //     printf("%d %d\n",sizeof(s1),sizeof(s2));
    //     return 0;
    // }

    // 1. 第一个成员变量存在结构体变量偏移量为0的地址处
    // 2. 其他成员变量要对齐到某个数字(对齐数)的整数倍的地址处
    // 对齐数 = 编译器默认的对齐数与改成员变量大小的较小值 vs默认对齐数为8 gcc没有默认对齐数
    // 结构体总大小为最大对齐数的整数倍

    // struct S3
    // {
    //     double d;
    //     char c;
    //     int i;
    // }s3;

    // struct S4
    // {
    //     char c1;
    //     struct S3 s3;
    //     double d;
    // }s4;
    // 如果有结构体嵌套,按结构体变量内部的最大对齐数作为此结构体变量的对齐数
    // int main()
    // {
    //     printf("%d\n",sizeof(s3)); // 16
    //     printf("%d\n",sizeof(s4)); // 32
    //     return 0;
    // }
    // 为什么要内存对齐?
    // 1. 平台原因:有些平台中,假如访问int(或其他)时,必须要访问4(或其他)的倍数的内存,否则无法访问
    // 2. 32位平台,32根地址线,32根数据线,32个0/1相当于一次访问4个byte,对对齐的内存只需要访问一次,可以拿空间换取时间

    // 设计结构体节省空间方法:让占空间小的成员变量聚集在一起

    //修改默认对齐数:
    // #pragma pack(4) // 设置默认对齐数为4
    // struct S
    // {
    //     char c1; // 1
    //     // 3
    //     double d; // min(8,4) = 4 对齐数为4
    // };
    // #pragma pack() // 取消设置的默认对齐数
    // int main()
    // {
    //     struct S s;
    //     printf("%d\n",sizeof(s)); // 12
    //     return 0;
    // }

    // offsetof 计算结构体成员相对于起始位置的偏移量
    // #include <stddef.h>
    // struct S
    // {
    //     char c;
    //     int i;
    //     double d;
    // };
    // int main()
    // {
    //     printf("%d\n",offsetof(struct S,c)); // 0
    //     printf("%d\n",offsetof(struct S,i)); // 4
    //     printf("%d\n",offsetof(struct S,d)); // 8
    //     return 0;
    // }
    // 后期:offsetof宏的实现

    // 结构体传参:
    // struct S
    // {
    //     int a;
    //     char c;
    //     double d;
    // };
    // void Init(struct S* ps) // 传址(更好),只传四个字节,性能提升
    // {
    //     ps->a = 1030;
    //     ps->c = 'e'; // 指针初始化
    //     ps->d = 5.23;
    // }
    // void print1(struct S tmp) // 传值
    // {
    //     printf("%d %c %lf\n",tmp.a,tmp.c,tmp.d);
    // }
    // int main()
    // {
    //     struct S s = {0};
    //     Init(&s);
    //     print1(s);
    //     s.a = 100; // .初始化
    //     s.c = 'w';
    //     s.d = 3.14;
    //     print1(s);
    //     return 0;
    // }
    // // 结论:结构体传参时最好传地址!


// *** 
    // 结构体实现位段:
    // 位段的声明和结构类似,两个不同:
    // 1.成员必须是int,unsigned int,signed int,char,通常相同类型
    // 2.成员名后有一个冒号和数字
    // 位段 - 二进制位
    // struct S
    // {
    //     int _a:2; // 2bit
    //     int _b:5; // 5bit
    //     int _c:10; // 10bit
    //     int _d:30; // 30bit
    // };
    // // 47bit - 6bytes
    // int main()
    // {
    //     struct S s;
    //     printf("%d\n",sizeof(s)); // 8bytes
    //     return 0;
    // }
    // 位段内存分配:
    // 1.位段成员是整型(int,unsignedint,char)
    // 2.一次开辟一个整型,4bytes,或者1个char(都是char时),剩下不够用的丢掉,位段后面数字不能大于32
    // 3.位段涉及很多不确定因素,不具有平台可移植性
    // 位段:节省空间

    // struct S
    // {
    //     char a:3;
    //     char b:4;
    //     char c:5;
    //     char d:4;
    // };
    // int main()
    // {
    //     struct S s = {0};
    //     s.a = 10; // 1010 - 只能存010
    //     s.b = 20; // 10100 - 只能存0100
    //     s.c = 3; // 011 - 00011
    //     s.d = 4; // 100 - 0100
    //     // 假设从右到左(从一个byte的低位到高位)存: 为 0 0100 010, 000 00011, 0000 0100
    //     return 0;
    //     // 内存中换成16进制: 22 03 04
    // }

    // 位段跨平台:
    // int有无符号不确定
    // 位段中最大位的数目不能确定,32位32,16位16
    // 位段中成员在内存中从左到右还是反过来不确定
    // 一次开辟空间中剩余空间丢掉还是利用不确定

    // 位段的应用:网络数据传输


// ***
    // 枚举:把可能的取值一一列举
    // enum gender
    // {
    //     // 枚举的可能取值 - 常量
    //     male = 2, // 赋初始值,缺省0,之后的缺省为前一个+1
    //     female = 4,
    //     secret // 5
    // };

    // int main()
    // {
    //     enum gender s = male;
    //     s = female;
    //     // 不能给枚举类型的变量赋其它类型的值,不能 s = 2,不代表s = male
    //     printf("%d %d %d\n",male,female,secret);
    //     return 0;
    // }

    // 枚举大小同int

    // 枚举优点: 
    // 增加可读性可维护性;
    // 与#define相比有类型,更严谨
    // 防止命名污染(封装)
    // 便于调试
    // 使用方便,一次定义多个变量

    // 联合- 联合体 - 共用体
    // union Un
    // {
    //     char c;
    //     int i;
    // };
    // // 联合体大小至少是最大成员的大小
    // int main()
    // {
    //     union Un u;
    //     printf("%d\n",sizeof(u)); // 4
    //     printf("%p %p %p\n",&(u.c),&(u.i),&u);
    //     return 0;
    // }
    
    // 如何判断大小端:
    // union 
    // {
    //     char c;
    //     int i;
    // }u; //匿名联合体
    // int main()
    // {
    //     u.i = 1;
    //     if (u.c == 1) printf("小端\n");
    //     else printf("大端\n");
    //     return 0;
    // }
    
    // 判断联合体大小:
    // 联合体大小至少是最大成员大小
    // 当最大成员大小不是最大对齐数的整数倍时,对齐到整数倍
    // union Un
    // {
    //     int a; // 对齐数4
    //     char arr[5]; // 按元素算对齐数,对齐数1
    //     // 最大成员大小是5,最大对齐数是4,需要补齐到8,故最后联合体大小是8
    // }u;
    
    // int main()
    // {
    //     printf("%d\n",sizeof(u));
    //     return 0;
    // }













