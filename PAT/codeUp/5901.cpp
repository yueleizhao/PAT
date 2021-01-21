#include<iostream>
#include<cstring> 
#include<string>

using namespace std;

/*
 * 回文串

 * 读入一串字符，判断是否是回文串。“回文串”是一个正读和反读都一样的字符串，比如“level”或者“noon”等等就是回文串。

 * 输入格式:
 * 一行字符串，长度不超过255。
 * 输出格式:
 * 如果是回文串，输出“YES”，否则输出“NO”。
 *
 * 样例输入:
 * 12321
 * 样例输出:
 * YES
 */




int main() {

	string str;
	char c[256];
	getline(cin, str);
	int len = str.length();
	//string str = c; 字符数组转化为字符串   
	
	//strncpy(c, str.c_str(),len)和strcpy(c, str.c_str())均不安全 
	
	strncpy_s(c, sizeof(c)/*can be ignored*/, str.c_str(), len);

	for (int j = 0; j < len / 2;) {

		if (str[j] == c[len - 1 - j]) {

		}
		else {
			cout << "NO";
			break;
		}
		j++;
		if (j == len / 2)
			cout << "YES";

	}

	return 0;
}


	