#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <math.h>
// 算法 语言 数据结构 网络
// 字符串逆序:

// void reverse(char* str)
// {
//     assert(str); // 保证字符串合法性
//     int len = strlen(str);
//     char* left = str;
//     char* right = str + len - 1;
//     while (left < right)
//     {
//         char tmp = *left;
//         *left = *right;
//         *right = tmp;
//         left++;
//         right--;
//     }
// }
// int main()
// {
//     char str[256] = {0};
//     // scanf("%s",str); // scanf只读取空格之前的
//     gets(str); // 可以读入一整行的数据放到给定指针后
//     reverse(str);
//     printf("%s\n",str);
//     return 0;
// }


// 计算 a+aa+aaa+aaaa+....的前n项之和,其中a和n为给定数字
// int main()
// {
//     int a = 0;
//     int n = 0;
//     scanf("%d%d",&a,&n);
//     int ret = 0;
//     int i = 0;
//     int sum = 0;
//     for (i=0; i<n; i++)
//     {
//         ret = ret*10 + a;
//         sum += ret;
//     }
//     printf("%d\n",sum);
//     return 0;
// }


// 输出1-100000的自幂数:
// int num(int n)
// {
//     int count = 1;
//     while (n /= 10)
//     {
//         count++;
//     }
//     return count;
// }

// int epow(int i, int n)
// {
//     int j = 0;
//     int sum = 0;
//     for (j=0; j<n; j++)
//     {
//         sum += pow(i%10,n);
//         i /= 10;
//     }
//     return sum;
// }
// int main()
// {
//     // printf("%d",epow(123,2));
//     int i = 0;
//     for (i=0; i<=100000; i++)
//     {
//         int n = num(i); // num计算位数
//         int sum = epow(i,n); // 计算各个位数的次幂之和
//         if (i == sum) printf("%d\n",i);
//     }
//     return 0;
// }


int main()
{
    int line = 0;
    scanf("%d",&line); // 上半(包括中间)菱形行数
    int width = 2*line-1;
    int i = 0;
    for (i=0; i<line; i++)
    {
        int st = 2*i+1;
        int emp = (width - st)/2;
        int j = 0;
        int k = 0;
        for (j=0; j<emp; j++)
        {
            printf(" ");
        }
        for (k=0; k<st; k++)
        {
            printf("*");
        }
        for (j=0; j<emp; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
    for (i=0; i<line-1; i++)
    {
        int st = width - 2*(i+1);
        int emp = i+1;
        int j = 0;
        int k = 0;
        for (j=0; j<emp; j++)
        {
            printf(" ");
        }
        for (k=0; k<st; k++)
        {
            printf("*");
        }
        for (j=0; j<emp; j++)
        {
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}