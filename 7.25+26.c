#include <stdio.h>
#include <string.h>
#include <assert.h>

// ***
    // int memcmp(const char* arr1, const char* arr2,size_t num); �Ƚ��ڴ��num���ֽ�
    // ����ֵ��strcmp����

// ***
    // memset - �ڴ�����
    // void* memset(void*dest,int c,size_t count);
    // c ���õ��ַ�
    // count ���ö����ַ�,��λ���ֽ�!

    // int main()
    // {
    //     char arr[10] = {0};
    //     memset(arr,65,10); // ��10���ַ��Ŀռ�ĳ�ascii��Ϊ65���ַ�(A)
    //     printf("%s\n",arr);
    //     return 0;
    // }


// ***
    // �Զ�����������--�ṹ��/ö��/������

    // �ṹ��
    // �ṹ��һЩֵ�ļ���,��Щֵ��Ϊ��Ա����
    // �����ṹ������
    
    // struct Stu
    // {
    //     char name[20];
    //     char tele[12];
    //     char gender[10];
    //     int age; // �ṹ��ĳ�Ա����
    // }s4,s5,s6; // ȫ�ֱ���
    // struct Stu s3; // ȫ�ֱ���
    // int main()
    // {
    //     // �ֲ��ṹ�����
    //     struct Stu s1;
    //     struct Stu s2;
    // }

    // ��������:
    // struct 
    // {
    //     int a;
    //     char c;
    // }x; �����ṹ������,��������������

    // struct
    // {
    //     int a;
    //     char c;
    // }*px; �����ṹ��ָ��

    // �ṹ��������:
    // ����ڵ�:
    // typedef struct Node
    // {
    //     int data; // ������
    //     struct Node n; // ����д��,���ܰ����Լ����͵ı���
    //     struct Node* next; // ��ȷ,��С����ȷ�� (ָ����)
    // }Node;

    // �ṹ������Ķ���ͳ�ʼ��:
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
    //     struct S s = {'c',100,{3.14,100},3.14,"hello"}; // һ��������,����ÿ����Ա�����ö��Ÿ���
    //     // ��Ա������ . ����
    //     return 0;
    // }

    // �ṹ���ڴ����:
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

    // 1. ��һ����Ա�������ڽṹ�����ƫ����Ϊ0�ĵ�ַ��
    // 2. ������Ա����Ҫ���뵽ĳ������(������)���������ĵ�ַ��
    // ������ = ������Ĭ�ϵĶ�������ĳ�Ա������С�Ľ�Сֵ vsĬ�϶�����Ϊ8 gccû��Ĭ�϶�����
    // �ṹ���ܴ�СΪ����������������

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
    // ����нṹ��Ƕ��,���ṹ������ڲ�������������Ϊ�˽ṹ������Ķ�����
    // int main()
    // {
    //     printf("%d\n",sizeof(s3)); // 16
    //     printf("%d\n",sizeof(s4)); // 32
    //     return 0;
    // }
    // ΪʲôҪ�ڴ����?
    // 1. ƽ̨ԭ��:��Щƽ̨��,�������int(������)ʱ,����Ҫ����4(������)�ı������ڴ�,�����޷�����
    // 2. 32λƽ̨,32����ַ��,32��������,32��0/1�൱��һ�η���4��byte,�Զ�����ڴ�ֻ��Ҫ����һ��,�����ÿռ任ȡʱ��

    // ��ƽṹ���ʡ�ռ䷽��:��ռ�ռ�С�ĳ�Ա�����ۼ���һ��

    //�޸�Ĭ�϶�����:
    // #pragma pack(4) // ����Ĭ�϶�����Ϊ4
    // struct S
    // {
    //     char c1; // 1
    //     // 3
    //     double d; // min(8,4) = 4 ������Ϊ4
    // };
    // #pragma pack() // ȡ�����õ�Ĭ�϶�����
    // int main()
    // {
    //     struct S s;
    //     printf("%d\n",sizeof(s)); // 12
    //     return 0;
    // }

    // offsetof ����ṹ���Ա�������ʼλ�õ�ƫ����
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
    // ����:offsetof���ʵ��

    // �ṹ�崫��:
    // struct S
    // {
    //     int a;
    //     char c;
    //     double d;
    // };
    // void Init(struct S* ps) // ��ַ(����),ֻ���ĸ��ֽ�,��������
    // {
    //     ps->a = 1030;
    //     ps->c = 'e'; // ָ���ʼ��
    //     ps->d = 5.23;
    // }
    // void print1(struct S tmp) // ��ֵ
    // {
    //     printf("%d %c %lf\n",tmp.a,tmp.c,tmp.d);
    // }
    // int main()
    // {
    //     struct S s = {0};
    //     Init(&s);
    //     print1(s);
    //     s.a = 100; // .��ʼ��
    //     s.c = 'w';
    //     s.d = 3.14;
    //     print1(s);
    //     return 0;
    // }
    // // ����:�ṹ�崫��ʱ��ô���ַ!


// *** 
    // �ṹ��ʵ��λ��:
    // λ�ε������ͽṹ����,������ͬ:
    // 1.��Ա������int,unsigned int,signed int,char,ͨ����ͬ����
    // 2.��Ա������һ��ð�ź�����
    // λ�� - ������λ
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
    // λ���ڴ����:
    // 1.λ�γ�Ա������(int,unsignedint,char)
    // 2.һ�ο���һ������,4bytes,����1��char(����charʱ),ʣ�²����õĶ���,λ�κ������ֲ��ܴ���32
    // 3.λ���漰�ܶ಻ȷ������,������ƽ̨����ֲ��
    // λ��:��ʡ�ռ�

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
    //     s.a = 10; // 1010 - ֻ�ܴ�010
    //     s.b = 20; // 10100 - ֻ�ܴ�0100
    //     s.c = 3; // 011 - 00011
    //     s.d = 4; // 100 - 0100
    //     // ������ҵ���(��һ��byte�ĵ�λ����λ)��: Ϊ 0 0100 010, 000 00011, 0000 0100
    //     return 0;
    //     // �ڴ��л���16����: 22 03 04
    // }

    // λ�ο�ƽ̨:
    // int���޷��Ų�ȷ��
    // λ�������λ����Ŀ����ȷ��,32λ32,16λ16
    // λ���г�Ա���ڴ��д����һ��Ƿ�������ȷ��
    // һ�ο��ٿռ���ʣ��ռ䶪���������ò�ȷ��

    // λ�ε�Ӧ��:�������ݴ���


// ***
    // ö��:�ѿ��ܵ�ȡֵһһ�о�
    // enum gender
    // {
    //     // ö�ٵĿ���ȡֵ - ����
    //     male = 2, // ����ʼֵ,ȱʡ0,֮���ȱʡΪǰһ��+1
    //     female = 4,
    //     secret // 5
    // };

    // int main()
    // {
    //     enum gender s = male;
    //     s = female;
    //     // ���ܸ�ö�����͵ı������������͵�ֵ,���� s = 2,������s = male
    //     printf("%d %d %d\n",male,female,secret);
    //     return 0;
    // }

    // ö�ٴ�Сͬint

    // ö���ŵ�: 
    // ���ӿɶ��Կ�ά����;
    // ��#define���������,���Ͻ�
    // ��ֹ������Ⱦ(��װ)
    // ���ڵ���
    // ʹ�÷���,һ�ζ���������

    // ����- ������ - ������
    // union Un
    // {
    //     char c;
    //     int i;
    // };
    // // �������С����������Ա�Ĵ�С
    // int main()
    // {
    //     union Un u;
    //     printf("%d\n",sizeof(u)); // 4
    //     printf("%p %p %p\n",&(u.c),&(u.i),&u);
    //     return 0;
    // }
    
    // ����жϴ�С��:
    // union 
    // {
    //     char c;
    //     int i;
    // }u; //����������
    // int main()
    // {
    //     u.i = 1;
    //     if (u.c == 1) printf("С��\n");
    //     else printf("���\n");
    //     return 0;
    // }
    
    // �ж��������С:
    // �������С����������Ա��С
    // ������Ա��С��������������������ʱ,���뵽������
    // union Un
    // {
    //     int a; // ������4
    //     char arr[5]; // ��Ԫ���������,������1
    //     // ����Ա��С��5,����������4,��Ҫ���뵽8,������������С��8
    // }u;
    
    // int main()
    // {
    //     printf("%d\n",sizeof(u));
    //     return 0;
    // }













