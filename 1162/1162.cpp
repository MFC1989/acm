// 1162.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <list>
#include <numeric>  
#include <cstdlib>
using namespace std;
 
int a[50000];
long long sum1=0,sum2=0;
 int cmp ( const void *a , const void *b )

		{ return *(int *)a - *(int *)b; }

int main()
{
	 long long  N;
	scanf("%lld",&N);
	if (N<1||N>50000)
	{
		return 0;
	}
	  int  tmp;
	  scanf("%d",&tmp);
	  if (tmp>1000||tmp<-1000)
	  {
		  return 0;
	  }
		a[0]=tmp;
	for (  int  i=1;i<N;i++)
	{
		scanf("%d",&tmp);
		if (tmp>1000||tmp<-1000)
		{
			return 0;
		}
		if (i%2!=0)
		{
			sum1+=tmp;
		}
		else
		{
			 sum2+=tmp;
		}
		a[i]=tmp;
	}
	//qsort(a);
	qsort(a,50000,sizeof(a[0]),cmp);

	if (sum1-sum2>0)
	{
		cout<<sum1-sum2<<endl;
	}
	else
	{cout<<sum2-sum1<<endl;}
	 
	return 0;
}

