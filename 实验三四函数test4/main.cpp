#include<iostream>
#include"mytriangle.h"
using namespace std;
int main() {
	double a = 0, b = 0, c = 0;
	cin >> a >> b >> c;
	if (is_valid(a, b, c)) {
		double tri_area = area(a, b, c);
		cout << "三角形面积为:" << tri_area << endl;
	}
	else {
		cout << "无法构成三角形" << endl;
	}
	return 0;
}