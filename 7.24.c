#include <stdio.h>
#include <string.h>
#include <assert.h>
// ***
    // strncmp(const char* str1,const char* str2, unsigned int num) // ֻ�Ƚ�ǰnum���ַ�
    // int main()
    // {
    //     char* arr1 = "123456";
    //     char* arr2 = "123456";
    //     int ret = strncmp(arr1,arr2,123); // ����Ҳ��
    //     printf("%d\n",ret);
    //     return 0;
    // }

// ***
    // char* strstr(const char* str1, const char* str2) ��str1���Ƿ���str2
    // �ҵ�����str1��str2���ַ��ĵ�ַ,�Ҳ�������һ����ָ��
    // �ҵ���һ���ִ����������ַ���ַ,���ܵڶ�����û��
    // KMP�㷨 Ч�ʸ���,����
    // char* my_strstr(const char* p1, const char* p2)
    // {
    //     const char* s1 = p1;
    //     const char* s2 = p2;
    //     const char* cur = p1;
    //     assert(p1 && p2);
    //     if (*p2 == '\0') return (char*)p1; // ����ʱҪ����һ������ת��,���򱨾���
    //     while (*cur)
    //     {
    //         s1 = cur;
    //         s2 = p2;
    //         while (*s1 && *s2 && !(*s1-*s2))
    //         {
    //             s1++;
    //             s2++;
    //         }
    //         if (*s2 == '\0') return (char*)cur;
    //         cur++;
    //     }
    //     return NULL;
    // }

    // int main()
    // {
    //     char arr1[] = "abbbcef";
    //     char arr2[] = "bbc";
    //     char* ret = my_strstr(arr1,arr2);
    //     printf("%s\n",ret);
    //     return 0;
    // }


// ***
    // char* strtok(char* str, const char* sep); //separater�ָ���
    // int main()
    // {
        // lzl 123456 55 --ʹ��strtok�ָ��ַ���
        // sep�Ƿָ����� ����!!!
        // strtok��������һ�� �����ҵ��ĵ�һ���ָ���֮ǰ���ַ�����һ���ַ��ĵ�ַ
        // strtok������ı䱻�������ַ���,�ѱ�Ǹĳ�\0,��һ�㴫��������������
        // strtok�����ĵ�һ��������ΪNULL,�������ҵ�str�е�һ�����,strtok���������������ַ����е�λ��
        // strtok�����ĵ�һ������ΪNULL,��������ͬһ���ַ����б������λ�ÿ�ʼ,������һ�����
        // ���һ��strΪNULL�ķָ��ʣ�µ��ִ���ʼ�ַ��ĵ�ַ,�ٷָ��NULL
        // char arr1[] = "lzl@123456.123";
        // char* p = "@."; 
        // char buf[1024] = {0};
        // strcpy(buf,arr1);
        // �и�buf�е��ַ���(Ҫ����һ���в�Ҫ��ԭ����)
        // char* ret = strtok(buf,p);
        // printf("%s\n",ret);
        // ret = strtok(NULL,p);
        // printf("%s\n",ret);
        // ret = strtok(NULL,p);
        // printf("%s\n",ret);
        

        // forѭ���и�:
        // char* ret = NULL;
        // char arr2[] = "192.168.31.121";
        // char* p0 = "@.";
        // for (ret = strtok(arr2,p0) ; ret != NULL ; ret = strtok(NULL,p0))
        // {
        //     printf("%s\n",ret);
        // }


    //     return 0;
    // }


// ***
    // strerror:�����ַ�����Ӧ�Ĵ�����Ϣ
    // #include <errno.h>
    // int main()
    // {
        // ����ȥ��0 1 2 3 4...Ϊ������
        // errno��һ��ȫ�ֵĴ�����ı���
        // ��c���ԵĿ⺯����ִ�й�����,�����˴���,�ͻ�Ѷ�Ӧ�����븴�Ƶ�errno��
        // char* str = strerror(errno);
        // printf("%s\n",str);

        //���ļ�
    //     FILE* pf = fopen("test.txt","r"); // ��ʧ�ܻ᷵��NULL
    //     if (!pf) printf("%s\n",strerror(errno));
    //     else printf("open file success");
    //     return 0;
    // }

// ***
    // �ַ����ຯ��:��������������������򷵻���
    // iscntrl �κο����ַ�
    // isspace �հ��ַ�: �ո� ���� ��ҳ �س� �Ʊ��\t ��ֱ�Ʊ��\v
    // isdigit ʮ��������
    // isxdigit ʮ����������
    // islower Сд��ĸ
    // isupper ��д��ĸ
    // isalpha ��ĸ
    // isalnum ��ĸ��������
    // ispunct ������(�κβ��������ֻ�����ĸ��ͼ���ַ�,����ɴ�ӡ)
    // isgraph �κ�ͼ���ַ�
    // isprint �κοɴ�ӡ�ַ�,����ͼ���ַ��Ϳհ��ַ�
#include <ctype.h>
    // int main()
    // {
    //     char ch = 'b';
    //     int ret = islower(ch);
    //     printf("%d\n",ret); //���ط�0����˵����,0��Ϊ��
    //     return 0;
    // }

// ***
    // �ַ�ת������:
    // int tolower (int c);
    // int toupper (int c);
    // int main()
    // {
    //     // char ch = tolower('Q');
    //     // putchar(ch);

    //     char arr[] = " I Am A Student";
    //     int i = 0;
    //     while (arr[i])
    //     {
    //         if (isupper(arr[i])) arr[i] = tolower(arr[i]);
    //         i++;
    //     }
    //     printf("%s\n",arr);
    //     return 0;
    // }

// ***
    // memcpy:�ڴ濽��,�����κ���������
    // void* memcpy(void* dest, const void* src, size_t num); num��λ���ֽ�
    // void* my_memcpy(void* dest, const void* src,size_t num)
    // {
    //     assert(src && dest);
    //     char* ret = dest;
    //     while (num--)
    //     {
    //         *(char*)dest = *(char*)src;
    //         ++(char*)dest;
    //         ++(char*)src;
    //     }
    //     return ret;
    // }


// ***
    // memcpy�����ص�����
    // memmove�����ص�����,����ͬһ�������ǰ�����������
    // c���Թ涨: memcpyֻҪ�����ص����ڴ濽��,���еı�������memcpy���Դ����ص����
    // memmove�Ǵ����ص��ڴ濽����,�����ص�Ҳ���Բ��ص�
    // dest��src֮ǰ,��ǰ��󿽱�; dest��src֮��,�Ӻ���ǰ����
    // void* my_memmove(void* dest, const void* src, size_t num)
    // {
    //     char* s = (char*)src;
    //     char* d = (char*)dest;
    //     if (src > dest) // void*���Ͳ�����+-,�����Խ�����,�����ԱȽϴ�С
    //     {
    //         while (num--)
    //         {
    //             *d = *s;
    //             s++;
    //             d++;
    //         }
    //     }
    //     else
    //     {
    //         s += num-1;
    //         d += num-1;
    //         while (num--)
    //         {
    //             *d = *s;
    //             s--;
    //             d--;
    //         }
    //     }
    //     return dest;
    // }
    // int main()
    // {
    //     int arr[] = {1,2,3,4,5,6,7,8,9,10};
    //     my_memmove(arr,arr+3,20);
    //     int i = 10;
    //     for (i=0; i<10; i++)
    //     {
    //         printf("%d ",arr[i]);
    //     }
    //     return 0;
    // }

