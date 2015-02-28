// 2029.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> vector1;

int main()
{
	int times;
	cin>>times;
	if (times<=0)
	{
		exit(0);
	}
	char * str=new char[151];
	
	while (times>0)
	{
		memset(str, 0, 151);
		cin>>str;
		if (strlen(str)>100)
		{
			return 0;
		}
		int score=0;
		int flag=0;
		while (*str)
		{
			if (*str)
			{
				if (*str=='g')
				{
					score++;
				}
				if (*str=='l')
				{
					vector1.push_back(score);
					score=0;
				}
				if (*str!='g'&&*str!='l')
				{
					exit(0);
				}
				str++;
			}
		
			vector1.push_back(score);

		}
		cout << *max_element(vector1.begin(), vector1.end())<<endl;
	
		vector1.clear();
		
		times--;
	}

	return 0;
}
