// 1029.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <iostream>
#include <list>
#include <vector>
#include <string>
#include <algorithm>
#include <assert.h>
using namespace std;
//保存整段文字
list<std::string> L1;
//保存查询时输入的文字
vector<std::string> V1;
int res;
void InPutList()
{
	std::string TmpStr;
	bool inPutIsNotEnd=true;
	while (inPutIsNotEnd)
	{	
		std::cin>>TmpStr;
		if (TmpStr.compare("#")!=0)
		{
			L1.push_back(TmpStr);
		}
		else
		{

			inPutIsNotEnd=false;
		}
		assert(L1.size()<=500);
	}

}


void InPutVector()
{
	std::string TmpStr;
	bool inPutIsNotEnd=true;
	while (inPutIsNotEnd)
	{	
		std::cin>>TmpStr;
		if (TmpStr.compare("#")!=0)
		{
			V1.push_back(TmpStr);
		}
		else
		{

			inPutIsNotEnd=false;
		}
		assert(V1.size()<=10);
	}

}


int SearchStr( string & TmpStr)
{
	int Tmp=0;
	for (list<string>::reverse_iterator it=L1.rbegin();it!=L1.rend();it++)
	{
		string strForCompare=*it;
		if (TmpStr.compare(strForCompare)!=0)
		{
			Tmp++;
		}
		else
		{
			break;
		}
	}
	return Tmp;
}

bool SearchMultiStr( )
{

	for (vector<string>::iterator it=V1.begin();it!=V1.end();it++)
	{
		string StrTmp2=*it;
		list<string>::iterator it2 = find(L1.begin(),L1.end(),(string)StrTmp2);
		if (it2!=L1.end())
		{
		} 
		else
		{
			return false;
		}
	
		}
		return true;
}



int main()
{
	InPutList();
	bool ContinueJudge=true;

	while (ContinueJudge)
	{
		InPutVector();

		if (SearchMultiStr())
		{
			string s;
			s=V1[0];
			//cin>>s;
			string & strTmp=s;
			int ListSize=L1.size();
			 res=L1.size()-SearchStr(strTmp);
			if (res==0)
			{
				res=-1;
			}
		
		}
		else
		{
			res=-1;
		}
			cout<<res<<endl;
			V1.clear();
	}



	return 0;
}

