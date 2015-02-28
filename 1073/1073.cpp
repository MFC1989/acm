// 1073.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


struct stu
{
	string num;
	int score;
	stu(string tNum,int tScore)
	{
		num=tNum;
		score=tScore;
	}
	stu()
	{
		num="";
		score=0;
	}
};


bool mCmp(const stu &record1,const stu &record2)
{
	if (record1.score>record2.score)
	{
		return true;
	}
	return false;
}

int main()
{
	int times;
	cin>>times;
	int caseFlag=1;

	while (times--)
	{
		int numofStu;
		cin>>numofStu;
		if (numofStu<1||numofStu>100)
		{
			exit(0);
		}

		vector<stu>resCollection;

		stu stuInput;
		while (numofStu--)
		{
			cin>>stuInput.num>>stuInput.score;
			if (stuInput.num.length()>10||stuInput.score<0)
			{
				exit(0);
			}
			resCollection.push_back(stuInput);	
		}

		stable_sort(resCollection.begin(),resCollection.end(),mCmp);
		cout<<"Case "<<caseFlag<<":"<<endl;
		for (int i=0;i<resCollection.size();i++)
		{
			cout<<i+1<<" "<<resCollection[i].num<<" "<<resCollection[i].score<<endl;
		}
		resCollection.clear();
		caseFlag++;
	}
	cout<<endl;
	return 0;

}