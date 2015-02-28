// tmp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define ARRAYLEN 4	//需要排序的数据元素数量
void Insertsort1(int a[], int len)
{
	int i,j,tmp;
	for (i=1;i<len;i++)
	{
		tmp=a[i];
		for (j=i-1;j>=0&&a[j]>tmp;j--)
		{
			a[j+1]=a[j];
		}
		a[j+1]=tmp;
	}

}

void BubbleSort(int a[], int len)
{
	int i,j;
	for ( i=0;i<len;i++)
	{
		for ( j=1;j<=len-i;j++)
		{
			if (a[j]>a[j-1])
			{
				int tmp=a[j];
				a[j]=a[j-1];
				a[j-1]=tmp;	

			}
		}
	}

}

void shellSort(int a[], int len)
{
	int i,j,flag,tmp;
	flag=len/2;
	while (flag>=1)
	{
		for ( i=flag;i<len;i++)
		{
			j=i-flag;
			tmp=a[i];
			while (tmp<a[j]&&j>=0)
			{
				a[j+flag]=a[j];
				j=j-flag;
			}
			a[j+flag]=tmp;
		}

		flag=flag/2;
	}


}


int main()
{
	int mArray[5]={4,5,8,100,3};
	int mArrayLen=sizeof(mArray)/sizeof(int);
	//BubbleSort(mArray,mArrayLen);
	shellSort(mArray,mArrayLen);
	return 0;   
}


