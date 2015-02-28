// 2038.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
	char scoreStr[10000] = {0x00};
	vector<char *>res;
	int times;
	scanf("%d", &times);
	if (times>10000||times<1)
	{
		exit(0);
	}
	while (times--)
	{
		scanf("%s", &scoreStr);

		int len = strlen(scoreStr);
		if (len>10000)
		{
			exit(0);
		}

		int ju1 = count(scoreStr, scoreStr+len, '1');
		int ju2 = len - ju1;


		scanf("%s", &scoreStr);


		if (ju1!=ju2)
		{
			if (ju1>ju2)
			{
				res.push_back("1>2");
			} 
			else
			{
				res.push_back("1<2");
			}
			continue;
		} 
		else
		{

			int lenA = strlen(scoreStr);
			if (lenA > 10000)
			{
				exit(0);
			}
			int au1 = count(scoreStr, scoreStr+lenA, '1');
			int au2 = lenA - au1;
			if ((au1 + ju1) > (au2 + ju2))
			{
				res.push_back("1>2");
			}
			else
			{
				res.push_back("1<2");
			}
		}


	}


	for (int i = 0; i < res.size();i++)
	{
		printf("%s\n", res[i]);
	}

	return 0;

}

