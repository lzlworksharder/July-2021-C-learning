// 2021.7.15
// ��ʼָ�� 
#include <stdio.h>
// ָ������:�����˽�����һ�η��ʵ��ֽ���,������+1�ߵĲ���
// Ұָ��:ָ��λ�ò���֪ 
// ����δ��ʼ������Ұָ�� 
//int* p ; //�ֲ���������ʼ����Ĭ�ϴ�һ�����ֵ 
//*p = 20;
//����Խ��ᵼ��Ұָ�� *p++ = i; ->*p = i; p++
// ָ��ָ��Ŀռ��ͷ�
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

// ��֪��ָ��ָ��˭��ָ��һ����ָ��NULL��NULL������ʼ��ָ��
// ָ��ָ��Ŀռ䱻�ͷţ�����Ҫָ�����Ҫ��ɿ�ָ�� 
//ʹ��ָ��ǰ���ָ����Ч��
// ʹ��ָ�벽�裺1.��ʼ�� 2.�����ÿ� 3.�´��ü����Ч�� 
//if (pa != NULL)
//{
//	...
//}

//ָ�����㣺
//ָ��+-���� ; ָ��Ĺ�ϵ���� 
//#define N_VALUES 5
//int main() // ��ʼ������Ϊ0 
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

//ָ���ȥָ�룬�õ�ָ��֮��Ԫ�صĸ���,����Ϊ�����Ҳ���֮���Ԫ��������������һ������֮�ڵģ�
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	printf("%d\n",&arr[0]-&arr[9]); // -9
//	return 0;
// } 

//�ݹ����ַ������ȣ� 
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

//ָ�����ַ������ȣ�
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
 
// ��׼�涨����ָ������Ԫ��ָ�����������ĺ����Ǹ�ָ��ȣ�������͵�һ��Ԫ��֮ǰ��ָ��� 

//���������ָ����з��ʣ�
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


//����ָ�룺 
//int a = 10;
//int* pa = &a;
//int** ppa = &pa;
//int*** pppa = &ppa;


//ָ������--����--���ָ������� 
//����ָ��--ָ�� 
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

//ȫ�ֱ�������ʼ��Ĭ����0; 

//int i;
//int main()
//{ // sizeof����һ��unsigned int�޷�����,�����ͺ�unsigned int
//// ���мӼ��˳��Ƚϵ���������ʱĬ�ϰ�����ת����unsigned int
//// ��-1�ķ���λ��������Чλ,��һ���ܴ������ !
//	i--;
//	if (i > sizeof(i)) printf(">");
//	else printf("<");
//	return 0;
//}


















