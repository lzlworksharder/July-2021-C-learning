// 2021.7.8
#include <stdio.h>
#include <string.h>

//struct �ؼ���:
// ����һ���ṹ������(���python��) 
//struct Book
//{
//	char name[90];
//	short price;
// } ; // ;�����!!!!
// int main()
// {
// 	struct Book b1 = {
// 		"C-programming-language",
// 		55
//	 };
//	 strcpy(b1.name, "C++"); // �ַ�������ֱ�Ӷ����޸�,�ַ����޸ĸ�ֵ��Ҫ��strcpy���� 
//	 b1.price = 15;
//	 
//	 struct Book* pb = &b1;
//	 printf("%p\n",pb); 
//	 
//	 
//	 printf("%s\n",pb->name); // ������ "->" : �ṹ��ָ��-��Ա 
//	 printf("%d\n",pb->price); // ������ "." : �ṹ��-��Ա 
//	 
//	 printf("%s\n",(*pb).name);
//	 printf("%d\n",(*pb).price);
//	 
//	 printf("book name: %s\n",b1.name);
//	 printf("price: %d\n",b1.price);
//	 
//	 return 0;
//  } 




// �ؼ���:
// register int a = 10 // �Ĵ����ؼ���,�������ٶȿ�,���ռ��� 
//	typedef unsigned int u_int; // �����ض���ؼ���typedef, ��һ����������� 
//	u_int num = 20;

//void test()
//{
//	static int a = 1; // static���ξֲ�����,�������ڱ䳤 
//	a++; // static����ȫ�ֱ���ʱ�ı�������,ֻ��������Դ�ļ��ڲ�ʹ�� 
//	printf("a = %d\n",a); // static���κ����ı��˺�������������,���ⲿ�������Ը�Ϊ�ڲ� 
//}
//int main()
//{
//	int i = 0;
//	while(i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

// ��Ķ���:
//#define MAX(X,Y) (X>Y?X:Y) // ��:�Զ���ǰ��ķ����滻�ɺ���ķ��� 
//int Max(int x,int y)
//{
//	if (x>y)
//		return x;
//	else
//		return y;
//} // ���������ֵ 
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a,b);
//	int max1 = Max(a,b);
//	
//	printf("%d\n",max);
//	printf("%d\n",max1);
//	return 0;
// } 

//int main() // ��ʶָ�� 
//{
//	int a = 10;
//	int* p = &a; // ��ַ��������int*,p��ָ�����,������ŵ�ַ 
////	printf("%p\n",&a); // ��ӡ��ַ��%p,&ȡ��ַ����
////	printf("%p\n",p);
//	*p = 20; // *:�����ò�����,ָ���ַ��Ӧ�ı���
//	printf("%d\n",a); // ָ���С:ָ������ַ,��ַ64λ8��byte,����ָ�����ռ8���ֽ� 
//	return 0; 
//}

//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	printf("%p\n",pd);
//	*pd = 3.1415926;
//	printf("%lf\n",d);
//	printf("%d\n",sizeof(pd)); // 32λ��4 ,64λ��8, ��double������ռ�ռ��޹�, ֻ�͵�ַ�Ĵ�С�й� 
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int b = 0;
//	int min = (a<b ? a:b); // ����(��Ŀ)������ exp1 ? exp2:exp3 exp1Ϊ����ִ��exp2,����ִ��exp3 
//	printf("%d\n",c);
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	int b = 3;
//	int c = a && b; // �߼���,�൱��and,����һ��&(��λ��) 
//	int d = a || b; // or
//	printf("c = %d\n",c);
//	printf("d = %d\n",d);
//	return 0;
//}



//int main()
//{
//	int a = (int)3.14; // ǿ������ת�� 
//	printf("%d\n",a);
//	return 0;
//}


//int main()
//{
//	int a = 10;
////	int b = a++; // ����++ : ��ʹ��a��ֵ,��a++
////	int b = ++a; // ǰ��++ :  ��++,��ʹ�� 
//	printf("a = %d b = %d\n",a,b);
//	return 0; 
// } 
 
 
//int main()
//{
//	int a = 0;
//	int b = ~a; // ��λȡ�� 
//	printf("%d\n",b); // -1
//	return 0;
// } 
