#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double a;
	cout << "请输入a的值:";
	cin >> a;
	if (a < 0) {
		cout << "输入的值不能为负，平方根无实数解。" << endl;
		return 0;
		
	}
	double xn = a;
	double xn1;
	do {
		xn1 = 0.5 * (xn + a / xn);
		if (fabs(xn1 - xn) < 1e-5)break;
		xn = xn1;

	} while (true);
	cout << a << "的平方根是:" << xn1 << endl;
	return 0;
}