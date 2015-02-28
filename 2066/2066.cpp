// 2066.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main( )
{
	int T;
	cin>>T;
	if (T<1||T>100)
	{
		return 0;
	}
	int a,b,c,d;
	while (T>0)
	{
		cin>>a>>b>>c>>d;
		if (a<0||a>10000) return 0;
		if (b<0||b>10000) return 0;
		if (c<0||c>10000) return 0;
		if (d<0||d>10000) return 0;
		
		if (a+b+c+d==0)
		{
			cout<<"sidajiekong"<<endl;
			T--;
			continue;
		} 
		cout<<a+b+c+d<<endl;
		T--;

	}
	return 0;
}

