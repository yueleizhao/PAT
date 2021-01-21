#include<iostream>
using namespace std;

/*
 * D进制的A+B
 * 输入两个非负 10 进制整数 A 和 B (<=2^30-1)，输出 A+B 的 D (1<D≤10)进制数。
 *
 * 输入格式：
 * 输入在一行中依次给出 3 个整数 A、B 和 D。
 * 输出格式：
 * 输出 A+B 的 D 进制数。
 *
 * 输入样例：
 * 123 456 8
 * 输出样例：
 * 1103
 */

int main() {
	unsigned int a, b, c;
	int D;
	cin >> a >> b >> D;
	c = a + b;

	if (c == 0) {
		cout << 0;
		return 0;

	}
	
	int arr[40] = { 0 };
	int i = 0;
	while (c) {
		arr[i++] = c % D;
		c = c / D;
	}

	for (; i > 0; i--) {
		cout << arr[i - 1];

	}

	return 0;
}

