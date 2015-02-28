// 1090.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string strP1,strP2;
	while (cin>>strP1>>strP2)
	{	
		if (strP1[0]=='E'&&strP2[0]=='E')
		{
			exit(0);
		}
		int p1Score=0;
		int p2Score=0;
		char p1Ch,p2Ch;
		for (size_t i=0;i<strP1.length();i++)
		{
			p1Ch=strP1[i];
			p2Ch=strP2[i];
			if (p1Ch==p2Ch)
			{
				continue;
			}

			if (p1Ch=='R')
			{
				if (p2Ch=='P')
				{
					p2Score++;
				}
				else
				{
					p1Score++;
				}
				continue;
			}
	

		if (p1Ch=='P')
		{
			if (p2Ch=='S')
			{
				p2Score++;
			}
			else
			{
				p1Score++;
			}
			continue;
		}

		if (p1Ch=='S')
		{
			if (p2Ch=='R')
			{
				p2Score++;
			}
			else
			{
				p1Score++;
			}
			continue;
		}
		 	 
	}
		cout<<"P1: "<<p1Score<<endl;
		cout<<"P2: "<<p2Score<<endl;
	}

 
	return 0;
}

