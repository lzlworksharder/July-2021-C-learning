// 2021.7.8
#include <stdio.h>
#include <string.h>

//struct 关键字:
// 创建一个结构体类型(类比python类) 
//struct Book
//{
//	char name[90];
//	short price;
// } ; // ;必须加!!!!
// int main()
// {
// 	struct Book b1 = {
// 		"C-programming-language",
// 		55
//	 };
//	 strcpy(b1.name, "C++"); // 字符串不能直接对其修改,字符串修改赋值需要用strcpy函数 
//	 b1.price = 15;
//	 
//	 struct Book* pb = &b1;
//	 printf("%p\n",pb); 
//	 
//	 
//	 printf("%s\n",pb->name); // 操作符 "->" : 结构体指针-成员 
//	 printf("%d\n",pb->price); // 操作符 "." : 结构体-成员 
//	 
//	 printf("%s\n",(*pb).name);
//	 printf("%d\n",(*pb).price);
//	 
//	 printf("book name: %s\n",b1.name);
//	 printf("price: %d\n",b1.price);
//	 
//	 return 0;
//  } 




// 关键字:
// register int a = 10 // 寄存器关键字,拿数据速度快,但空间少 
//	typedef unsigned int u_int; // 类型重定义关键字typedef, 给一个类型起别名 
//	u_int num = 20;

//void test()
//{
//	static int a = 1; // static修饰局部变量,生命周期变长 
//	a++; // static修饰全局变量时改变作用域,只能在所在源文件内部使用 
//	printf("a = %d\n",a); // static修饰函数改变了函数的链接属性,将外部链接属性改为内部 
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

// 宏的定义:
//#define MAX(X,Y) (X>Y?X:Y) // 宏:自动把前面的符号替换成后面的符号 
//int Max(int x,int y)
//{
//	if (x>y)
//		return x;
//	else
//		return y;
//} // 函数求最大值 
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

//int main() // 初识指针 
//{
//	int a = 10;
//	int* p = &a; // 地址的类型是int*,p是指针变量,用来存放地址 
////	printf("%p\n",&a); // 打印地址用%p,&取地址符号
////	printf("%p\n",p);
//	*p = 20; // *:解引用操作符,指向地址对应的变量
//	printf("%d\n",a); // 指针大小:指针里存地址,地址64位8个byte,所以指针变量占8个字节 
//	return 0; 
//}

//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	printf("%p\n",pd);
//	*pd = 3.1415926;
//	printf("%lf\n",d);
//	printf("%d\n",sizeof(pd)); // 32位是4 ,64位是8, 与double类型所占空间无关, 只和地址的大小有关 
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int b = 0;
//	int min = (a<b ? a:b); // 条件(三目)操作符 exp1 ? exp2:exp3 exp1为真则执行exp2,否则执行exp3 
//	printf("%d\n",c);
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	int b = 3;
//	int c = a && b; // 逻辑与,相当于and,区分一个&(按位与) 
//	int d = a || b; // or
//	printf("c = %d\n",c);
//	printf("d = %d\n",d);
//	return 0;
//}



//int main()
//{
//	int a = (int)3.14; // 强制类型转换 
//	printf("%d\n",a);
//	return 0;
//}


//int main()
//{
//	int a = 10;
////	int b = a++; // 后置++ : 先使用a赋值,再a++
////	int b = ++a; // 前置++ :  先++,再使用 
//	printf("a = %d b = %d\n",a,b);
//	return 0; 
// } 
 
 
//int main()
//{
//	int a = 0;
//	int b = ~a; // 按位取反 
//	printf("%d\n",b); // -1
//	return 0;
// } 
