// pointer
#include <stdio.h>
#include <string.h>
// int main()
// {
//     char* p = "123456"; // p�������ַ����׸��ַ��ĵ�ַ
//     printf("%s\n",p); // ��ӡ�������������ַ���,û������
//     return 0;
// } // "123456"��һ�������ַ���,*p�����޸�,�����ַ������Խ���һ��const���ε�ָ��
// segmentfault.com
// stackoverflow.com

// int main()
// {
//     char arr1[] = "abcdef";
//     char arr2[] = "abcdef"; // �����µĿռ�洢,arr1��arr2��λ�ò�ͬ
//     const char* p1 = "abcdef"; // pָ��һ�������ַ���.����ָ�붼ָ��ͬһ�������ַ���,ʵ����һ����
//     const char* p2 = "abcdef";
//     if (arr1 == arr2) printf("yes\n");
//     else printf("no\n");
//     if (p1 == p2) printf("yes1\n");
//     else printf("no1\n");
//     return 0;
// }

// ָ������ ������,�������ָ��
// int main() // ָ������--Ƕ���б�
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

// ����ָ��--ָ��

// int main()
// {
//     // int *p = NULL; // ����ָ��--������εĵ�ַ
//     // char *pc = NULL; // �ַ�ָ��--����ַ��ĵ�ַ
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10}; //����ָ��--ָ�������ָ��--�������ĵ�ַ
//     // arr��Ԫ�ص�ַ;&arr[0]��Ԫ�صĵ�ַ
//     // &arr ����ĵ�ַ(��������!)
//     int (*p)[10] = &arr;
//     // ��p���н�����,*p�õ�һ��������,���±���з���:
//     printf("%d\n",(*p)[4]);
//     // *pҲ����ָarr�׸�Ԫ�صĵ�ַ:
//     printf("%d\n",*((*p)+4));
//     // pΪ����ָ��,�Ⱥ�*���,˵��p�Ǹ�ָ��,������˵��pָ��һ������
//     return 0;
// }

// int main()
// {
//     char* arr[5] = {};
//     char* (*pa)[5] = &arr;
//     // *pa˵��pa��һ��ָ��;[]˵����ָ��һ������;char*˵��ָ��������е�Ԫ����char*
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
//             // printf("%d ",p[i][j]); �ȼ�����������:
//             printf("%d ",*(*(p+i))+j); // p+i��ʾ��i�еĵ�ַ,*(p+i)��ʾ��i�е�������,�൱��p[i],����i�е�һ��Ԫ�صĵ�ַ
//         }//    Ҳ�൱��: (*(p+i))[j]  ������ǰ������ű���Ҫ��,����p+i���������Ƚ��
//         printf("\n");
//     }
// }
// int main() // ��ӡǶ���б�:
// {
//     int arr[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
//     print(arr,3,5); // ����ȥһ������ָ��
//     return 0;
// }

// int (*parr2) [10];
// int (*parr[10])[5]; 
// parr�Ⱥ�[]���,˵������һ������,Ȼ��ȥ��parr[]֮��,
// ʣ�µ��� int (*   )[5],������������,����һ������ָ������,˵��:
//parr ��һ�����Ǹ�Ԫ�ص�����,����ÿ��Ԫ����һ������ָ��,ÿ������ָ��ָ��
//��������5��Ԫ��,���Ҿ�Ϊ����


//����ָ��:ָ������ָ�� &������ �� ������ ���Ǻ����ĵ�ַ
// int Add(int x,int y)
// {
//     return x+y;
// }
// int main()
// {
//     int (*pa)(int,int) = Add; // ����ָ��:�������Ⱥ�*���,�����С������Ų�������,ǰ���int��ʾ����������int
//     printf("%d\n",(*pa)(1,2));
//     return 0;
// }

// (*(void (*)())0)();
// void (*)()����ָ��, �����������Ƕ�0��ǿ������ת��,0��Ϊһ�������ĵ�ַ
// ��ַ������֮�������,�޲���
// ��Ϊһ�κ�������,���õ�ַΪ0���޲�������void�ĺ���

// void (*signal(int,void(*)(int)))(int);  һ����������

// signal(int,void(*)(int)) һ������,��һ������Ϊ����,�ڶ�������Ϊһ������ָ��,ָ��ĺ�����һ�����Ͳ����޷���ֵ
// ��ȥsignal����,ʣ�µ���signal�����ķ�������,�� void (*)(int),�ʷ���һ������ָ��,��ָ��ָ��һ����һ�����Ͳ���,�޷���ֵ�ĺ���

// ����:
// typedef void(*pfun)(int); // һ��typedefд�� typedef unsigned int uint; �������pfun����д�������Ҫд��������
// pfun signal(int,pfun); // �������������������ϱ�һ�����

// ���pa�Ǻ���ָ��,��������Ҳ����ֱ�ӵ���:
// int (*pa)(int,int) = Add;
// a = pa(1,2);
// ���ǲ����� *pa(1,2),*pa����������

// ����ָ������
// int (*parr[4])(int,int) = {add,sub,mul,div}; ����ָ������

// char* my_strcpy(char*,const char*);
// 1.д����ָ��:
// 2.дһ������ָ������,�ܴ�4�����ຯ���ĵ�ַ:
// char* (*pfun)(char*,const char*) = my_strcpy;
// char* (*pfun[4])(char*,const char*);

// typedef char* (*pstr)(char*,const char*);
// pstr pfun[4] = {...}


// ���׼�����:1234��Ӧ�Ӽ��˳�,0�˳�
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
    // ��д����ָ������:
    int (*parr[])(int,int) = {0,add,sub,mul,div,yihuo}; // 0Ҫ�Ž�ȥ��inputƥ��
    int sz = sizeof(parr)/sizeof(parr[0]);
    do
    {
        printf("���������:\n");
        scanf("%d",&input);
        if (input==0) printf("�˳�");
        else if (input > sz-1 || input < 0) printf("�������");
        else
        {
            printf("�����������:\n");
            scanf("%d%d",&x,&y);
            printf("%d\n",parr[input](x,y));
        }
    } while (input);
    return 0;
}