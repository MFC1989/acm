// 1190.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
#include <list>
#include <iterator>     // std::front_inserter
#include <algorithm>
using namespace std;

class Init
{
public:
	Init();
	~Init();
	Init(int tmp)
	{
		this->data = tmp;
	}
	int operator()()
	{
		return data++;
	}
private:
	int data;
};

Init::Init()
{
}

Init::~Init()
{
}
char mToUper(char & ch)
{
	char res = ch + 1;
	return res;
}
int main()
{
	char str[3] = { 0x00 };
	strcpy(str, "abc");
	for_each(str, str+3, mToUper);
	return 0;
}

