// 1003.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <cassert> 
#include <boost/progress.hpp>
using namespace std;

 
inline int f(register int tmp)
{ 

	if (tmp==0)
	{
		return 0;
	}
	if (tmp==1)
	{
		return 1;
	}
	if (tmp==3)
	{
		return 1;
	}

	else
		return f(tmp-1)+f(tmp-2);
}

int main()
{

	//int n;
	//scanf("%d",&n);
	int n=40;
	boost::progress_timer t;

	//assert(n>=0&&n<=40);
	if (n<0||n>40)
	{
		return 1;
	}
	//cout<<f(n)<<endl;
	printf("%d\n",f(n));
	return 0;
}