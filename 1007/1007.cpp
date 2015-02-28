#include "stdafx.h"
#include <stdlib.h>
#include <boost/progress.hpp>
using namespace std;
#define Q1(X) (X)*(X)*(X)                                

   int Q2(int x)
{
	return x*x*x;
}

int main()
{
	
	boost::progress_timer t;
	int N;
	cin>>N;
	 
	if (N<=1||N>100)
	{
		return 1;
	}
	for (int i=2;i<=N;i++)
	{
		for (int j=2;j<i;j++)
		{
			for (int k=j;k<i;k++)
			{
				for (int m=k;m<i;m++)
				{
					if (Q1(i)==( Q1(j)+Q1(k)+Q1(m) ) )								
					{
						   printf("Cube = %d, Triple = (%d,%d,%d)\n",i,j,k,m);
					}
				}
			}
		}
	}
	return 0;
}


