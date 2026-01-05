#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
static void count(const char s[], int counts[]) {
	for (int i = 0; i < 26; i++) {
		counts[i] = 0;
	}
	int len = strlen(s);
	for (int i = 0; i < len; i++) {
		if (isalpha(s[i])) {
			char lowerChar = tolower(s[i]);
			int index = lowerChar - 'a';
			counts[index]++;

		}
	}
}
int main() {
	const int MAX_LEN = 100;
	char s[MAX_LEN];
	int counts[26];
	cout << "Enter a string:";
	cin.getline(s, MAX_LEN);
	count(s, counts);
	for (int i = 0; i < 26; i++) {
		if (counts[i] != 0) {
			cout << static_cast<char>('a' + i) << ":" << counts[i] << (counts[i] == 1 ? "time" : "times") << endl;
		}
	}
	return 0;

}