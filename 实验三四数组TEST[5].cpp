#include<iostream>
#include<cstring>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (len1 == 0 || len2 < len1) {
		return -1;
	}
	for (int i = 0; i <= len2 - len1; i++) {
		int j = 0;
		while (j < len1 && s2[i + j] == s1[j]) {
			j++;

		}
		if (j == len1) {
			return i;
		}
	}
	return -1;

}
int main() {
	const int MAX_LEN = 100;
	char s1[MAX_LEN], s2[MAX_LEN];
	cout << "Enter the first string:";
	cin >> s1;
	cin.ignore();
	cout << "Enter the second string:";
	cin.getline(s2, MAX_LEN);
	int pos = indexOf(s1, s2);
	cout << "indexOf(\"" << s1 << "\",\"" << s2 << "\")is" << pos << endl;
	return 0;

}