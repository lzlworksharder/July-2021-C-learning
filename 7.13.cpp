// 2021.7.13
#include<stdio.h>
#include<string.h>
#include<math.h>

// char ch[n] = {0} ��С�������������ó���,���ܱ���
// int arr[10] = {1,2,3}; //����ȫ��ʼ��,ʣ��Ԫ��Ĭ��Ϊ��
//char arr[3] = "ab" ; // ����λ��\0
//char arr[4] = {'a',98}; // "ab",��Ϊ'b'����ֵΪ98
//char arr[] = "abcdef"; // 7��Ԫ��,\0
//sizeof(arr) // 7*1=7
//strlen(arr) // 6

//char arr1[] = "abc";
//char arr2[] = {'a','b','c'}; // ûд��С��ֻ���⼸�� 
//sizeof(arr1) // 4
//sizeof(arr2) // 3
//strlen(arr1) // 3
//strlen(arr2) // ����� 

//int main()  // ��ӡÿһ���ַ� 
//{
//	char arr[] = "abcdefg";
//	int i = 0;
//	for (i=0;i<(int)strlen(arr);i++) // strlen����һ��unsigned int,��Ҫǿ������ת����int 
//	{
//		printf("%c ",arr[i]);
//	}
//	return 0;
//}

// �������ڴ����������! ÿ������Ԫ�ص�ַ֮�����Ԫ����ռ�ֽڴ�С 

//��ά���鴴��:���к��� 
//int arr[3][4] = {{1,2,3},{4,5}}; // ��ά������п���ʡ��,�в���ʡ�� 
//char arr[3][5];
//double arr[2][4]; 


//int main() // ��ӡ��ά�����ַ--����Ԫ�ص�ַ��4(int ռ4���ֽ�),��һ�к�����ǵڶ��� 
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
////		printf("%d %d\n",i,j); // ����,��ѭ���Ҳ���j,����ѭ������ѭ���ı������ڿ�ʼ���� 
//	}
//	return 0;
//}

// ð������(����) 
//void bubble_sort(int* arr,int sz)
//{
//	for (int i=0;i<sz-1;i++)
//	{
//		int flag = 1; // ���һ��û��˳��,ֱ������ 
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
//		if (flag == 1) goto end; //������breakҲ�� 
//	}
//	end: //  ��: !!!
//	; // �����п����,���򱨴� 
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


//�������arr��������ʱ����ʾ�׸�Ԫ�ص�ַ:
//1.sizeof(arr),arr��ʾ��������
//2.&arr,arr������������,ȡ��������������ĵ�ַ 
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7};
//	printf("%p  %p\n",arr,arr+1);
//	printf("%p  %p\n",&arr,&arr+1); // &arr+1 �� arr+1��ֵ����28(1c) ˵��&arrָ�������� 
//	return 0;
//}











