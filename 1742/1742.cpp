// 1742.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <iomanip>
#include <string>
#include <bitset>
#include <sstream>

#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int global=0;
void mPrintHex(int tmp)
{
	 std::cout << std::setbase(16);
	 cout<<"H "<<tmp<<endl;
	 std::cout << std::setbase(10);
}

void mPrintDec(int tmp)
{
	std::cout << std::setbase(10);
	cout<<"D "<<tmp<<endl;
}

void mPrintBinary(int tmp)
{
	bitset<10> tmpBitset (tmp);  
	cout<<"B "<<tmpBitset.to_string()<<endl;
}

void PutRes(int tmp)
{
	mPrintDec(tmp);
	mPrintBinary(tmp);
	mPrintHex(tmp);
}

void GetHex()
{
	cin>>setbase(16);
}

int main()
{
	vector<int>vec;
	string str;
	while (cin>>str)
	{
		//¹ıÂËÊäÈë B--2 H--16 D--10 default--10
		char Strtag=str[str.size()-1];
		string strData;
		int Data=0;
		if (Strtag=='H'&&Strtag=='B'&&Strtag=='D')
		{
			strData.append(str.begin(),str.end()-1);
		} 
		else
		{
			strData.append(str.begin(),str.end());
		}
		stringstream ss;
		ss<<strData;
		ss>>Data;
		bitset<10> tmpBitset (Data);

		//std::istream_iterator< int > intput( cin>>setbase(16));
		 
		switch (Strtag)
		{
		case 'B':
			Data=tmpBitset.to_ulong();
			PutRes(Data);
			break;
		case 'H':
		 
			break;
		case 'D':
			PutRes(Data);
			break;
		default:
			PutRes(Data);
			break;
		}


	}
	 
	return 0;
}

