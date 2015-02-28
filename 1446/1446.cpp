// 1446.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <vector>
using namespace std;


int main()
{
	int times;
	cin>>times;
	if (times<0||times>40)
	{
		exit(0);
	}
	vector<int>VecInt;
	int flag=0;
	while (times>0)
	{
		for (int i=0;i<4;i++)
		{
		
		int tmp;
		cin>>tmp;
		if (VecInt.size()==0)
		{
			VecInt.push_back(tmp);
		}
		else
		{
			if (tmp>0)
			{
				if (tmp>1000000000)
				{
					exit(0);
				}
				flag=tmp-*(VecInt.end()-1);
				VecInt.push_back(tmp);
			}
			else
			{

				if (tmp<-1000000000)
				{
					exit(0);
				}
				flag=tmp-*(VecInt.end()-1);
				VecInt.push_back(tmp);
			}
		}

		}
		
		times--;
		if(VecInt[2]-VecInt[1]==VecInt[1]-VecInt[0]) 
		{
			VecInt.push_back(VecInt[3]+VecInt[2]-VecInt[1]);
		} 
		else
		{
			VecInt.push_back(VecInt[3]*(VecInt[2]/VecInt[1]));
		}

		for (size_t vecIndex=0;vecIndex<VecInt.size();vecIndex++)
		{
			if (vecIndex<4)
			{
				cout<<VecInt[vecIndex]<<" ";
			}
			else
			{
				cout<<VecInt[vecIndex]<<endl;
			}
		}
		VecInt.clear();

	}
	return 0;
}

