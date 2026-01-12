#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<cstring>
using namespace std;
class Student {
public:
	Student(){}
	Student(int n, const char* na, char s) {
		num = n;
		strcpy_s(name,sizeof(name), na);
		sex = s;
	}
	void set_value(int n, const char* na, char s); 
	void display() const;
private:
	int num=0;
	char name[200] = { 0 };
		char sex='\0';
};
#endif