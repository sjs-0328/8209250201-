#include<iostream>
using namespace std;
static void getGCDandLCM(int m, int n, int& gcd, int& lcm) {
	int a = m, b = n;
	while (b != 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}
	gcd = a;
	lcm = m * n / gcd;
}
int main()
{
	int m=0, n=0, gcd=0, lcm=0;
	cin >> m >> n;
	cout << "输入两个自然数:";
	getGCDandLCM(m, n, gcd, lcm);
	cout << "最大公约数是:" << gcd << endl;
	cout << "最小公倍数是:" << lcm << endl;
	return 0;
}