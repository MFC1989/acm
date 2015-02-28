// 1182.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <bitset>
#include <iostream>
using namespace std;

string trimStr(bitset<8u> binaryIP)
{
	string ip=binaryIP.to_string<char, char_traits<char>, allocator<char> >( );
	if (ip!="00000000")
	{
		std::size_t pos1=ip.find_first_of('1');
		ip.erase(0,pos1);
		return ip;
	}
	else
	{
		return "0";
	}
}

int main()
{
	int a,b,c,d;
	char dot1,dot2,dot3;
	
	while (cin>>a>>dot1>>b>>dot2>>c>>dot3>>d)
	{
		if (a<0||b<0||c<0||d<0) return 1;
		if (a>255||b>255||c>255||d>255) return 1;
		if(dot1!='.'||dot2!='.'||dot3!='.' ) return 1;
		bitset<8u> ip1(a);
		bitset<8u> ip2(b);
		bitset<8u> ip3(c);
		bitset<8u> ip4(d);

		cout<<trimStr(ip1)<<"."<<trimStr(ip2)<<"."<<trimStr(ip3)<<"."<<trimStr(ip4)<<endl;

	}

	return 0;
}

