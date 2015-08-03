// 1588.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdio>
#include <cstdlib>
//#include <iostream>
//using namespace std;

inline  int calc(char op,int tn1,int tn2)
{
	if (tn1<1||tn1>1000)
	{
		exit(0);
	}
	if (tn2<1||tn2>1000)
	{
		exit(0);
	}

	switch (op)
	{
	case '+':
		return tn1+tn2;
		break;
	case '-':
		return tn1-tn2;
		break;
	case '*':
		return tn1*tn2;
		break;
	case '/':
		return tn1/tn2;
		break;
	default:
		exit(0);
		return 0;
		break;
	}
}

int main()
{
	int numOfTests;
	//cin>>numOfTests;
	scanf("%d", &numOfTests);
	if (numOfTests > 100000 || numOfTests < 1)
	{
		return 0;
	}

	int count=0;

	while (numOfTests)
	{
		count++;
		char op;
		int n1, n2;
		

		//fflush(stdin);    //fflush��windows����չ��,LINUX��һ��.(OJ��һ��ʹ�õ���GCC)--
							//����C��׼��fflush(stdout)�ж��壬��fflush(stdin)����û����ȷ�����
		getchar();			//�˴�Ӧ��ʹ��getchar()	
		scanf("%c%d%d",&op,&n1,&n2);

		if (numOfTests==1)
		{
			printf("Case %d: %d%c%d=%d\n", count, n1, op, n2, calc(op, n1, n2));
		}
		else
		{
			printf("Case %d: %d%c%d=%d\n", count, n1, op, n2, calc(op, n1, n2));
		}
		numOfTests--;
	}
	//cout<<vec[0]<<endl;
	return 0;
}

