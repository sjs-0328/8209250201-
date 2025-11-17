#include<iostream>
using namespace std;
int gcd(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
int main() {
	int a, b;
	cout << "请输入两个整数:";
	cin >> a >> b;
	int g = gcd(a, b);
	int l = a * b / g;
	cout << "最大公约数为:" << g << endl;
	cout << "最小公倍数为:" << l << endl;
	return 0;
}