// 2021.7.15
// 初始指针 
#include <stdio.h>
// 指针类型:决定了解引用一次访问的字节数,决定了+1走的步长
// 野指针:指向位置不可知 
// 变量未初始化导致野指针 
//int* p ; //局部变量不初始化，默认存一个随机值 
//*p = 20;
//数组越界会导致野指针 *p++ = i; ->*p = i; p++
// 指针指向的空间释放
//int* h()
//{
//	int a = 10;
//	return &a;
// } 
//int main()
//{
//	int *p = h();
//	return 0;
//}

// 不知道指针指向谁，指向一个空指针NULL，NULL用来初始化指针
// 指针指向的空间被释放，不需要指针就需要变成空指针 
//使用指针前检查指针有效性
// 使用指针步骤：1.初始化 2.用完置空 3.下次用检测有效性 
//if (pa != NULL)
//{
//	...
//}

//指针运算：
//指针+-整数 ; 指针的关系运算 
//#define N_VALUES 5
//int main() // 初始化数组为0 
//{
//	float values[N_VALUES];
//	float* vp;
//	for (vp=&values[0];vp<&values[N_VALUES];vp++)
//	{
//		*vp++ = 0;
//	}
//	for (int i=0;i<N_VALUES;i++)
//	{
//		printf("%f ",values[i]);
//	}
//	return 0;
//}

//指针减去指针，得到指针之间元素的个数,个数为左算右不算之间的元素数量（必须是一个数组之内的）
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	printf("%d\n",&arr[0]-&arr[9]); // -9
//	return 0;
// } 

//递归求字符串长度： 
//int sl(char arr[])
//{
//	if (arr[0] == '\0') return 0;
//	else return 1+sl(arr+1);
//}
//int main()
//{
//	char s[10] = "123456";
//	int l = sl(s);
//	printf("%d\n",l);
//}

//指针求字符串长度：
//int strl(char* arr)
//{
//	char* st = arr;
//	char* end = arr;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end-st;
//}
//int main()
//{
//	char arr[] = "hello world!";
//	printf("%d\n",strl(arr));
//	return 0;
//}
 
// 标准规定允许指向数组元素指针与数组最后的后面那个指针比，不允许和第一个元素之前的指针比 

//数组可以用指针进行访问：
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6};
//	int* p = arr;
//	for (int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
//	{
//		printf("%d ",*(p+i));
//	}
//	return 0;
// } 


//二级指针： 
//int a = 10;
//int* pa = &a;
//int** ppa = &pa;
//int*** pppa = &ppa;


//指针数组--数组--存放指针的数组 
//数组指针--指针 
//int main()
//{
//	int a = 0;
//	int b = 10;
//	int c = 20;
//	int* arr[3] = {&a,&b,&c};
//	for (int i=0;i<3;i++)
//	{
//		printf("%d ",*(arr[i]));
//	}
//	return 0;
//}

//全局变量不初始化默认是0; 

//int i;
//int main()
//{ // sizeof返回一个unsigned int无符号数,当整型和unsigned int
//// 进行加减乘除比较等算术运算时默认把整型转换成unsigned int
//// 即-1的符号位被当作有效位,是一个很大的数字 !
//	i--;
//	if (i > sizeof(i)) printf(">");
//	else printf("<");
//	return 0;
//}


















