// 2021.7.10
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main() // goto语句:跳出深层循环常用 
{ // system()--stdlib.h 执行系统命令的 
	char input[20] = {0};
	system("shutdown -s -t 60"); // 60秒后关机 
again: //用: 不用; 
	printf("请注意,你的电脑将在一分钟后关机,如果输入:我是猪,就取消关机\n请输入->");
	scanf("%s",input);
	if (strcmp(input,"我是猪") == 0)
	{
		system("shutdown -a"); // 取消关机 
	}
	else
	{
		goto again;
	}
	return 0;
} // exe文件绑定到--服务--属性--启动类型--手动(自动) 嘿嘿嘿 



//void game() // 猜数字游戏 
//{
//	int r = 0;
//	r = rand()%100+1; // 生成1-100随机数 
//	while(1)
//	{
//		int g = 0;
//		printf("请猜数字-> ");
//		scanf("%d",&g);
//		if (g>r)
//		{
//			printf("猜大了\n");
//		}
//		else if(g<r)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你猜对了!\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int ch = 0;
//	srand((unsigned int) time(NULL)); // null空指针,整个程序设置一次即可,不要频繁设置 
//	do // time() 返回一个long类型数字,需要强制转换成unsigned int配合srand 
//	{
//		printf("***********************\n");
//		printf("***1.play     0.exit***\n");
//		printf("***********************\n");
//		printf("请选择-> ");
//		scanf("%d",&ch);
//		switch(ch)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("退出游戏\n");
//				break;
//			default:
//				printf("输入错误\n");
//				break; 
//		}
//	} while(ch);
//	return 0;
//}










//int main() // 打印乘法口诀表 
//{
//	int i = 1;
//	for (i=1 ; i<=9 ; i++)
//	{
//		int j = 1;
//		for (j=1 ; j<=i ; j++)
//		{
//			printf("%d*%d=%-2d ",i,j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main() // 计算1-1/2+1/3+...-1/100 (ln2) 
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i=1 ; i<=100 ; i++)
//	{
//		sum += 1.0/i*flag;
//		flag = -flag;
//	}
//	printf("%lf\n",sum);
//	return 0;
//}


//int main() // 输出一定范围内的素数 
//{
//	int a = 0;
//	int b = 0;
//	int i = 2;
//	int j = 2;
//	int count = 0;
//	scanf("%d%d",&a,&b);
//	for (i=a ; i<=b ; i++)
//	{
//		for (j=2 ; j<=sqrt(i) ; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			printf("%d ",i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n",count);
//	return 0;
//}


//int main() // 辗转相除法 
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d",&a,&b);
//	if (0 == b)
//	{
//		printf("%d",a);
//	}
//	else
//	{
//		while(int r = a%b)
//		{
//			a = b;
//			b = r;
//		}
//		printf("%d",b);
//	}
//	
//	return 0;
//} 



//int main() // 排序 
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d",&a,&b,&c);
//	if (a<b)
//	{
//		int tem = a;
//		a = b;
//		b = tem;
//	}
//	if (a<c)
//	{
//		int tem = a;
//		a = c;
//		c = tem;
//	}
//	if (b<c)
//	{
//		int tem = b;
//		b = c;
//		c = tem;
//	}
//	printf("%d %d %d",a,b,c);
//	return 0;
//}
