
#include <stdio.h>
#include <stdlib.h>

// �������������1�ĸ���:
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	int count = 0;
//	while (a)
//	{
//		a &= a-1; // a&a-1����ȥ��a�������һ��0 
//		count++;
//	}
//	printf("%d\n",count);
//	return 0;
// }


// ��ȡ����������������λ��ż��λ:
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	printf("����λ\n");
//	for (int i=30;i>=0;i-=2)
//	{
//		printf("%d ",(n>>i)&1);
//	}
//	printf("\n");
//	printf("ż��λ\n");
//	for (int i=31;i>=1;i-=2)
//	{
//		printf("%d ",(n>>i)&1);
//	}
//	return 0;
// } 

// ��ӡn�׳˷��ھ���
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


// �ݹ������ַ���:

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



// ��ʼ�ṹ��:
//typedef struct Stu
//{
//	//��Ա����
//	char name[];
//	int age; 
// } Stu; // �������� 

//struct Stu
//{
//	char name[];
//} s1,s2;  // �ֺ�ǰ���Լ�ȫ�ֵĽṹ����� 
//int main()
//{
//	Stu s = {"hahahah",20}; // �ֲ����� ,��ʼ�� 
//	
//	return 0;
//}

// ���ݵĴ洢
//���͵Ļ�������:
//	
//����(char)
//
//������
//
//��������: ���� int[5] int[10] char[5] ������һ���Զ�������
//�ṹ������
//ö������
//����������
// 
//ָ������ int* char* ...
//
//������ void 








