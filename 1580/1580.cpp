// 1580.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<stdio.h>
#include <string.h>
#include <malloc.h>

int main()
{
	int countStr=0;
	char pLine[900]={0x00};
	while (scanf("%d",&countStr)!=EOF&&countStr>=1&&countStr<=31)
	{
		int i,j;
		for ( i=0;i<countStr;i++ )
		{
			strcat(pLine,"XHU");
		}
		for ( j=0;j<countStr*3;j++)
		{
			puts(pLine);
		}
		memset(pLine,0,strlen(pLine));
		countStr--;
	}
	return 0;
}

