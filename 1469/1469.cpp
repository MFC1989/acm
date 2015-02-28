// 1469.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
using namespace std;
 __int64 times=0;

 __int64   sum=0;

int main()
{
	cin>>times;
	while (times>0)
	{
		__int64 tmp1=0;__int64 tmp2=0;
		cin>>tmp1;
		while (tmp1>0)
		{
			cin>>tmp2;
			sum+=tmp2;	
			tmp1--;
		}
		if (times!=1)
		{
			cout<<sum<<endl<<endl;	
		} 
		else
		{
			cout<<sum<<endl;	
		}
		sum=0;
		times--;
	}
	return 0;
}

