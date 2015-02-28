// 1008.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <cassert>
using namespace std;

bool isLeapYear(long t)
{
	if (t%4==0)
	{
		if ((t%100==0)&&(t%400!=0))
		{
			return false;
		}
		return true;
	}
	return false;
}

int main()
{
	//�·ݺ�������ӳ�� ����ͨ��ݣ�
	long month2Day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	long year=0;
	long month=0;
	long day=0;
	while (scanf("%d",&year)!=EOF)
	{ /*
		if (year>9999)
		{
			return 1;
		}*/
		if (year== -1)
		{
			//return 1;
			break;
		}
		cin>>month;
		cin>>day;
		if(month<1&&month>2) break;
		if(year<2000) break;
		if(day<1&&day>31) break;
		if (isLeapYear(year))
		{
			if ((month==2&&day>29))
			{
				break;
			}
			
		}
		else
		{
			if (month==2&&day>28)
			{
				break;
			}
		}


		long yearRangeDays=0; //��2000���һ�쵽��ǰ��ݵ�һ��������������

		long sumDays=0; 
		//�ó�����ȶ��·ݵ�����
		if (isLeapYear(year))
		{
			month2Day[2]=29;
		}
		//�ó���2000���һ�쵽��ǰ��ݵ�һ��������������
		for (long i=2000;(i<=year-1);i++)
		{
			if (isLeapYear(i))
			{
				if (year==2000)
				{
					sumDays=0;
				}
				else
				{
					sumDays+=366;
				}
			}
			else
			{
				sumDays+=365;
			}
		}
		yearRangeDays=sumDays;
		for (long j=1;j<=(month-1);j++)
		{	
			sumDays+=month2Day[j];
		}
		sumDays+=(day-1);
		cout<<sumDays<<endl;
		cout<<sumDays-yearRangeDays+1<<endl;

	}
	
	return 0;
	
}

