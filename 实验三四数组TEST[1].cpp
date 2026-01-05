#include<iostream>
using namespace std;
int main() {
	const int TOTAL = 10;
	int nums[TOTAL];
	int distinct[TOTAL];
	int distinctCount = 0;
	cout << "enter ten numbers:";
	for (int i = 0; i < TOTAL; i++) {
		cin >> nums[i];
		bool isExist = false;
		for (int j = 0; j < distinctCount; j++) {
			if (nums[i] == distinct[j]) {
				isExist = true;
				break;
			}
		}
		if (!isExist) {
			distinct[distinctCount++] = nums[i];
		}
	}
	cout << "the distinct numbers are:";
	for (int i = 0; i < distinctCount; i++) {
		cout << distinct[i];

	}
	cout << endl;
	return 0;
}