// 2021.7.12 函数 
#include<stdio.h>
#include<string.h>
#include<math.h>

// 汉诺塔/青蛙跳台阶 
void han(int n,char a,char b,char c) // 汉诺塔 
{
	if (n==1) printf("%c->%c\n",a,c);
	else
	{
		han(n-1,a,c,b);
		printf("%c->%c\n",a,c);
		han(n-1,b,a,c);
	}
}
int main()
{
	int n = 4;
	char a = 'a';
	char b = 'b';
	char c = 'c';
	scanf("%d",&n);
	han(n,a,b,c);
	return 0;
}



// 斐波那契数列 
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a+b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}


//求字符串长度,不允许创建临时变量 
//int my_strlen(char* p)
//{
//	if (*p =='\0') return 0;
//	else return 1+my_strlen(p+1);
//}
// 模拟求字符串长度 (原始版) 
//int my_strlen(char* p) // 传过来的 arr只是arr[0]的地址 
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
////		printf("%s\n",p); // 传过来的指针可以作为字符串进行索引打印,但是p++后字符串就少掉了首位 
//		p++;
//	}
//	return count;
//}


//int main()
//{
//	char arr[] = "hahahah";
//	int sz = my_strlen(arr);
//	printf("len = %d\n",sz);
//	return 0;
//}



// 函数递归
//error:栈溢出 stack overflow 
// 内存: 栈区（局部变量）、堆区（动态开辟的内存）、静态区（全局变量、static修饰的变量） 

//void print(int n) //递归--数学归纳法 
//{ // 分别输出每一位数字 
//	if (n<=9) printf("%d ",n);
//	else
//	{
//		print(n/10);
//		printf("%d ",n%10);
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d",&num);
//	print(num);
//	return 0;
//}





//函数声明、调用和定义 

//头文件中：函数声明 
//#ifndef __ADD_H__ // 名字根据头文件名字设定,防止对库的重复引用 
//#define __ADD_H__
//int add(int,int);
//#endif

//写函数内容的源文件：函数定义 int add(int x,int y)
//调用函数的源文件：函数调用 #include "add.h"     //   .h不是.c!!!! 



//函数的链式访问:
//int main()
//{
//	printf("%d",printf("%d",printf("%d",43))); // printf的返回值是打印字符的个数!-->4321 
//	return 0;
// } 


// 编写一个函数,每调用一次num增加一:
//void add(int* p)
//{
//	(*p)++; // ++的优先级比较高,不加括号先给p++再*! 
//}
//int main()
//{
//	int num = 0;
//	int* p = &num; // 一个地址的类型必须加上* !!!!!
//	add(p);
//	printf("%d\n",num);
//	add(p);
//	printf("%d\n",num);
//	add(p);
//	printf("%d\n",num);
//	return 0;
// } 


//编写二分查找函数 :
//int bin_search(int arr[],int k,int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left<=right)
//	{
//		int mid = (left+right)/2;
//		if (k<arr[mid]) right = mid-1;
//		else if(k>arr[mid]) left = mid+1;
//		else return mid;
//	 } 
//	 return -1;
//}
//int main()
//{
//	int arr[] = {1,45,89,798,799,802,1048,2098};
//	int k = 2098;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = bin_search(arr,k,sz); // 这里传入的arr其实是arr第一个元素的地址,本质是一个指针,故不能在函数里面计算数组大小 
//	if (ret == -1) printf("未找到");
//	else printf("找到了,下标是:%d",ret); 
//	return 0;
//}



//int prime(int n)
//{
//	int j = 1;
//	for (j=2;j<=sqrt(n);j++)
//	{
//		if (n%j==0) return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i=101;i<=200;i+=2)
//	{
//		if (prime(i)==1)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}


// 交换两个数的值:(自定义函数) 
//void swap(int*pa,int*pb) // 必须用指针,否则这里变量与a和b无关 
//{ // 形参是对实参的一份临时拷贝,对临参的修改对实参没有影响, 故函数调用分为:传值调用和传址调用 
//	int tem = 0;
//	tem = *pa;
//	*pa = *pb;
//	*pb = tem;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d, b = %d\n",a,b);
//	swap(&a,&b);
//	printf("a = %d, b = %d\n",a,b);
//	return 0;
//}

//库函数:看文档 cppplusplus.com 
//int main() //strcpy函数 
//{
//	char arr1[] = "hahaha";
//	char arr2[20] = "#######";
//	strcpy(arr2,arr1); // strcpy(des,source)
//	printf("%s\n",arr2);
//	return 0;
//}

//int main() // memset函数 
//{
//	char arr1[] = "hello world";
//	memset(arr1,'*',5); // memset(ptr,value,num) 用value替换ptr所指对象前num个字符 ,value不能放字符串 
//	printf("%s\n",arr1);
//	return 0;
// } 

