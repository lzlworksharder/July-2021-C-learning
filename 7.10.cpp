// 2021.7.10
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main() // goto���:�������ѭ������ 
{ // system()--stdlib.h ִ��ϵͳ����� 
	char input[20] = {0};
	system("shutdown -s -t 60"); // 60���ػ� 
again: //��: ����; 
	printf("��ע��,��ĵ��Խ���һ���Ӻ�ػ�,�������:������,��ȡ���ػ�\n������->");
	scanf("%s",input);
	if (strcmp(input,"������") == 0)
	{
		system("shutdown -a"); // ȡ���ػ� 
	}
	else
	{
		goto again;
	}
	return 0;
} // exe�ļ��󶨵�--����--����--��������--�ֶ�(�Զ�) �ٺٺ� 



//void game() // ��������Ϸ 
//{
//	int r = 0;
//	r = rand()%100+1; // ����1-100����� 
//	while(1)
//	{
//		int g = 0;
//		printf("�������-> ");
//		scanf("%d",&g);
//		if (g>r)
//		{
//			printf("�´���\n");
//		}
//		else if(g<r)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ��¶���!\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int ch = 0;
//	srand((unsigned int) time(NULL)); // null��ָ��,������������һ�μ���,��ҪƵ������ 
//	do // time() ����һ��long��������,��Ҫǿ��ת����unsigned int���srand 
//	{
//		printf("***********************\n");
//		printf("***1.play     0.exit***\n");
//		printf("***********************\n");
//		printf("��ѡ��-> ");
//		scanf("%d",&ch);
//		switch(ch)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("�˳���Ϸ\n");
//				break;
//			default:
//				printf("�������\n");
//				break; 
//		}
//	} while(ch);
//	return 0;
//}










//int main() // ��ӡ�˷��ھ��� 
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



//int main() // ����1-1/2+1/3+...-1/100 (ln2) 
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


//int main() // ���һ����Χ�ڵ����� 
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


//int main() // շת����� 
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



//int main() // ���� 
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
