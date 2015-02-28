// 1601.cpp : Defines the entry polong long for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <utility>
#include <functional>
#include <vector>
#include <string>
#include <set>
using namespace std;

class mClass
{
public:
	long long num;
	long long count;
	mClass(long long tnum)
	{
		num=tnum;
		count=0;	 
	}
	mClass()
	{
		num = 0;
		count = 0;
	}
	bool operator==(const mClass &t1)const
	{
		return (this->num == t1.num&&this->count==t1.count);
	}
	bool   operator <  (const   mClass&   rhs   )  const   //ÉýÐòÅÅÐòÊ±±ØÐëÐ´µÄº¯Êý
	{  
		return   num   <   rhs.num;
	}

};

vector<mClass> vec;
vector<long long>VecInt;
vector<string> res; 

void CalcCount(mClass & tClass)
{
	tClass.count=std::count(VecInt.begin(),VecInt.end(),tClass.num);
}
void mPrint( mClass classt)
{
	 cout<<classt.num<<" "<<classt.count<<endl;
}
bool compare1( const mClass & xClass,const mClass & yClass)
{
	return xClass<yClass;
}
int main()
{
	long long n;
	long long flag=0;
	
	mClass tmp;
	set<mClass> mSet;
	while (cin >> n)
	{
		 
	}
	return 0;
}

