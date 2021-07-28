#include <stdio.h>
#include <stdlib.h> // malloc.h
#include <string.h>
#include <errno.h>
// 内存分配: 1. 创建一个变量
// 栈区:局部变量,形参
// 堆区:动态内存
// 静态区:全局变量,静态变量

// 2.创建一个数组

// C语言可以支持变长数组(空间可以填变量)-C99
// 动态内存分配:要多少开多少空间
// 函数:malloc free calloc realloc (stdlib.h

// *** 
    // malloc和free:
    // void* malloc(size_t num); 申请num个byte空间,返回申请空间的地址
    // 申请十个整型:
    // int main()
    // {
    //     int* p = (int*)malloc(INT_MAX); // intmax 21亿多
    //     if (p == NULL)
    //     {
    //         printf("%s\n",strerror(errno)); // not enough space
    //     }
    //     else
    //     {
    //         int i = 0;
    //         for (i=0; i<10; i++)
    //         {
    //             p[i] = i;
    //         }
    //         for (i=0;i<10;i++)
    //         {
    //             printf("%d ",*(p+i));
    //         }
    //     }
    //     // 使用完毕要释放空间
    //     // void free(void* memblock);
    //     free(p); // 如果free空间不是动态开辟的,则释放无效
    //     p = NULL; // 防止再使用p利用此空间,将p赋值为NULL
    //     return 0;
    // }
    // 没有足够空间,返回NULL

// ***
    // void* calloc(size_t num,size_t size);
    // 开辟一个数组,num个元素,每个元素大小为size
    // 释放动态开辟的空间:free(p)
    // p = NULL;
    // calloc效率稍低,但是会把每个元素初始化为0

// *** 
    // realloc():调整动态内存开辟大小
    // void* realloc(void* memblock,size_t size);
    // memblock:之前开辟的空间  size:再开辟的字节数
    // int main()
    // {
    //     // 开辟20个字节空间
    //     int* p = (int*)malloc(20);
    //     // 给前20个字节赋值
    //     int i = 0;
    //     for (i=0; i<5; i++)
    //     {
    //         p[i] = i;
    //     }
    //     // 用realloc开辟新的40个内存
    //     int* p2 = realloc(p,40); // 用一个新的变量接受realloc返回值
    //     // 开辟不失败就还用p维护新的内存
    //     if (p2 != NULL)
    //     {
    //         p = p2;
    //     }
    //     // 给新的内存赋值
    //     for (i=5; i<10; i++)
    //     {
    //         p[i] = i;
    //     }
    //     // 打印内存中的值
    //     for (i=0; i<10; i++)
    //     {
    //         printf("%d ",p[i]);
    //     }
    //     // 用完还空间,指针置空
    //     free(p);
    //     p = NULL;
    //     return 0;
    // }
    // realloc使用注意事项:
    // 1. 如果p指向空间之后有足够的内存空间可以追加,则直接追加,后返回原来的p
    // 2. 如果p指向的空间之后没有足够空间可以追加,则realloc函数会重新找一块新的内存区域,
    // 开辟一块满足需求的空间,并且把原来内存中的数据拷贝回来,释放旧的内存,最后返回新开辟空间的地址
    // 3. 如果开辟失败,realloc返回空指针,如果把结果赋值给p则会造成原有数据丢失
    // 需要用一个新的变量接受realloc返回值.

    // realloc也能实现malloc的功能
    // int main()
    // {
    //     int* p = (int*)realloc(NULL,40); // 注意此时40是新的内存总体占40不是追加40
    //     // realloc第一个参数为NULL,和malloc一样
    //     return 0;
    // }

// *** 
    // 常见的动态内存错误:
    // 1.对空指针的解引用
    // int main()
    // {
    //     int *p = (int*)malloc(40);
    //     // malloc失败,p为NULL,空指针解引用及加减有问题
    //     *p = 0; // 有问题
    //     int i = 0;
    //     for (i=0; i<10; i++)
    //     {
    //         *(p+i) = i;
    //     }
    //     return 0;
    // }


    // 2.对动态内存的越界访问
    // int main()
    // {
    //     int* p = (int*)malloc(5* sizeof(int));
    //     if (p) // p不为空指针才执行
    //     {   
    //         int i = 0;
    //         for (i=0; i<10; i++)
    //         // 10个元素,越界访问
    //         {
    //             p[i] = i;
    //         }
    //         free(p);
    //         p = NULL;
    //      }
    //     return 0;
    // }

    // 3.对非动态开辟空间使用free
    // int a = 10;
    // int* p = &a;
    // *p = 20;
    // free(p);
    // p = NULL;
    // 此时a是在栈区开辟的,不能按动态内存处理

    // 4.使用free释放动态开辟内存的一部分
    // int main()
    // {
    //     int* p = (int*)malloc(40);
    //     if (p)
    //     {
    //         int i = 0;
    //         for (i=0; i<10; i++)
    //         {
    //             *p++ = i;
    //         }
    //     }
    //     free(p-10); // 不是p而是p-10,如果是p后面的空间是未知的
    //     return 0;
    // }

    // 5.对同一块动态内存多次释放
    // int main()
    // {
    //     int* p =(int*)malloc(40);
    //     if (p)
    //     {
    //         ;
    //     }
    //     free(p);
    //     // ...
    //     free(p);
    //     return 0;
    // }
    // free之后把p置为NULL,可以防止多次释放

    // 6.对动态开辟内存的忘记释放 (内存泄漏)

    // 不要在函数里返回一个栈空间的地址(即局部变量或数组的地址)!
    // 但可以返回一个堆空间的地址,堆空间地址只有free之后才会回收

// ***
    // c/c++程序分区:
    // 栈区
    // 堆区
    // 数据段(静态区)
    // 代码段(存放函数体(类成员函数和全局函数)的二进制代码,常量字符串)

// ***
    // 柔性数组:c99引入
    // struct S
    // {
    //     int n;
    //     int arr[]; // 结构体最后一个成员是位置大小的数组
    //     // 未知大小数组被称为柔性数组成员,数组大小可以调整
    //     // int arr[0];也行
    // }s;
    // int main()
    // {
    //     struct S s = {0};
    //     // printf("%d\n",sizeof(s)); // 4,并没有包含数组大小
    //     struct S* ps = (struct S*)malloc(sizeof(struct S)+5*sizeof(int));
    //     // 前四个给n开辟,后20个给数组开辟
    //     ps->n = 100;
    //     int i = 0;
    //     for (i=0; i<5; i++)
    //     {
    //         ps->arr[i] = i;
    //     } // 100 0 1 2 3 4
    //     // 给柔性数组重新指定大小为4+40(10个int)
    //     struct S *ptr = realloc(ps,44);
    //     if (ptr)
    //     {
    //         ps = ptr;
    //     }
    //     for (i=5;i<10;i++)
    //     {
    //         ptr->arr[i] = i;
    //     }
    //     // 打印数组
    //     for (i=0;i<10;i++)
    //     {
    //         printf("%d ",ptr->arr[i]);
    //     }
    //     free(ptr);
    //     ptr = NULL;
    //     return 0;
    // }


// struct S
// {
//     int n;
//     int* arr;
// };
// int main()
// {
//     struct S *ps = (struct S*)malloc(sizeof(struct S));
//     ps->arr = malloc(5*4);
//     int i = 0;
//     for (i=0;i<5;i++)
//     {
//         ps->arr[i] = i;
//     }
//     for (i=0;i<5;i++)
//     {
//         printf("%d ",ps->arr[i]);
//     }
//     // 调整大小
//     int* ptr = (int*)realloc(ps,10*4);
//     if (ptr)
//     {
//         ps->arr = ptr;
//     }
//     // 释放内存
//     free(ps->arr);
//     free(ps);
//     ps = NULL;
//     return 0;
// } // 和上面柔性数组的方法都能达成效果,即实现结构体中数组调节大小效果

    // 柔性数组的特点:
    // 1. malloc使用次数少
    // 2. 内存碎片少,内存利用率高
    // 3. 内存连续,访问效率更高

    // 寄存器
    // 高速缓存 cache 
    // 内存
    // 硬盘

    // 越往上速度越快,容量越小
    
    // 柔性数组前面至少包含一个其他结构体成员



































