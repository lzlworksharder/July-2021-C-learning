#include <stdio.h>
#include <string.h>
#include <assert.h>
// �ַ���������:
// ��: strlen
// ���Ȳ������Ƶ��ַ�������: strcpy,strcat,strcmp
// ����������: �����n
// �ַ�������: strstr,strtok
// ������Ϣ����: strerror
// �ַ�����
// �ڴ��������: memcpy,memmove,memset,memcmp

// *** 
    // strlen: �õ���Ԫ�ص�ַ,����ҵ�\0,ͳ��ֹͣ
    // ���ַ�������: ������,�ݹ�(��������ʱ����),ָ��
    // ������:
    // int my_strlen(const char* arr)
    // {
    //     int count = 0;
    //     while (*arr)
    //     {
    //         count++;
    //         arr++;
    //     }
    //     return count;
    // }

    // int main() // ��
    // {
    //     if (strlen("123456") - strlen("1234567") > 0) printf("hehe\n");
    //     else printf("haha\n");
    //     return 0;
    // }
    // strlen -- ����size_t ��ʵ����unsigned int, �����޷��������һ����һ���޷�����>0

// ***
    // strcpy(dest,source) ��source��\0Ҳ����ȥ
    // char* my_strcpy(char* dest,const char* source)
    // {
    //     assert(dest != NULL);
    //     assert(source != NULL);
    //     char* ret = dest;
    //     while (*dest++ = *source++)
    //     {
    //         ;
    //     }
    //     return ret; // ����Ŀ���ַ�������ʼ��ַ
    // }
    // ע������:
    // 1. ԭ�ַ���������\0��β
    // 2. Ŀ��ռ�����㹻��,ȷ���ܹ���������
    // 3. Ŀ��ռ����ɱ� ����: char* p = "123456"��Ϊdest,���ܸ�


// ***
    // strcat׷���ַ���:strcat(arr1,arr2)��arr2��arr1
    // ע��:1. arr1Ŀ��ռ�����㹻��!
    // 2. Դͷ������\0, Ŀ�ĵ�Ҳ����\0
    // 3. Ŀ��ռ������޸�
    // 4. �����Լ����Լ�׷��
    // char* my_strcat(char* dest, const char* src)
    // {
    //     char* ret = dest;
    //     assert(dest && src);
    //     // 1. �ҵ�Ŀ���ַ�����\0
    //     // 2. ׷��
    //     while (*dest != '\0') dest++;
    //     while (*dest++ = *src++) ;
    //     return ret;
    // }
    // int main()
    // {
    //     char arr1[30] = "\0";
    //     char arr2[] = "def";
    //     my_strcat(arr1,arr2);
    //     printf("%s\n",arr1);
    //     return 0;
    // }

// *** 
    // strcmp(str1,str2); �ֵ���,str1<str2����һ������,��ȷ���0,���ڷ���һ������
    // void my_strcmp(const char* str1, const char* str2)
    // {
    //     assert(str1 && str2);
    //     while (*str1 == *str2)
    //     {
    //         if (*str1 == '\0') return 0;
    //         str1++;
    //         str2++;
    //     }
    //     return (*str1 - *str2);
    // }

// *** �������޵��ַ�������
    // strncpy(const char* str1,const char* str2,size_t count); count��λ���ֽ�
    // ��count����str2�ĳ���ʱ,�Զ���\0
    // void my_strncpy(char* str1, const char* str2, unsigned int count)
    // {
    //     while (count && (*str1++ = *str2++)) count--;
    //     while (count)
    //     {
    //         *str1++ = '\0';
    //         count--;
    //     }
    // }
    // int main()
    // {
    //     char arr1[30] = "123456";
    //     char arr2[] = "abcd";
    //     my_strncpy(arr1,arr2,5);
    //     arr1[5] = 'e';
    //     printf("%s\n",arr1);
    //     return 0;
    // }


// ***
    // strncat(char* str1, const char* str2, unsigned int num); 
    // ׷��ָ�������ֽ�,�Զ�����׷��\0,׷���ַ�������ʱ�Զ���\0
    int main()
    {
        char arr1[30] = "123";
        char arr2[] = "123456";
        strncat(arr1,arr2,9);
        printf("%s\n",arr1);
        return 0;
    }






