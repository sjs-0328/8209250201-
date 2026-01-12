#include"student.h"
void Student::set_value(int n, const char* na, char s) {
	num = n;
	strcpy_s(name,sizeof(name), na);
	sex = s;
}
void Student::display() const {
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}