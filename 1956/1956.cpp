// 1956.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void mPrint(const string & Res)
{
	cout<<Res<<endl;
}
int main()
{
	string strChar,strInt;
	string res;
	vector<string>vecRes;
	while ( cin>>strChar>>strInt)
	{
		int charSize=strChar.size();
		int intSize=strInt.size();

		if (charSize>intSize)
		{
			int i=0;
			for (i=0;i<intSize;i++)
			{
				res.push_back(strChar[i]);
				res.push_back(strInt[i]);
			}
			for (i=intSize;i<charSize;i++)
			{
				res.push_back(strChar[i]);
			}
		} 
		else
		{
			int i=0;
			for (i=0;i<charSize;i++)
			{
				res.push_back(strChar[i]);
				res.push_back(strInt[i]);
			}
			for (i=charSize;i<intSize;i++)
			{
				res.push_back(strInt[i]);
			}
		}
		
		vecRes.push_back(res);
		res.clear();

	}
	
	
	for_each(vecRes.begin(),vecRes.end(),mPrint);
	return 0;
}

