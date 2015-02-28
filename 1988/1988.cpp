// 1988.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int times;
	set<int>setInt;
	vector<int>vecInt;
	int tmp;
	scanf("%d",&times);
	if (times<1||times>100)
	{
		exit(0);
	}
	while (times--)
	{	
		int countOfNum;
		scanf("%d",&countOfNum);
		
		if (countOfNum<1||countOfNum>100)
		{
			exit(0);
		}

		while (countOfNum--)
		{
			scanf("%d",&tmp);
			if (tmp<1||tmp>1000)
			{
				exit(0);
			}
			setInt.insert(tmp);
		}
		vecInt.resize(setInt.size());
		copy(setInt.begin(),setInt.end(),vecInt.begin());
		for (int index=0;index<vecInt.size();index++)
		{
			if (index!=vecInt.size()-1)
			{
				 printf("%d ",vecInt[index]);
			}
			else
			{
				printf("%d\n",vecInt[index]);
			}
		}
	vecInt.clear();
	setInt.clear();
	
	}
	return 0;
}

