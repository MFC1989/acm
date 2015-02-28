// 1740.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;

int main()
{
 

	double m;
	cin>>m;
	if (m!=(long)m)
	{
		return 0;
	}
	long n=long(m);
	if (n<1||n>1000000)
	{
		return 0;
	}

	if (n==1)
	{
		cout<<"1.000"<<endl;
		return 0;
	}
	double sum=n;;
	long count=1;
	   while (n!=1)
	   {
		   if (n%2==0)
		   {
			   n=n>>1;
		   }
		   else
		   {
			   n=(3*n)+1;
		   }
		    sum+=n;
			count++;
	   }
	   	
	 printf("%.3f",sum/count);
	return 0;
}

