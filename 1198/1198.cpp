// 1195.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	int times;
	cin >> times;
	int count=0;
	while (times--)
	{
		count++;
		int index;
		cin >> index >> str;
		str.erase(index-1,1);
		cout << count << " " << str << endl;
	}
	return 0;
}

