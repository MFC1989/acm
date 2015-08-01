// 2048.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


//int main()
//{
//	int a,b,c;
//	char buff[3]={0x00};
//	cin>>buff[0]>>buff[1]>>buff[2];
//	if (isdigit(buff[0]) && isdigit(buff[1])&&isdigit(buff[2]) )
//	{
//	}
//	else
//	{
//		exit(0);
//	}
//	 a=buff[0]-'0';
//	 b=buff[1]-'0';
//	 c=buff[2]-'0';
//
//	if (a<1||a>1000) exit(0);
//	if (b<1||b>1000) exit(0);
//	if (c<1||c>1000) exit(0);
//
//
//	for (int i=1;i<=1000;i++)
//	{
//		for (int j=1;j<=1000;j++)
//		{
//			if (i*j==c)
//			{
//				for (int k=1;k<=1000;k++)
//				{
//					if (i*k==a&&j*k==b)
//					{
//						cout<<(i+j+k)*4<<endl;
//						break;
//					}
//				}
//
//			}
//		}			 
//	}
//	return 0;
//}


#include <iostream>
#include <algorithm>
using namespace std;


int gcd(int a, int b,int gc)
{
	if (a==b&&a!=gc)
	{
		a = b / 2;
	}

	if (0 == a)
	{
		return b;
	}
	if (0 == b)
	{
		return a;
	}
	if (a > b)
	{
		swap(a, b);
	}
	int c;
	for (c = a % b; c > 0; c = a % b)
	{
		a = b;
		b = c;
	}
	return b;
}

int main()
{
	int a, b, c;

	cin >> a >> b >> c;


	int x = gcd(a, b,c);
	int y = gcd(c, b,a);
	int z = gcd(a, c,b);
	cout << (x + y + z) * 4 << endl;
	return 0;
}