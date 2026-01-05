#include<iostream>
using namespace std;
static int gcd(int m, int n)
{
	while (n != 0) {
		int temp = m % n;
		m = n;
		n = temp;
	}
	return m;
}
int main()
{
	int m,n;
	cout << "请输入两个自然数";
	cin >> m >> n;
	int gcd_result= gcd(m, n);
	cout << "m和n的最大公约数是:" << gcd_result << endl;
	return 0;

}