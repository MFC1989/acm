// 1023.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool compareACM(string i,string j)
{
	return ((int)count(i.begin(),i.end(),'A'))<((int)count(j.begin(),j.end(),'A'));
};

void printStr(string str)
{
	cout<<str<<endl;
}
int main()
{
	vector<string>vec;
	string tmp;
	while (cin>>tmp)
	{
		vec.push_back(tmp);	
	}

	stable_sort(vec.begin(),vec.end(),compareACM);
	for_each(vec.begin(),vec.end(),printStr);
	return 0;
}

