// 1108.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> vecInt;
	int times;
	cin>>times;
	if (times>100)
	{
		exit(0);
	}
	while (times>0)
	{

		int length;
		cin>>length;
		if (length>10000||length<1)
		{
			exit(0);
		}
		int tmp;
		for (register size_t i=0;i<length;i++)
		{
			scanf("%d",&tmp);
			if (abs(tmp)>100000)
			{
				exit(0);
			} 
			vecInt.push_back(tmp);
		}
		 

		int searchTarget;
		cin>>searchTarget; 
		if (searchTarget>1000000||searchTarget<1)
		{
			exit(0);
		}
	 
	  
		if (vecInt.end()!= find(vecInt.begin(),vecInt.end(),searchTarget ))
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}		

		times--;
		vecInt.clear();
	}
	 return 0;
 }
 


