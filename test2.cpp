#include<iostream>
using namespace std;
const double Pi = 3.14;
int main()
{
	double r, h;
	cout << "请输入圆锥的半径:";
	cin >> r;
	cout << "请输入圆锥的高:";
	cin >> h;
	cout << "圆锥的体积是: " << Pi * r * r * h / 3 << endl;
	return 0;
}
