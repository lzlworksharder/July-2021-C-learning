#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// ����ָ������--ת�Ʊ�,������ͬ���ͺ���ʱֱ�ӵ��������±꼴��

// ָ����ָ�������ָ��:
// int (*pfarr[10])(int,int); ����ָ������
// int (*(*ppfarr)[10])(int,int);  ppfarr������һ��ָ��,����[10]���˵��ָ��һ������,ȥ������Ԫ�غ�õ��ļ�Ϊָ��������Ԫ������

// �ص�����:�Ѻ���ָ����Ϊ����������һ������,����һ�������ڲ������������,�����������Ϊ�ص�����
// qsort - ���������������͵�����
// quick sort��������
// void* ָ�����Ϳ��Խ����������͵ĵ�ַ; ��void*����ָ�벻�ܽ��н����ò���,���ܼӼ�����

// qsort(arr,sz,sizeof(arr[0]),comp);
// qsort����:������Ԫ�ص�ַ,���鳤��,����Ԫ���ֽڴ�С,�ȽϺ�����ָ��;
//�ȽϺ�������:  int comp(const void* e1,const void* e2)
//����void*����ָ�벻�ܽ�����,�ھ���ʹ��ʱ��Ҫǿ������ת��
//e1 > e2,����һ������; e1 = e2,����0;e1 < e2,����һ������
//��:

typedef struct stu
    {
        int age;
        char name[20];
    }stu;
// int comp(const void* pe1,const void* pe2) // ���ظ���--��e1,e2��;��������--��e2,e1��
// {
//     // return *(int*)pe1 - *(int*)pe2; // ����
//     // return *(*int)e2 - *(int*)e1; // ����
//     // �ṹ��:(����)  return ((struct stu*)pe2)->age - ((struct stu*)pe1)->age;
//     // �Ƚ��ַ���(�ֵ���):
//     return strcmp(((stu*)pe2)->name , ((stu*)pe1)->name); // �ַ�������
//     // strcmp -- ǰС���ظ���,ǰ�󷵻�����
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

//ʵ�ֶ��������͵�ð������:

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


// int comp(const void* pe1,const void* pe2) // ���ظ���--��e1,e2��;��������--��e2,e1��
// {
//     // return *(int*)pe1 - *(int*)pe2; // ����
//     // return *(*int)e2 - *(int*)e1; // ����
//     // �ṹ��:(����)  return ((struct stu*)pe2)->age - ((struct stu*)pe1)->age;
//     // �Ƚ��ַ���(�ֵ���):
//     return strcmp(((stu*)pe2)->name , ((stu*)pe1)->name); // �ַ�������
//     // strcmp -- ǰС���ظ���,ǰ�󷵻�����
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



