// 2021.7.12 ���� 
#include<stdio.h>
#include<string.h>
#include<math.h>

// ��ŵ��/������̨�� 
void han(int n,char a,char b,char c) // ��ŵ�� 
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



// 쳲��������� 
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


//���ַ�������,����������ʱ���� 
//int my_strlen(char* p)
//{
//	if (*p =='\0') return 0;
//	else return 1+my_strlen(p+1);
//}
// ģ�����ַ������� (ԭʼ��) 
//int my_strlen(char* p) // �������� arrֻ��arr[0]�ĵ�ַ 
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
////		printf("%s\n",p); // ��������ָ�������Ϊ�ַ�������������ӡ,����p++���ַ������ٵ�����λ 
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



// �����ݹ�
//error:ջ��� stack overflow 
// �ڴ�: ջ�����ֲ�����������������̬���ٵ��ڴ棩����̬����ȫ�ֱ�����static���εı����� 

//void print(int n) //�ݹ�--��ѧ���ɷ� 
//{ // �ֱ����ÿһλ���� 
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





//�������������úͶ��� 

//ͷ�ļ��У��������� 
//#ifndef __ADD_H__ // ���ָ���ͷ�ļ������趨,��ֹ�Կ���ظ����� 
//#define __ADD_H__
//int add(int,int);
//#endif

//д�������ݵ�Դ�ļ����������� int add(int x,int y)
//���ú�����Դ�ļ����������� #include "add.h"     //   .h����.c!!!! 



//��������ʽ����:
//int main()
//{
//	printf("%d",printf("%d",printf("%d",43))); // printf�ķ���ֵ�Ǵ�ӡ�ַ��ĸ���!-->4321 
//	return 0;
// } 


// ��дһ������,ÿ����һ��num����һ:
//void add(int* p)
//{
//	(*p)++; // ++�����ȼ��Ƚϸ�,���������ȸ�p++��*! 
//}
//int main()
//{
//	int num = 0;
//	int* p = &num; // һ����ַ�����ͱ������* !!!!!
//	add(p);
//	printf("%d\n",num);
//	add(p);
//	printf("%d\n",num);
//	add(p);
//	printf("%d\n",num);
//	return 0;
// } 


//��д���ֲ��Һ��� :
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
//	int ret = bin_search(arr,k,sz); // ���ﴫ���arr��ʵ��arr��һ��Ԫ�صĵ�ַ,������һ��ָ��,�ʲ����ں���������������С 
//	if (ret == -1) printf("δ�ҵ�");
//	else printf("�ҵ���,�±���:%d",ret); 
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


// ������������ֵ:(�Զ��庯��) 
//void swap(int*pa,int*pb) // ������ָ��,�������������a��b�޹� 
//{ // �β��Ƕ�ʵ�ε�һ����ʱ����,���ٲε��޸Ķ�ʵ��û��Ӱ��, �ʺ������÷�Ϊ:��ֵ���úʹ�ַ���� 
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

//�⺯��:���ĵ� cppplusplus.com 
//int main() //strcpy���� 
//{
//	char arr1[] = "hahaha";
//	char arr2[20] = "#######";
//	strcpy(arr2,arr1); // strcpy(des,source)
//	printf("%s\n",arr2);
//	return 0;
//}

//int main() // memset���� 
//{
//	char arr1[] = "hello world";
//	memset(arr1,'*',5); // memset(ptr,value,num) ��value�滻ptr��ָ����ǰnum���ַ� ,value���ܷ��ַ��� 
//	printf("%s\n",arr1);
//	return 0;
// } 

