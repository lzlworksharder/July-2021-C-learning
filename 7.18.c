// pointer
#include <stdio.h>
#include <string.h>
// int main()
// {
//     char* p = "123456"; // p里存的是字符串首个字符的地址
//     printf("%s\n",p); // 打印出来的是整个字符串,没有问题
//     return 0;
// } // "123456"是一个常量字符串,*p不能修改,常量字符串可以交给一个const修饰的指针
// segmentfault.com
// stackoverflow.com

// int main()
// {
//     char arr1[] = "abcdef";
//     char arr2[] = "abcdef"; // 开辟新的空间存储,arr1和arr2的位置不同
//     const char* p1 = "abcdef"; // p指向一个常量字符串.两个指针都指向同一个常量字符串,实质是一样的
//     const char* p2 = "abcdef";
//     if (arr1 == arr2) printf("yes\n");
//     else printf("no\n");
//     if (p1 == p2) printf("yes1\n");
//     else printf("no1\n");
//     return 0;
// }

// 指针数组 是数组,用来存放指针
// int main() // 指针数组--嵌套列表
// {
//     int arr1[] = {1,2,3,4,5};
//     int arr2[] = {2,3,4,5,6};
//     int arr3[] = {3,4,5,6,7};
//     int* parr[] = {arr1,arr2,arr3};
//     int i = 0;
//     for (i=0;i<3;i++)
//     {
//         int j = 0;
//         for (j=0;j<5;j++)
//         {
//             printf("%d ",*(parr[i]+j));
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 数组指针--指针

// int main()
// {
//     // int *p = NULL; // 整形指针--存放整形的地址
//     // char *pc = NULL; // 字符指针--存放字符的地址
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10}; //数组指针--指向数组的指针--存放数组的地址
//     // arr首元素地址;&arr[0]首元素的地址
//     // &arr 数组的地址(整个数组!)
//     int (*p)[10] = &arr;
//     // 对p进行解引用,*p得到一整个数组,用下标进行访问:
//     printf("%d\n",(*p)[4]);
//     // *p也可以指arr首个元素的地址:
//     printf("%d\n",*((*p)+4));
//     // p为数组指针,先和*结合,说明p是个指针,中括号说明p指向一个数组
//     return 0;
// }

// int main()
// {
//     char* arr[5] = {};
//     char* (*pa)[5] = &arr;
//     // *pa说明pa是一个指针;[]说明它指向一个数组;char*说明指向的数组中的元素是char*
//     return 0;
// }




// void print(int (*p)[5],int x,int y)
// {
//     int i = 0;
//     int j = 0;
//     for (i = 0; i < x; i++)
//     {
        
//         for (j = 0; j < y; j++)
//         {
//             // printf("%d ",p[i][j]); 等价于下面的语句:
//             printf("%d ",*(*(p+i))+j); // p+i表示第i行的地址,*(p+i)表示第i行的数组名,相当于p[i],即第i行第一个元素的地址
//         }//    也相当于: (*(p+i))[j]  中括号前面的括号必须要加,否则p+i和中括号先结合
//         printf("\n");
//     }
// }
// int main() // 打印嵌套列表:
// {
//     int arr[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
//     print(arr,3,5); // 传过去一个数组指针
//     return 0;
// }

// int (*parr2) [10];
// int (*parr[10])[5]; 
// parr先和[]结合,说明他是一个数组,然后去掉parr[]之后,
// 剩下的是 int (*   )[5],这是他的类型,这是一个数组指针类型,说明:
//parr 是一个有是个元素的数组,其中每个元素是一个数组指针,每个数组指针指向
//的数组有5个元素,并且均为整型


//函数指针:指向函数的指针 &函数名 和 函数名 都是函数的地址
// int Add(int x,int y)
// {
//     return x+y;
// }
// int main()
// {
//     int (*pa)(int,int) = Add; // 函数指针:变量名先和*结合,后面的小括号里放参数类型,前面的int表示返回类型是int
//     printf("%d\n",(*pa)(1,2));
//     return 0;
// }

// (*(void (*)())0)();
// void (*)()函数指针, 括号括起来是对0的强制类型转换,0成为一个函数的地址
// 地址解引用之后调用它,无参数
// 此为一次函数调用,调用地址为0的无参数返回void的函数

// void (*signal(int,void(*)(int)))(int);  一个函数声明

// signal(int,void(*)(int)) 一个函数,第一个参数为整型,第二个参数为一个函数指针,指向的函数有一个整型参数无返回值
// 除去signal部分,剩下的是signal函数的返回类型,即 void (*)(int),故返回一个函数指针,此指针指向一个有一个整型参数,无返回值的函数

// 简洁版:
// typedef void(*pfun)(int); // 一般typedef写成 typedef unsigned int uint; 但这里的pfun不能写到后面而要写到括号里
// pfun signal(int,pfun); // 这两句语句合起来等于上边一条语句

// 如果pa是函数指针,不解引用也可以直接调用:
// int (*pa)(int,int) = Add;
// a = pa(1,2);
// 但是不可以 *pa(1,2),*pa必须括起来

// 函数指针数组
// int (*parr[4])(int,int) = {add,sub,mul,div}; 函数指针数组

// char* my_strcpy(char*,const char*);
// 1.写函数指针:
// 2.写一个函数指针数组,能存4个此类函数的地址:
// char* (*pfun)(char*,const char*) = my_strcpy;
// char* (*pfun[4])(char*,const char*);

// typedef char* (*pstr)(char*,const char*);
// pstr pfun[4] = {...}


// 简易计算器:1234对应加减乘除,0退出
int add(int x,int y)
{
    return x+y;
}
int sub(int x,int y)
{
    return x-y;
}
int mul(int x,int y)
{
    return x*y;
}
int div(int x,int y)
{
    return x/y;
}
int yihuo(int x,int y)
{
    return x^y;
}
int main()
{
    int x = 0;
    int y = 0;
    int input = 0;
    // 编写函数指针数组:
    int (*parr[])(int,int) = {0,add,sub,mul,div,yihuo}; // 0要放进去和input匹配
    int sz = sizeof(parr)/sizeof(parr[0]);
    do
    {
        printf("请输入操作:\n");
        scanf("%d",&input);
        if (input==0) printf("退出");
        else if (input > sz-1 || input < 0) printf("输入错误");
        else
        {
            printf("请输入操作数:\n");
            scanf("%d%d",&x,&y);
            printf("%d\n",parr[input](x,y));
        }
    } while (input);
    return 0;
}