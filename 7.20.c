#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <math.h>
// �㷨 ���� ���ݽṹ ����
// �ַ�������:

// void reverse(char* str)
// {
//     assert(str); // ��֤�ַ����Ϸ���
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
//     // scanf("%s",str); // scanfֻ��ȡ�ո�֮ǰ��
//     gets(str); // ���Զ���һ���е����ݷŵ�����ָ���
//     reverse(str);
//     printf("%s\n",str);
//     return 0;
// }


// ���� a+aa+aaa+aaaa+....��ǰn��֮��,����a��nΪ��������
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


// ���1-100000��������:
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
//         int n = num(i); // num����λ��
//         int sum = epow(i,n); // �������λ���Ĵ���֮��
//         if (i == sum) printf("%d\n",i);
//     }
//     return 0;
// }


int main()
{
    int line = 0;
    scanf("%d",&line); // �ϰ�(�����м�)��������
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