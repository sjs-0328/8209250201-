#include<iostream>
using namespace std;
class Student {
private:
	int id;
	int score;
public:
	void setData(int i, int s) {
		id = i;
		score = s;
	}
	int getId()const {
		return id;
	}
	int getScore()const {
		return score;
	}
};
void max(Student* stuArr, int n) {
	int maxScore = stuArr[0].getScore();
	int maxId = stuArr[0].getId();
	for (int i = 1; i < n; i++) {
		maxScore = stuArr[i].getScore();
		maxId = stuArr[i].getId();

	}
	cout << "最高成绩为:" << maxScore << endl;
	cout << "对应学号为:" << maxId << endl;
}
int main() {
	Student stu[5];
	stu[0].setData(1, 85);
	stu[1].setData(2, 86); 
	stu[2].setData(3, 87);
	stu[3].setData(4, 90);
	stu[4].setData(5, 100);
	max(stu, 5);
	return 0;
}