#include<iostream>
using namespace std;
class Point {
private:
	int x;
	int y;
public:
	Point():x(60),y(80){}
	void setPoint(int i, int j) {
		x = 60 + i;
		y = 80 + j;
	}
	void output() {
		cout << "当前坐标:(" << x << ","<<y << ")" << endl;
	}
};
int main() {
	Point p;
	cout << "初始化后:";
	p.output();
	p.setPoint(10, 20);
	cout << "修改后:";
	p.output();
	return 0;
}