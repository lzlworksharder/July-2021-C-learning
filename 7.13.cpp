// 2021.7.13
#include<stdio.h>
#include<string.h>
#include<math.h>

// char ch[n] = {0} 大小创建个数必须用常量,不能变量
// int arr[10] = {1,2,3}; //不完全初始化,剩余元素默认为零
//char arr[3] = "ab" ; // 第三位是\0
//char arr[4] = {'a',98}; // "ab",因为'b'的码值为98
//char arr[] = "abcdef"; // 7个元素,\0
//sizeof(arr) // 7*1=7
//strlen(arr) // 6

//char arr1[] = "abc";
//char arr2[] = {'a','b','c'}; // 没写大小就只有这几个 
//sizeof(arr1) // 4
//sizeof(arr2) // 3
//strlen(arr1) // 3
//strlen(arr2) // 随机数 

//int main()  // 打印每一个字符 
//{
//	char arr[] = "abcdefg";
//	int i = 0;
//	for (i=0;i<(int)strlen(arr);i++) // strlen返回一个unsigned int,需要强制类型转换成int 
//	{
//		printf("%c ",arr[i]);
//	}
//	return 0;
//}

// 数组在内存中连续存放! 每个相邻元素地址之间相隔元素所占字节大小 

//二维数组创建:先行后列 
//int arr[3][4] = {{1,2,3},{4,5}}; // 二维数组的行可以省略,列不能省略 
//char arr[3][5];
//double arr[2][4]; 


//int main() // 打印二维数组地址--相邻元素地址差4(int 占4个字节),第一行后面就是第二行 
//{
//	int arr[3][4] = {{1,2,3},{4,5}};
//	for (int i = 0;i<3;i++)
//	{
//		for (int j = 0;j<4;j++)
//		{
//			printf("&arr[%d][%d] = %p\n",i,j,&arr[i][j]);
//		
//		}
//		printf("\n");
////		printf("%d %d\n",i,j); // 报错,出循环找不到j,想在循环后用循环的变量就在开始定义 
//	}
//	return 0;
//}

// 冒泡排序(升序) 
//void bubble_sort(int* arr,int sz)
//{
//	for (int i=0;i<sz-1;i++)
//	{
//		int flag = 1; // 如果一趟没换顺序,直接走人 
//		for (int j=0;j<sz-1-i;j++)
//		{
//			if (arr[j]>arr[j+1])
//			{
//				int tem = arr[j+1];
//				arr[j+1] = arr[j];
//				arr[j] = tem;
//				flag = 0;
//			}
//		}
//		if (flag == 1) goto end; //这里用break也可 
//	}
//	end: //  用: !!!
//	; // 必须有空语句,否则报错 
//}
//int main()
//{
//	int arr[] = {0,5,1,2,3,4,6};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for (int i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
// } 


//以下情况arr单独出现时不表示首个元素地址:
//1.sizeof(arr),arr表示整个数组
//2.&arr,arr代表整个数组,取出的是整个数组的地址 
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7};
//	printf("%p  %p\n",arr,arr+1);
//	printf("%p  %p\n",&arr,&arr+1); // &arr+1 比 arr+1数值多了28(1c) 说明&arr指整个数组 
//	return 0;
//}











