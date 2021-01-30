#include<iostream>

using namespace std;
/*
 * 数素数 
 * 令Pi表示第i个素数。现任给两个正整数M <= N <= 10^4，请输出PM到PN的所有素数。
 *
 * 输⼊格式：
 * 输⼊在一行中给出M和N，其间以空格分隔。
 * 输出格式：
 * 输出从PM到PN的所有素数，每10个数字占1⾏，其间以空格分隔，但⾏末不得有多余空格。
 *
 * 输⼊样例：
 * 5 27
 * 输出样例：
 * 11 13 17 19 23 29 31 37 41 43
 * 47 53 59 61 67 71 73 79 83 89
 * 97 101 103
 */

const int MAX = 200000;
bool isPrime(int n) {
	if (n <= 1) {
		return false;
	}
	for (int i = 2; i*i <= n; i++) {
		if (n%i == 0) {
			return false;
		}
	}
	return true;

}

void getPrime(int *a, int n) {


	bool p[MAX] = { 0 };
	int num = 0;
	for (int i = 2; i < MAX; i++) {
		if ((p[i] == false) && (isPrime(i))) {
			a[num++] = i;

			if (num >= n)break;
			for (int j = i + i; j < MAX; j += i) {
				p[j] = true;

			}

		}

	}
}

int main() {
	int m, n;
	cin >> m >> n;
	int a[MAX] = { 0 };

	getPrime(a, n);

	int num = 0;

	for (int i = m; i <= n; i++) {
		cout << a[i - 1];
		num++;
		if (num % 10 != 0 && i < n)cout << " ";
		else cout << "\n";
	}

	return 0;
}