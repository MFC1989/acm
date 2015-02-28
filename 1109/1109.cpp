// 1109.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> vecInt;
	int times;
	cin>>times;
	while (times>0)
	{

		int length;
		cin>>length;

		int tmp;
		for (register size_t i=0;i<length;i++)
		{
			scanf("%d",&tmp);
			if (i==0)
			{
				vecInt.push_back(tmp);
			}
			else
			{
				if (tmp>vecInt[i-1])
				{
					vecInt.push_back(tmp);
				} 
				else
				{
					exit(0);
				}
			}
		}

		int searchTarget;
		cin>>searchTarget; 
		if (searchTarget<*(vecInt.begin()) || searchTarget>(*(vecInt.end()-1)) )
		{
			cout<<"No"<<endl;
		}
		else
		{
			if (vecInt.end()!= find(vecInt.begin(),vecInt.end(),searchTarget ))
			{
				cout<<"Yes"<<endl;
			}
			else
			{
				cout<<"No"<<endl;
			}		
		}

		times--;
		vecInt.clear();
	}

	return 0;
}

