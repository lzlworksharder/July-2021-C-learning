#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ˳��: C -- �������ݽṹ(˳���,����,������) -- c++ -- �߼����ݽṹ


// C����Ԥ����:
// ���뻷��:Դ�ļ���exe�����Ĺ���,exe�зŵ��Ƕ����Ƶ���Ϣ,���Է��뻷����Դ����(�ı��ļ�)ת��Ϊ������ָ��
// ���л���:exe������������Ļ���
// ÿ��Դ�ļ����ᾭ����������������Ŀ���ļ�:test.obj
// ����Ŀ���ļ�����������,���ӿ����ɿ�ִ�г���
// �����Ϊ�����׶�:Ԥ����,����,���
// linux����: gcc -E test.c > test.i Ԥ���뵽test.i�ļ�

// Ԥ����:
// 1. #includeͷ�ļ��İ���
// 2. ע��ɾ��,ʹ�ÿո��滻ע��
// 3. #define ������ŵ��滻
// �ܽ�:�ı�����

// ����:gcc -S test.i ����test.i�ļ�
// ��c���뷭��ɻ�����
// 1.�﷨����
// 2.�ʷ�����
// 3.�������
// 4.���Ż��� ������,ȫ�ֱ���

// ���: gcc -c test.s  ����test.o�ļ�(obj�ļ�)
// �ѻ�����ת���ɶ����ƴ���
// �γɷ��ű� ����(�ֲ�����������)+��ַ(ֻ�к�������ʱ����һ����Ч�ĵ�ַ)

// ����:
// 1.�ϲ��α�
// .o�ļ��ֶ�,�θ�ʽһ��(elf),�������ݽ��кϲ�
// 2.���ű�ĺϲ����ض�λ
// �ϲ���ֻ������Ч�ĵ�ַ

// ���л���:
// 1.���������ڴ�
// 2.��ʼִ�г���,����main����
// 3.����ʹ������ʱ��ջ�洢�����ֲ������ͷ��ص�ַ,Ҳ��ʹ��static��̬�ڴ�
// 4.��ֹ����,���������

// ***
    // Ԥ�������:

    // Ԥ�������:
    // __FILE__ �ļ�����·��
    // __LINE__ �������ڵ��к�
    // __DATE__
    // __TIME__ ʱ�������
    // __FUNCTION__ ���ں�����
    // __STDC__ ��ѭc���Ա�׼����1,���򷵻�0

    // Ԥ����ָ��:
    // #define include / pragma pack....
    // #define ��ʶ��
    // #define MAX 100
    // #define STR "hehe"
    // #define reg register Ҳ�����滻�ؼ���,�����....
    // #define do_forever for(;;)
    // #define ������ ��������

    // #define ������Ҫ+�ֺ�

    // #define ����� ������:
    // #define SQUARE(X) X*X ����Ҫ��������,�������Ž�����Ϊ�Ǻ�����һ����
    // int ret = SQUARE(5); // 25
    // int ret = SQUARE(5+1); // 11
    // ������ȫֱ���滻,���Ǵ���,����˳����ܳ����� 5+1*5+1=11,��X�����ż���

    // #define DOUBLE(X) ((X)+(X)) д��ʱ��Ҫ��ϧ����
    // #define�滻����: 1.������,���Ƿ������#define����ķ���,����������滻
    // 2.�滻�ı������뵽ԭ���ı�λ��,��������ֵ�滻(�����滻�����κ�����)
    // 3.�ٴ�ɨ��,��define���ظ�����

    // �겻�ܳ��ֵݹ�

    // #��##:

    // #X:�Ѻ�Ĳ��������ַ�����:
    // #define PRINT(X) printf("the value of"#X "is %d\n",X)
    // #X ����������Ĳ�����Ӧ���ַ���
    // #define PRINT(X) printf("the value of "#X" is %d\n",X)
    // int main()
    // { 
    //     int c = 10+30;
    //     PRINT(c);
    //     return 0;
    // }

    // X##Y:�����˵�X Y�ϲ�
    // #define combine(x,y) x##y
    // int main()
    // {
    //     int class84 = 100;
    //     printf("%d\n",combine(class,84)); // class+84=class84 ������ϲ�
    //     return 0;
    // }

    // ���и����õĺ����:
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
    // ����: ������Ҫ�ں��д��и�����(a++�ȴ�������Ч�������)

    // ��������ֵ������:
    // ��������ʱ���к������úͷ��صĿ���
    // ��������(����������������),Ч�ʸ���,û�к������úͷ��صĿ���

    // �������:
    // ���ʹ�ú�ʱ,�����Ƚϳ���������Ӵ��볤��
    // ���޷�����,����ֻ�ܵ��Կ�ִ�г���.exe,�滻�Ĺ�����Ԥ����׶ξ��Ѿ������
    // �������޹�,�����Ͻ�
    // ����ܴ�����������ȼ�����,���׳���,���и�����ʱҲ���׳���

    // ����Ҳ�����������޷�����������,���紫һ�����ͽ�ȥ
    // #define SIZEOF(TYPE) sizeof(type)
    // #define MALLOC(count,type) (type*)malloc(count*sizeof(type))
    // int* p = MALLOC(10,int);

    // ����������д,������������Ҫȫ��д
    // #undef ����  :ȡ��һ���궨��

    // �����ж���: Ԥ����ʱ,ͨ�������д���һ������

    // ��������ָ��:ѡ���Ա���
    // #define DEBUG
    // int main()
    // {
    //     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    //     int i = 0;
    //     for (i=0;i<10;i++)
    //     {
    //         arr[i] = 0;
    //     }
    //     #ifdef DEBUG // DEBUG���������ִ��ifdef��endif֮��Ĵ���
    //     for (i=0;i<10;i++)
    //     {
    //         printf("%d\n",arr[i]);
    //     }
    //     #endif 

    //     // ��:
    //     // #if �������ʽ ����Ϊ��������������,���򲻱���

    //     #if 0
    //     printf("%d\n",arr[1]);
    //     #endif

    //     return 0;
    // }

        // ��֧��������:
        // #if 1==2
        // ...
        // #elif 2==2
        // ...
        // #else
        // ...
        // #endif

        // #if defined �� #ifdef �÷���ͬ

        // #if !defined(DEBUG)
        // ...
        // #endif
        // �ȼ���:
        // #ifndef
        // ...
        // #endif

        // Ƕ��ָ��:
        // #ifdef debug
        //     #if osos
        //     ...
        //     #elif opop
        //     ...
        // #endif

        // ��������Ӧ��: �����ļ�����
        // ͷ�ļ��������ķ�ʽ:
        // ����ͷ�ļ� #include " "  Ĭ������Դ�ļ�����Ŀ¼�����,û�ҵ�ȥ��������װ·���Ŀ�����
        // ��ͷ�ļ� #include < > ֱ��ȥ��׼·���в���,���Ҳ������ر������

        // Ƕ���ļ�����:ͬһ�ļ����������
        // ����:
        // #ifndef __TEST_H__
        // #define __TEST_H__
        // int add(int,int);
        // #endif

        // ����:
        // #pragma once   // �Ƚ���,�ϰ汾���ܲ�֧��,���ǳ����
        // int add(int,int);

        // Ԥ����ָ��: ��������ָ��,#include,#define
        // ����: #error #pragma #line -- ��c������Ƚ��١�

// ***
    // offsetof(���㵱ǰ��Ա�����������ʼλ�õ�ƫ����):
    // #include <stddef.h>
    // struct S
    // {
    //     char c1;
    //     int a;
    //     char c2;
    // }s;
    // int main()
    // {
    //     // ʹ��offsetof(struct_name,member_name)
    //     printf("%d\n",offsetof(struct S,a));
    //     // ��дһ��������Աƫ����:
    //     #define OFFSETOF(STRUCT_NAME,MEMBER_NAME) (int)(&(((STRUCT_NAME*)0)->MEMBER_NAME))
    //     printf("%d\n",OFFSETOF(struct S,a));
    //     return 0;
    // }

// *** 
// ��Ŀ����:
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
//     // ����λ�η�ʽ����,���ȿ���һ���ֽ�,ȫ��ʹ��,��2�Ž�ȥ,2 = 0010
//     pstpimdata->ucdata0 = 3; // 3 = 0x11
//     // 00000010 00000001 00000000 00000000
//     // �ٿ���һ���ֽ�,������ֻ��1bit,��1�ŵ����λ
//     pstpimdata->ucdata1 = 4; // 4 = 0x100
//     // 00000010 00000001 00000000 00000000
//     // ����λ�Ž�ȥ
//     pstpimdata->ucdata2 = 5; // 5 = 0x101
//     // 00000010 00101001 00000000 00000000

//     printf("%02x %02x %02x\n",puc[0],puc[1],puc[2],puc[3]);
//     // ��ʮ�����ƴ�ӡ,һ�δ�ӡ��λ16��������, 02 29 00 00
//     return 0;
// } // 02 29 00

// 2.
// ��A=2,B=3ʱ,pointer����(9)���ֽڵĿռ�?
// #define MAX_SIZE A+B
// struct _Record_Struct
// {
//     unsigned char a:4;
//     unsigned char b:2;
//     unsigned char c;
//     unsigned char d:1;
// }*env;
// // ��λ����Ҫ3bytes�ռ�
// struct _Record_Struct* pointer = (struct _Record_Struct*)malloc(
//     sizeof((struct _Record_Struct)*MAX_SIZE);
// );
// ֱ�Ӱ�������ʽ�ù���,��3*2+3=9

// 3.
// �ж�������:
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
//     // С���ֽ���,�ڴ�洢������������˳��
//     printf("%x\n",a.k); // 3839
//     return 0;
// }

// 4. ���һ������,�ҳ�ż����Ԫ�ص�������������Ψ�����ڵ��������ɶ���
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








































