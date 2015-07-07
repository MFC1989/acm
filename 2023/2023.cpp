// 2023.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <deque>
#include <string>
using namespace std;


int main()
{
	deque<int> mdeque;
	int operationTimes, maxSize;
	cin >> maxSize >> operationTimes;

	if (maxSize < 1 || maxSize>100) exit(0);
	if (operationTimes < 1 || operationTimes>10000) exit(0);

	while (operationTimes--)
	{
		string str;
		cin.clear();
		cin.sync();
		getline(cin, str);
		if (str=="pop")
		{	
		 
			if (!mdeque.empty())
			{
				cout << mdeque.back() << endl;
				mdeque.pop_back();
			} 
			else
			{
				cout << "Empty!" << endl;
			}
		}
		else
		{	
			if (str.substr(0,4) != "push")
			{
				exit(0);
			}
			int pos = str.find_first_of(' ');
			str.erase(0, pos);
			int tmp = atoi(str.c_str());
			if (tmp >= 4294967295)
			{
				exit(0);
			}
			mdeque.push_back(tmp);

			if (mdeque.size()>maxSize)
			{
				mdeque.pop_front();
			}
		
		}
	}
	return 0;
}

