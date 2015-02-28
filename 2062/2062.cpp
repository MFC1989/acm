#include "stdafx.h"

#include <vector>
#include <string>
#include <algorithm> 
#include <iostream>
using namespace std;

vector <string>vStr;
int main()
{
	int T;
	cin>>T;
	if (T<1||T>1000)
	{
		return 0;
	}
	while (T>0)
	{
		int n;
		cin>>n;
		if (n<1||n>1000)
		{
			return 0;
		}
		string str,str2;
		cin>>str;
		if (str.length()!=n)
		{
			return 0;
		}
		str2=str;
		transform(str.begin(),str.end(),str2.begin(),::toupper);
		if (str!=str2)
		{
			return 1;
		}
		
		for (int i=0;i<str.length();i++)
		{
			if (str[i]<='E')
			{
				str[i]+=21;
			}
			else
			{
				str[i]-=5;
			}
		}
		
		vStr.push_back(str);
		 
		T--;
	}

	for (vector<string>::iterator it=vStr.begin();it!=vStr.end();it++)
	{
		cout<<*it<<endl;
	}
	
	return 0;
}

