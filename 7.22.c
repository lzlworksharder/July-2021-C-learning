#include <stdio.h>
#include <string.h>
#include <assert.h>


    // int main() // ������ѭ��
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
// ջ����Ĭ��ʹ��:��ʹ�øߵ�ַ���ռ�,���õ͵�ַ�ռ�
// ���������±�����,��ַ�ɵ͵��߱仯
// ����Խ�����ʱ,�������Ϸ���,���п��ܷ��ʵ��ȴ�����i,�Ӷ��ı�i
// ��ͬ���������ֿռ䲻ͬ
// ��arr��i����λ���򲻻���ѭ��


// ***
    // unsigned char a = 200;
    // unsigned char b = 100;
    // unsigned char c = 0;
    // c = a+b;
    // printf("%d %d\n",a+b,c);
    // unsigned char-1���ֽ�-8bitλ
    // 0-255   �з���:-128-127
    // a+b��������,�Ӽ���������ʱ��������
    // a:200 = 11001000 ʡ��ǰ����byte
    // b:100 = 01100100 ʡ��ǰ����byte
    // ���:00000000000000000000000100101100 :a+b
    // cֻ�ܴ��˸�bit
    // c = 00101100
    // a+b����ѹ���Ž�c�Ĺ���,ֱ����4��byte�����ʹ�С��ӡ,�����ͬ
    // a+b�����ԭ�����300,c=44


// ***
    // unsigned int a = 0x1234;
    // unsigned char b = *(unsigned char*) &a;
    // printf("%d\n",b);
    // // ��32λ��˴�������b=?
    // 0x1234 = 0x 00 00 12 34
    // ���:
    // ��  00 00 12 34 ��
    // С��:
    // �� 34 12 00 00 ��
    // unsigned char* ֻ�ܷ���һ���ֽ�,ֻ�ܷ��ʵ�00,�ʽ��Ϊ0x00
    // С��52

// ***
    // char a[1000] = {0};
    // int i = 0;
    // for (i=0; i<1000; i++)
    // {
    //     a[i] = -1-i;
    // }
    // printf("%d\n",strlen(a));
    // charֻ�ܴ�-128-127
    // -1 -2 ... -128 127 126 125 ... 3 2 1 0 // 0��char����\0
    // 255 
    // תȦ:
    // -1   ->     0
    // -2        1
    // ...        2
    // -127     ...
    // -128    <-   127 (01111111)
    // 10000000ֱ�ӷ����-128
 
 
 
 // ***
    // ��ӡ�������(10*10):
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
    // ������:
    // 3��һ��:
    // a:������
    // b:��c
    // c:��d
    // d:c�ں�˵
    // ȷ��˭������
    // �ų���:
    //     int killer = 0;
    //     for (killer = 'a'; killer <= 'd'; killer++)
    //     {
    //         if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
    //             printf("killer = %c\n",killer);
    //     }


// *** 
    // 5����ֻ˵��һ��;�³�����:
    // int a = 0;
    // int b = 0;
    // int c = 0;
    // int d = 0;
    // int e = 0;
    // ���ѭ���жϼ���,ÿ���˵����仰����һ��Ϊ1

// ***
    // free�ͷŵ�һ��ָ�����ʱ,ָ��������ᱻ��Ϊnull,�������ָ������,��Ӧ�ñ���Ϊ��ָ��
    // #include <stdlib.h>
    // int *p = (int*)malloc(10*sizeof(int));
    // // ʹ�ÿռ�
    // //***
    // //�ͷſռ�:
    // free(p);
    // p = NULL;

// ***
    // ����һ������ָ��,ָ��ĺ���������int�ββ�����һ������ָ��,���ص�ָ��
    // ָ��һ����һ��int�ββ��ҷ���int�ĺ���,�����Ǹ�����ȷ��: A
    // A. int (*(*F)(int,int))(int)
    // B. int (*F)(int,int)
    // C. int (*(*F)(int,int))
    // D. *(*F)(int,int)(int)

// *** 
    // ����һ��ָ����10��Ԫ�ص�ָ��,����ÿ��Ԫ����һ������ָ��,�Ǹú����ķ���ֵ��int,������int*,��ȷ����:
    // A. (int* p[10])(int*)
    // B. int[10] *p(int*)
    // C. int(*(*p)[10])(int*)
    // D. int((int*)[10])*p
    // C


// ***
    // ��������к�����������ĸ�����ȷ��:
    // int arr[3][5] = {1,2,3,4,5,6,7,8,9,10};
    // print_Arr(arr,3,5);
    // A. int arr[][],int,int
    // B. int* arr,int,int
    // C. int (*arr)[5],int,int
    // D. int (*arr)[3],int,int
    // C

// ***
    // ģ��ʵ��qsort(ð������)

// *** 
    // �����������Ľ����:
    // int aa[2][5] = {10,9,8,7,6,5,4,3,2,1};
    // int *ptr1 = (int*)(&aa+1);
    // int* ptr2 = (int*)(*(aa+1));
    // printf("%d,%d",*(ptr1-1),*(ptr2-1));
    // 1,6

// ***
    // ʵ��һ������,���������ַ����е�k���ַ�.
    // ��:abcd����һ���ַ��õ�bcda

    // ������ⷨ:
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

    // ������ת��: ����ǰ��,�������,��������
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
    // ��ʼ�����鲻Ҫд char* arr = "123456";
    // ��Ϊ��ʱarrָ��һ�������ַ���,�ó����ַ������ɱ�


// ***
    // �ж�һ���ַ����Ƿ�����ת�õ���һ���ַ���:
    // abcdef;
    // efabcd;
    // ���ڶ����ַ����Ƿ��ǵ�һ����*2����Ӵ�:
    // ��: abcdefabcdef���Ƿ���efabcd
    // int is_left_move(char* str1,char* str2)
    // {
    //     if (strlen(str1) != strlen(str2)) return 0;
    //     // 1.��arr1��׷��һ��str1
    //     // strcat(arr1,arr2) arr1���ַ���׷��arr2
    //     // �Լ����Լ�׷�Ӳ�����strcat, str("abc","abc")��Ϊa�ŵ�\0��λ�ú�\0û��,��׷��ʱ���Ҳ���\0�޷�ֹͣ
    //     // strncat(dest,source,n) nΪ׷���ַ�����
    //     strncat(str1,str1,strlen(str1));
    //     // 2.�ж�str2�Ƿ���str1���Ӵ�
    //     // strstr(str1,str2) ��str1����str2,�ҵ������ַ���ַ,�Ҳ�������һ����ָ��
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
    // ���Ͼ���:��һ�����־���,�����ÿ�д������ǵ�����,ÿ�д��ϵ����ǵ�����,���д�����������ľ����в���ĳ�������Ƿ����
    // Ҫ��:ʱ�临�Ӷ�С��O(n);

    // ���Ͻ�Ԫ��a,����Ԫ��k,k>a�ų�һ��,k<a�ų�һ��; ͬ�����½�Ҳ��
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
        int ret = find(arr,k,&x,&y); // ��ָ��,���Բ����������,�൱�ڴ���������(����Ϊ2����,��һ���޷���������ֵ)
        if (ret) 
        {
            printf("�ҵ���\n"); 
            printf("�±�Ϊ:x=%d,y=%d\n",x,y);
        }
        else printf("�Ҳ���\n");
        return 0;
    }

























