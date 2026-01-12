#include<iostream>
using namespace std;
class Cuboid {
public:
	void input() {
		cout << "输入长方柱的长宽高：";
		cin >> length >> width >> height;
	}
	double calculate() {
		return length * width * height;
	}
	void output() {
		cout << "长方柱体积:" << calculate() << endl;
	}
private:
	double length;
	double width;
	double height;
};
int main() {
	Cuboid c1, c2, c3;
	cout << "第一个长方柱:" << endl;
	c1.input();
	c1.output();
	cout << "\n第二个长方柱:" << endl;
	c2.input();
		c2.output();
		cout << "\n第三个长方柱:" << endl;
		c3.input();
		c3.output();
		return 0;
}