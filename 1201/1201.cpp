// 1201.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>
#include <string.h>
#include <algorithm>

class mClass
{
public:
	char ch;
	int chCount;
	mClass(char tch) : ch(tch),chCount (0)
	{
	}
	mClass():ch(' '),chCount(0)
	{
	}
 
};

int main()
{
	int n;
	scanf("%d",&n);
	if (n<1||n>1000000000)
	{
		exit(0);
	}
	char  strBuff[11]={0x00};
	mClass *collection[10];
	for (int colCount=0;colCount<10;colCount++)
	{
		collection[colCount]=new mClass(char(colCount+48));
	}

	int len=0;
	char  buff[10]={0x00};
	if (n>=500000)
	{
		
		for (int i=0;i<10;i++)
		{
			if (i==0)
			{
				collection[i]->chCount=238894;
				continue;
			}
			if (i==5)
			{
				collection[i]->chCount=250001;
				continue;
			}

			collection[i]->chCount=250000;

			
		}
		for (register size_t i=500001;i<=n;i++)
		{
			itoa(i,buff,10);
			for (register size_t colCount=0;colCount<10;colCount++)
			{
				collection[colCount]->chCount+=std::count(buff,buff+10,collection[colCount]->ch);
			}

		}
	}
	else
	{
		for (register size_t i=1;i<=n;i++)
		{
			itoa(i,buff,10);
			for (register size_t colCount=0;colCount<10;colCount++)
			{
				collection[colCount]->chCount+=std::count(buff,buff+10,collection[colCount]->ch);
			}
		}
	}


	for (register size_t i=0;i<10;i++)
	{
		printf("%d\n",collection[i]->chCount);
	}
	return 0;
}

