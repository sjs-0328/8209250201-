#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
static int parseHex(const char* const hexString) {
	if (hexString == nullptr)return 0;
	int res = 0;
	int len = strlen(hexString);
	for (int i = 0; i < len; i++) {
		char c = toupper(hexString[i]);
		int num;
		if (c >= '0' && c <= '9') {
			num = c - '0';
		}
		else if(c>='A'&&c<='F'){
			num = 10 + (c - 'A');
		}
		else {
			return 0;
		}
		res = res * 16 + num;
	}
	return res;
}
int main() {
	char hexStr[100]{};
	cout << "请输入16进制字符串:";
	cin >> hexStr;
	int decNum = parseHex(hexStr);
	cout << "转换后的10进制数为：" << decNum << endl;
	cout << "测试parseHex(\"A5\"):" << parseHex("A5") << endl;
	return 0;
}