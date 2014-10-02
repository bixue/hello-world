/*************************************************************************
	> File Name: hello.h
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Thu 02 Oct 2014 10:31:28 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
class Person
{
	public:
		Person(char *name);
		void print();
	private:
		char name[100];
		int number;
};
