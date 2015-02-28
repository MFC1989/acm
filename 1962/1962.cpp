// 1962.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<stdio.h>
int main()
{
	int times;
	scanf("%d",&times);
	while (times--)
	{
		int a,b,n;
		scanf("%d%d%d",&a,&b,&n);
		n--;
		long sum=0;
		int mArray[41]={0x00};    
		int i;
		for( i=0;i<=n+1;i++)
		{
			if(i==0)
			{
				mArray[i]=0;
				continue;
			}
			if(i==1)
			{
				mArray[i]=a;
				continue;
			}
			if (i==2)
			{
				mArray[i]=b;
				continue;
			}
			if (i%2==1)
			{
				mArray[i]=mArray[i-1]+mArray[i-2];
			}
			else
			{
				mArray[i]=mArray[i-1]+mArray[i-2]+mArray[i-3];
			}
		}
		printf("%d\n",mArray[n+1]);    
	}	 
	return 0;
}
