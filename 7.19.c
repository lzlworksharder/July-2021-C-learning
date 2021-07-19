#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// 函数指针数组--转移表,调用相同类型函数时直接调用数组下标即可

// 指向函数指针数组的指针:
// int (*pfarr[10])(int,int); 函数指针数组
// int (*(*ppfarr)[10])(int,int);  ppfarr首先是一个指针,再与[10]结合说明指向一个数组,去掉上述元素后得到的即为指向的数组的元素类型

// 回调函数:把函数指针作为参数传给另一个函数,在另一个函数内部调用这个函数,这个函数被称为回调函数
// qsort - 可以排序任意类型的数据
// quick sort快速排序
// void* 指针类型可以接收任意类型的地址; 但void*类型指针不能进行解引用操作,不能加减整数

// qsort(arr,sz,sizeof(arr[0]),comp);
// qsort参数:数组首元素地址,数组长度,数组元素字节大小,比较函数的指针;
//比较函数形如:  int comp(const void* e1,const void* e2)
//由于void*类型指针不能解引用,在具体使用时需要强制类型转换
//e1 > e2,返回一个正数; e1 = e2,返回0;e1 < e2,返回一个负数
//如:

typedef struct stu
    {
        int age;
        char name[20];
    }stu;
// int comp(const void* pe1,const void* pe2) // 返回负数--按e1,e2排;返回正数--按e2,e1排
// {
//     // return *(int*)pe1 - *(int*)pe2; // 升序
//     // return *(*int)e2 - *(int*)e1; // 降序
//     // 结构体:(降序)  return ((struct stu*)pe2)->age - ((struct stu*)pe1)->age;
//     // 比较字符串(字典序):
//     return strcmp(((stu*)pe2)->name , ((stu*)pe1)->name); // 字符串降序
//     // strcmp -- 前小返回负数,前大返回正数
// }

// int main()
// {
//     int i = 0;
//     stu arr1[3] = {{10,"Joe"},{20,"Nick"},{30,"Kevin"}};
//     int sz = sizeof(arr1)/sizeof(arr1[0]);
//     // int arr[10] = {1,3,5,7,9,2,4,6,8,10};
    
//     qsort(arr1,sz,sizeof(arr1[0]),comp);
//     for (i=0; i<sz; i++)
//     {
//         printf("%s  %d\n",arr1[i].name,arr1[i].age);
//     }
//     return 0;
// }

//实现对所有类型的冒泡排序:

// void swap(char*e1, char* e2,int width)
// {
//     int i = 0;
//     for (i=0; i<width; i++)
//     {
//         char tmp = *e1;
//         *e1 = *e2;
//         *e2 = tmp;
//         e1++;
//         e2++;
//     }
// }


// void bubble_sort(void* base, int sz, int width, int (*cmp)(const void*e1,const void* e2))
// {
//     int i = 0;
//     int j = 0;
//     for (i=0; i<sz-1; i++)
//     {
//         for (j=0; j<sz-1-i; j++)
//         {
//             if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)
//                 swap((char*)base+j*width,(char*)base+(j+1)*width,width);
//         }
//     }
// }


// int comp(const void* pe1,const void* pe2) // 返回负数--按e1,e2排;返回正数--按e2,e1排
// {
//     // return *(int*)pe1 - *(int*)pe2; // 升序
//     // return *(*int)e2 - *(int*)e1; // 降序
//     // 结构体:(降序)  return ((struct stu*)pe2)->age - ((struct stu*)pe1)->age;
//     // 比较字符串(字典序):
//     return strcmp(((stu*)pe2)->name , ((stu*)pe1)->name); // 字符串降序
//     // strcmp -- 前小返回负数,前大返回正数
// }

// int main()
// {
//     int i = 0;
//     stu arr1[3] = {{10,"Joe"},{20,"Nick"},{30,"Kevin"}};
//     int sz = sizeof(arr1)/sizeof(arr1[0]);
//     // int arr[10] = {1,3,5,7,9,2,4,6,8,10};
    
//     bubble_sort(arr1,sz,sizeof(arr1[0]),comp);
//     for (i=0; i<sz; i++)
//     {
//         printf("%s  %d\n",arr1[i].name,arr1[i].age);
//     }
//     return 0;
// }

// int main()
// {
//     char* p = "abcdef";
//     printf("%d\n",strlen(&p));
//     return 0;
// }



