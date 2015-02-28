// 1948.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;
class stu
{
public:
	int level;
	bool  isCollege; //true为本科
	bool notGraduate; //true为未毕业
	stu(int t)
	{
		level=t;
		isCollege=false;
		notGraduate=false;
	}
	stu()
	{
		
	}
};

vector<stu>vec;
int main()
{
	int N;
	cin>>N;
	while (N)
	{
		int M;
		cin>>M;
		while(M>0)
		{
			int tmp;
			cin >>tmp;
			stu tmpStu(tmp);
			vec.push_back(tmpStu);
			M--;
		}
		for (vector<stu>::iterator it=vec.begin();it!=vec.end();it++)
		{
			if ((*it).level>=0&&(*it).level<=3)
			{
				(*it).isCollege=true;
			}
			else
			{
				(*it).isCollege=false;
			}
		}

		for (vector<stu>::iterator it=vec.begin();it!=vec.end();it++)
		{
			(*it).level+=1;
		}

		for (vector<stu>::iterator it=vec.begin();it!=vec.end();it++)
		{
			if ((*it).isCollege && (*it).level>=0&&(*it).level<=3)
			{
				(*it).notGraduate=true;
			}

			if ((!(*it).isCollege )&& (*it).level>=4&&(*it).level<=6)
			{
				(*it).notGraduate=true;
			}
		}

		int flag=0;

		for (vector<stu>::iterator it=vec.begin();it!=vec.end();it++)
		{
			if ((*it).notGraduate)
			{
				flag++;
				if (flag==1)
				{
					cout<<(*it).level;
				}
				else
				{
					cout<<" "<<(*it).level ;
				}
			} 
			else
			{
			}
		}
		cout<<endl;
		vec.clear();

		N--;
	}
	return 0;
}
