#include<iostream>
using namespace std;
int main()
{
	int num = 2;
	int total_num = 0;
	int days = 0;
	while (num <= 100) {
		total_num += num;
		num *= 2;
		days++;
	}
	double total_cost = total_num * 0.8;
	double average_cost = total_cost / days;
	cout << "每天平均花费:" << average_cost << endl;
	return 0;
}