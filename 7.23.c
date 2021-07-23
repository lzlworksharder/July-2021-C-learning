#include <stdio.h>
#include <string.h>
#include <assert.h>
// 字符串处理函数:
// 求长: strlen
// 长度不受限制的字符串函数: strcpy,strcat,strcmp
// 长度受限制: 上面加n
// 字符串查找: strstr,strtok
// 错误信息报告: strerror
// 字符操作
// 内存操作函数: memcpy,memmove,memset,memcmp

// *** 
    // strlen: 拿到首元素地址,向后找到\0,统计停止
    // 求字符串长度: 计数器,递归(不创建临时变量),指针
    // 计数器:
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

    // int main() // 坑
    // {
    //     if (strlen("123456") - strlen("1234567") > 0) printf("hehe\n");
    //     else printf("haha\n");
    //     return 0;
    // }
    // strlen -- 返回size_t 其实就是unsigned int, 两个无符号数相减一定是一个无符号数>0

// ***
    // strcpy(dest,source) 把source的\0也带过去
    // char* my_strcpy(char* dest,const char* source)
    // {
    //     assert(dest != NULL);
    //     assert(source != NULL);
    //     char* ret = dest;
    //     while (*dest++ = *source++)
    //     {
    //         ;
    //     }
    //     return ret; // 返回目标字符串的起始地址
    // }
    // 注意事项:
    // 1. 原字符串必须以\0结尾
    // 2. 目标空间必须足够大,确保能够拷贝得下
    // 3. 目标空间必须可变 错误: char* p = "123456"作为dest,不能改


// ***
    // strcat追加字符串:strcat(arr1,arr2)把arr2到arr1
    // 注意:1. arr1目标空间必须足够大!
    // 2. 源头必须有\0, 目的地也得有\0
    // 3. 目标空间必须可修改
    // 4. 不能自己给自己追加
    // char* my_strcat(char* dest, const char* src)
    // {
    //     char* ret = dest;
    //     assert(dest && src);
    //     // 1. 找到目的字符串的\0
    //     // 2. 追加
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
    // strcmp(str1,str2); 字典序,str1<str2返回一个负数,相等返回0,大于返回一个正数
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

// *** 长度受限的字符串函数
    // strncpy(const char* str1,const char* str2,size_t count); count单位是字节
    // 当count大于str2的长度时,自动补\0
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
    // 追加指定个数字节,自动额外追加\0,追加字符数不够时自动补\0
    int main()
    {
        char arr1[30] = "123";
        char arr2[] = "123456";
        strncat(arr1,arr2,9);
        printf("%s\n",arr1);
        return 0;
    }






