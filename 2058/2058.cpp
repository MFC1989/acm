// 2058.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

	int waitSecond=0;
 

int main()
{
	int times;
	cin>>times;
	while (times--)
	{
		int len1,len2,len3;	
		vector<int>vecInt;
		cin>>len1>>len2>>len3;
		vecInt.push_back(len1);
		vecInt.push_back(len2);
		vecInt.push_back(len3);

		sort(vecInt.begin(),vecInt.end());

		if (vecInt[0]>0)
		{
			while (vecInt[0]>0)
			{		
				vecInt[0]--;
				vecInt[1]--;
				vecInt[2]--;
				waitSecond++;
			}
		}
		else
		{
			//waitSecond++;
		}
		

		if (vecInt[1]==0)
		{
		/*	waitSecond++;
			vecInt[2]--;*/
		}
		else
		{
			while (vecInt[1]>0)
			{
				vecInt[1]--;
				vecInt[2]--;
				waitSecond++;
			}

		}
		while(vecInt[2]>0)
		{
			vecInt[2]--;
			waitSecond++;
		}
		cout<<waitSecond<<endl;

	}

	return 0;
}

