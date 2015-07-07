#include "stdafx.h"


#include <stdio.h>
#include <string.h>
#include <algorithm>

//class mClass
//{
//public:
//	char ch;
//	int chCount;
//	mClass(char tch) : ch(tch), chCount(0)
//	{
//	}
//	mClass() :ch(' '), chCount(0)
//	{
//	}
//
//};
//
//
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n < 1 || n>1000000000)
//	{
//		exit(0);
//	}
//	char  strBuff[11] = { 0x00 };
//	mClass *collection[10];
//	for (int colCount = 0; colCount < 10; colCount++)
//	{
//		collection[colCount] = new mClass(char(colCount + 48));
//	}
//
//	char  buff[10] = { 0x00 };
//	for (register size_t i = 1; i <= n; i++)
//	{
//		itoa(i, buff, 10);
//		for (register size_t colCount = 0; colCount < 10; colCount++)
//		{
//			collection[colCount]->chCount += std::count(buff, buff + 10, collection[colCount]->ch);
//		}
//
//	}
//
//	for (register size_t i = 0; i < 10; i++)
//	{
//		printf("%d\n", collection[i]->chCount);
//	}
//	return 0;
//}


void getOneWordCount(int word, int *countBuff)
{
		while ((word / 10)>0)
		{
			
			int tmp = word % 10;
			countBuff[tmp]++;
			word /= 10;
		}

		countBuff[word]++;

}

#include <stdio.h>
int main()
{
	int pages;
	int countBuff[10] = { 0x00 };

	scanf("%d", &pages);
	for (int i = 1; i <= pages;i++)
	{
		int currentPage = i;
		while ((currentPage / 10) > 0)
		{

			int tmp = currentPage % 10;
			countBuff[tmp]++;
			currentPage /= 10;
		}

		countBuff[currentPage]++;
	}

	for (int i = 0; i < 10;i++)
	{
		printf("%d\n", countBuff[i]);
	}

}