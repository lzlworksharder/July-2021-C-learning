#include <stdio.h>
#include <string.h>
#include <assert.h>
// ***
    // strncmp(const char* str1,const char* str2, unsigned int num) // 只比较前num个字符
    // int main()
    // {
    //     char* arr1 = "123456";
    //     char* arr2 = "123456";
    //     int ret = strncmp(arr1,arr2,123); // 超过也行
    //     printf("%d\n",ret);
    //     return 0;
    // }

// ***
    // char* strstr(const char* str1, const char* str2) 看str1中是否含有str2
    // 找到返回str1中str2首字符的地址,找不到返回一个空指针
    // 找到第一个字串即返回首字符地址,不管第二个有没有
    // KMP算法 效率更高,更快
    // char* my_strstr(const char* p1, const char* p2)
    // {
    //     const char* s1 = p1;
    //     const char* s2 = p2;
    //     const char* cur = p1;
    //     assert(p1 && p2);
    //     if (*p2 == '\0') return (char*)p1; // 返回时要进行一个类型转换,否则报警告
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
    // char* strtok(char* str, const char* sep); //separater分隔符
    // int main()
    // {
        // lzl 123456 55 --使用strtok分割字符串
        // sep是分隔符的 集合!!!
        // strtok函数调用一次 返回找到的第一个分隔符之前的字符串第一个字符的地址
        // strtok函数会改变被操作的字符串,把标记改成\0,故一般传拷贝出来的数据
        // strtok函数的第一个参数不为NULL,函数将找到str中第一个标记,strtok函数将保存它在字符串中的位置
        // strtok函数的第一个参数为NULL,函数将在同一个字符串中被保存的位置开始,查找下一个标记
        // 最后一次str为NULL的分割返回剩下的字串起始字符的地址,再分割返回NULL
        // char arr1[] = "lzl@123456.123";
        // char* p = "@."; 
        // char buf[1024] = {0};
        // strcpy(buf,arr1);
        // 切割buf中的字符串(要另找一个切不要切原来的)
        // char* ret = strtok(buf,p);
        // printf("%s\n",ret);
        // ret = strtok(NULL,p);
        // printf("%s\n",ret);
        // ret = strtok(NULL,p);
        // printf("%s\n",ret);
        

        // for循环切割:
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
    // strerror:返回字符串对应的错误信息
    // #include <errno.h>
    // int main()
    // {
        // 传进去的0 1 2 3 4...为错误码
        // errno是一个全局的错误码的变量
        // 当c语言的库函数再执行过程中,发生了错误,就会把对应错误码复制到errno中
        // char* str = strerror(errno);
        // printf("%s\n",str);

        //打开文件
    //     FILE* pf = fopen("test.txt","r"); // 打开失败会返回NULL
    //     if (!pf) printf("%s\n",strerror(errno));
    //     else printf("open file success");
    //     return 0;
    // }

// ***
    // 字符分类函数:如果参数符合下列条件则返回真
    // iscntrl 任何控制字符
    // isspace 空白字符: 空格 换行 换页 回车 制表符\t 垂直制表符\v
    // isdigit 十进制数字
    // isxdigit 十六进制数字
    // islower 小写字母
    // isupper 大写字母
    // isalpha 字母
    // isalnum 字母或者数字
    // ispunct 标点符号(任何不属于数字或者字母的图形字符,必须可打印)
    // isgraph 任何图形字符
    // isprint 任何可打印字符,包括图形字符和空白字符
#include <ctype.h>
    // int main()
    // {
    //     char ch = 'b';
    //     int ret = islower(ch);
    //     printf("%d\n",ret); //返回非0数字说明真,0则为假
    //     return 0;
    // }

// ***
    // 字符转换函数:
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
    // memcpy:内存拷贝,拷贝任何数据类型
    // void* memcpy(void* dest, const void* src, size_t num); num单位是字节
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
    // memcpy不能重叠拷贝
    // memmove可以重叠拷贝,即把同一个数组的前几项拷贝到后几项
    // c语言规定: memcpy只要处理不重叠的内存拷贝,但有的编译器下memcpy可以处理重叠情况
    // memmove是处理重叠内存拷贝的,可以重叠也可以不重叠
    // dest在src之前,从前向后拷贝; dest在src之后,从后向前拷贝
    // void* my_memmove(void* dest, const void* src, size_t num)
    // {
    //     char* s = (char*)src;
    //     char* d = (char*)dest;
    //     if (src > dest) // void*类型不可以+-,不可以解引用,但可以比较大小
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

