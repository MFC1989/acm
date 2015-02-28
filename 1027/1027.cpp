// 1027.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long sum=0;

class mChar
{
public:
	char ch;
	int index;
	int chn;

	mChar(char tch,int tIndex)
	{
		ch=tch;
		index=tIndex+1;
		if ((int)ch==32)
		{
			chn=0;
		} 
		else
		{
			chn=(int)ch-64;
		}
	}

};

bool checkChar(char ch)
{
		if ((int)ch<=90&&(int)ch>=65) 
		{
			return true;
		}
		if ((int)ch==32) 
		{
		return true;
		}
		return false;
}


void mPrint(mChar tmChar)
{
	if (tmChar.ch!='@')
	{
		sum+=tmChar.index*tmChar.chn;
	}
	else
	{
		cout<<sum<<endl;
		sum=0;
	}

}

vector <mChar> mCharCollection;
int main()
{
	string str;
	vector <string> vec;

	while (getline(cin,str)&&(str!="#")&&str.length()<=255)
	{
		for (int x=0;x<str.length();x++)
		{
			if (!checkChar(str[x]))
			{
				cout<<str[x]<<endl;
				return 0;
			}
		}
		vec.push_back(str);
		str.clear();
	}

	for (int i=0;i<vec.size();i++)
	{
		string tmp=vec[i];
		for (int j=0;j<tmp.length();j++)
		{
			mCharCollection.push_back(mChar(tmp[j],j));
		}
		mCharCollection.push_back(mChar('@',0));
	}
	vec.clear();
	for_each(mCharCollection.begin(),mCharCollection.end(),mPrint);
	return 0;

}

