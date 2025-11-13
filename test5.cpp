#include<iostream>
using namespace std;
int main()
{
	double F, C;
	cout << "请输入华氏温度:";
	cin >> F;
	cout << "请输入摄氏温度:";
	cin >> C;
	cout << "转换后的摄氏温度为:" << (F - 32) * 5/9 << endl;
	return 0;
}