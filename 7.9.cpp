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
		if(strcmp(pw,"123456") == 0) // �ַ����Ƚϲ�����==,Ҫ��strcmp,��ȷ���0,���ڷ���һ������,С�ڷ���һ������ 
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



//int main() // ���ַ�����
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



//int main() // ����n�Ľ׳� 
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


// do-while ѭ��:��ִ�к��ж�; while��for:���жϺ�ִ��
//int main()
//{
//	int a = 0;
//	do
//	{
//		printf("%d ",a);
//		a++;
//	}
//	while(a <= 10); // ע������Ҫ��";"! 
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
//} // for ѭ�� 



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
//	scanf("%s",password); // ���鲻��ȡ��ַ,scanfֻ�ܶ�ȡ�ո�ǰ��Ķ��� 
////	��������ʣ����һ��\n
////	��ȡһ��\n
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("are you sure? (y/n): ");
//	ret = getchar(); // getchar���Զ��õ����뻺������Ķ��� 
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


//int main() // ������ֵ? 
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
//	//ctrl + z ���EOF = end of file -> -1 
//	while ((ch = getchar()) != EOF) // getchar()��ȡ��Ļ�����һ���ַ� 
//	{
//		putchar(ch);
//	}
//	return 0;
//}


//int main() // switch���,���֧ 
//{
//	int day = 0;
//	int haha = 0;
//	scanf("%d\n%d",&day,&haha);
//	switch(day) // switch����ֻ�ܸ����ͱ��ʽ,��ֻ�������Ľ�,����break�ų� 
//	{
//		case 1: // case���������ͳ������ʽ 
//			printf("Monday\n");
//			break;
//		case 2:
//			printf("Tuesday\n");
//			break; // ���һ��ҲҪ��
//		default: // ����Ƿ�״�� 
//			printf("�������\n");
//			break; 
//	}
//	printf("%d\n",haha);
//	return 0;
//}



//int ji(int x) // �ж�һ�����Ƿ�Ϊ���� 
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




// if��д��ʽ�ĶԱ� 
//int main()
//{
//	int num = 4;
//	if (5==num) // ��С�İ�����=�ó�һ��ʱ��ᱨ��,�����˿������� 
//	{
//		printf("hhe\n");
//	}
//	return 0;
//}


//����else:
//int main()
//{
//	int a = 0;
//	int b = 1;
//	if (a==1) // ���if����û���ڵ��κ����ֱ��if,����������������,��������Ϊ������һ���ж� 
//	
//	if (b==1)
//		printf("hahah\n");
//	else // ʲô������ӡ,��Ϊelse�������ifƥ�� 
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
