// 1153.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctype.h>
using namespace std;


int get16Sum(char * str, int len)
{
	int sum = 0;

	
	for (int i = 0; i < len;i++)
	{
		if (isalpha(str[i]))
		{
			sum += (int)(str[i]) - 87;
		}
		else
		{
			sum += (int)(str[i]) - 48;
		}
	}

	return sum;
}


int get12Sum(char * str, int len)
{
	int sum = 0;

	for (int i = 0; i < len; i++)
	{
		sum += (int)(str[i]) - 48;
	}

	return sum;
}


int get10Sum(char * str, int len)
{
	int sum = 0;

	for (int i = 0; i < len; i++)
	{
		sum += (int)(str[i]) - 48;
	}

	return sum;
}

int main()
{

	int n=0;
	while (cin>>n&&n>0)
	{
		if (n<1000 || n>9999)
		{
			exit(0);
		}
		char buff16[5] = { 0x00 };
		itoa(n,buff16,16);
		int sum16 = get16Sum(buff16, strlen(buff16));


		char buff12[5] = { 0x00 };
		itoa(n, buff12, 12);
		int sum12 = get12Sum(buff12, strlen(buff12));

		char buff10[5] = { 0x00 };
		itoa(n, buff10, 12);
		int sum10 = get10Sum(buff10, strlen(buff10));

		if (sum10==sum12&&sum10==sum16)
		{
			cout << n << " is a Ray Number." << endl;
									
		}
		else
		{
			cout << n << " is not a Ray Number." << endl;
		}

	}
	return 0;
}

