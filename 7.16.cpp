
#include <stdio.h>
#include <stdlib.h>

// 求二进制序列中1的个数:
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	int count = 0;
//	while (a)
//	{
//		a &= a-1; // a&a-1可以去掉a最右面的一个0 
//		count++;
//	}
//	printf("%d\n",count);
//	return 0;
// }


// 获取二进制序列中奇数位和偶数位:
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	printf("奇数位\n");
//	for (int i=30;i>=0;i-=2)
//	{
//		printf("%d ",(n>>i)&1);
//	}
//	printf("\n");
//	printf("偶数位\n");
//	for (int i=31;i>=1;i-=2)
//	{
//		printf("%d ",(n>>i)&1);
//	}
//	return 0;
// } 

// 打印n阶乘法口诀表
int main()
{
	int n = 0;
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=i;j++)
		{
			printf("%d*%d=%-3d",j,i,i*j);
		}
		printf("\n");
	}
	return 0;
 } 


// 递归逆序字符串:

//int my_strlen(char* p)
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		p++;
//		count++;
//	}
//	return count;
// } 
// 
//void reverse(char* arr)
//{
//	char tem = arr[0];
//	int l = my_strlen(arr)-1;
//	arr[0] = arr[l];
//	arr[l] = '\0';
//	if (my_strlen(arr)>2)
//	{
//		reverse(arr+1);
//	}
//	arr[l] = tem;
//}
//
//int main()
//{
//	char arr[5] = {'v','f','g'};
//	printf("%d\n",(arr[3]=='\0' ? 1:0));
//	reverse(arr);
//	for (int i=0;i<my_strlen(arr);i++)
//	{
//		printf("%c",arr[i]);
//	}
//	return 0;
//}



// 初始结构体:
//typedef struct Stu
//{
//	//成员变量
//	char name[];
//	int age; 
// } Stu; // 重新命名 

//struct Stu
//{
//	char name[];
//} s1,s2;  // 分号前可以加全局的结构体变量 
//int main()
//{
//	Stu s = {"hahahah",20}; // 局部变量 ,初始化 
//	
//	return 0;
//}

// 数据的存储
//类型的基本归类:
//	
//整形(char)
//
//浮点型
//
//构造类型: 数组 int[5] int[10] char[5] 各自是一个自定义类型
//结构体类型
//枚举类型
//联合体类型
// 
//指针类型 int* char* ...
//
//空类型 void 








