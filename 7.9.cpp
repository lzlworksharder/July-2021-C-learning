// 2021.7.9
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	char pw[20] = {0};
	printf("please enter your password: ");
	
	for(i=0 ; i<3 ; i++)
	{
		scanf("%s",pw);
		if(strcmp(pw,"123456") == 0) // 字符串比较不能用==,要用strcmp,相等返回0,大于返回一个正数,小于返回一个负数 
		{
			printf("log in successfully!\n");
			break;
		}
		else
		{
			printf("wrong password!\n");
		}
	}
	if(i==3)
	{
		printf("defeat");
	}
	return 0;
}



//int main()
//{
//	char arr1[] = "welcome to buaa!!!!!!";
//	char arr2[] = "#####################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		Sleep(500);
//		system("cls");
//		printf("%s",arr2);
//		left++;
//		right--;
//		
//	}
//	return 0;
//}



//int main() // 二分法查找
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int mid = (right + left)/2;
//	scanf("%d",&k);
//	while(left <= right)
//	{
//		if(arr[mid] == k)
//		{
//			printf("find it, the order is %d.",mid);
//			break;
//		}
//		else if(arr[mid] >= k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			left = mid + 1;
//		}
//		mid = (left + right)/2;
//	}
//	if(left > right)
//	{
//		printf("can not find the number.");
//	}
//	return 0;
// } 



//int main()
//{
//	int i = 1;
//	int j = 1;
//	int s = 0;
//	int f = 1;
//	for(i = 1;i < 11;i++)
//	{
//		for(j = 1;j < i+1;j++)
//		{
//			f *= j;
//		}
//		s += f;
//		f = 1;
//	}
//	printf("%d\n",s);
//	return 0;
//}



//int main() // 计算n的阶乘 
//{
//	int n = 0;
//	int i = 1;
//	int f = 1;
//	scanf("%d",&n);
//	for(i = 1;i < n+1;i++)
//	{
//		f *= i;
//	}
//	printf("%d\n",f);
//	return 0;
//}


// do-while 循环:先执行后判断; while和for:先判断后执行
//int main()
//{
//	int a = 0;
//	do
//	{
//		printf("%d ",a);
//		a++;
//	}
//	while(a <= 10); // 注意这里要加";"! 
//	return 0;
// } 


//int main()
//{
//	int i = 0;
//	for (i = 1;i < 11;i++)
//	{
//		printf("%d ",i);
//	}
//	return 0;
//} // for 循环 



//int main()
//{
//	int ch = 0;
//	
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch > '9' || ch < '0')
//		{
//			continue;
//		}
//		putchar(ch);
//	}
//	return 0;
//}



//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = {0};
//	printf("i need your password: ");
//	scanf("%s",password); // 数组不用取地址,scanf只能读取空格前面的东西 
////	缓冲区还剩个下一个\n
////	读取一下\n
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("are you sure? (y/n): ");
//	ret = getchar(); // getchar会自动拿到输入缓冲区里的东西 
//	if ('y' == ret)
//	{
//		printf("yeah!");
//	}
//	else
//	{
//		printf("sad");
//	}
//	return 0;
//}


//int main() // 连环赋值? 
//{
//	int a = 0;
//	int ch = 0;
//	a = ch = getchar();
//	printf("%c\n",a);
//	printf("%c\n",ch);
//	return 0; 
//}


//int main()
//{
//	int ch = 0; 
//	//ctrl + z 输出EOF = end of file -> -1 
//	while ((ch = getchar()) != EOF) // getchar()获取屏幕输入的一个字符 
//	{
//		putchar(ch);
//	}
//	return 0;
//}


//int main() // switch语句,多分支 
//{
//	int day = 0;
//	int haha = 0;
//	scanf("%d\n%d",&day,&haha);
//	switch(day) // switch后面只能跟整型表达式,且只决定从哪进,遇到break才出 
//	{
//		case 1: // case后必须跟整型常量表达式 
//			printf("Monday\n");
//			break;
//		case 2:
//			printf("Tuesday\n");
//			break; // 最后一个也要加
//		default: // 处理非法状况 
//			printf("输入错误\n");
//			break; 
//	}
//	printf("%d\n",haha);
//	return 0;
//}



//int ji(int x) // 判断一个数是否为奇数 
//{
//	if (1 == x%2)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int a = 1;
//	while(a <= 100)
//	{
//		if (ji(a))
//		{
//			printf("%d\n",a);
//		}
//		a++;
//	}
//	return 0;
//}




// if书写形式的对比 
//int main()
//{
//	int num = 4;
//	if (5==num) // 不小心把两个=敲成一个时候会报错,避免了看不出来 
//	{
//		printf("hhe\n");
//	}
//	return 0;
//}


//悬空else:
//int main()
//{
//	int a = 0;
//	int b = 1;
//	if (a==1) // 如果if下面没相邻的任何语句直接if,则包括了下面的内容,有语句就视为单独的一个判断 
//	
//	if (b==1)
//		printf("hahah\n");
//	else // 什么都不打印,因为else和最近的if匹配 
//		printf("hehee\n");
//	else 
//		printf("hrhrhr\n");	
//	return 0;
// } 


//int main()
//{
//	int age = 4;
//	if(age > 9)
//	{
//		printf("hahahah\n");
//	}
//	else
//	{
//		if(age == 6)
//		{
//			printf("hehehehhe");
//		}
//		else if(age != 7 && age < 5)
//		{
//			printf("hghghghghg");
//		}
//	}
//	return 0;
//}
