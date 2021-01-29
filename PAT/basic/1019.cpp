#include<algorithm> 
#include<iostream>
using namespace std;
/*
 * 数字黑洞
 *
 * 给定任一个各位数字不完全相同的 4 位正整数，如果我们先把 4 个数字按非递增排序，
 * 再按非递减排序，然后用第 1 个数字减第 2 个数字，将得到一个新的数字。
 * 一直重复这样做，我们很快会停在有“数字黑洞”之称的 6174，这个神奇的数字也叫 Kaprekar 常数。
 * 例如，我们从6767开始，将得到
 * 7766 - 6677 = 1089
 * 9810 - 0189 = 9621
 * 9621 - 1269 = 8352
 * 8532 - 2358 = 6174
 * 7641 - 1467 = 6174
 * ... ...

 * 输⼊格式：
 * 输入给出一个 (0,10^4)区间内的正整数 N。
 * 输出格式：
 * 如果 N 的 4 位数字全相等，则在一行内输出 N - N = 0000；
 * 否则将计算的每一步在一行内输出，直到 6174 作为差出现，输出格式见样例。
 * 注意每个数字按 4 位数格式输出。

 * 输入样例 1：
 * 6767
 * 输出样例 1：
 * 7766 - 6677 = 1089
 * 9810 - 0189 = 9621
 * 9621 - 1269 = 8352
 * 8532 - 2358 = 6174

 * 输入样例 2：
 * 2222
 * 输出样例 2：
 * 2222 - 2222 = 0000
 */



int a[4] = { 0 };
/*
 * 将数组转化为N
 */
int getN(int a[]) {
	int n = 0, temp = 1000;

	for (int i = 3; i >= 0; i--) {
		if (temp > 0) {
			n = n + a[i] * temp;

		}
		else {
			n = n + a[i] * 1;
		}

		temp = temp / 10;
	}
	return n;
}

/*
 * 将N转化数组
 */

void getArray(int n) {
	int i = 0;
	while (n) {
		a[i++] = n % 10;
		n = n / 10;
	}

}

int main() {

	int n;
	cin >> n;

	/*
	 * 判断是否各个位上的数都相同
	 */

	getArray(n);

	for (int i = 1; i < 4; i++) {
		if (a[i - 1] == a[i]) {

		}
		else break;
		if (i == 3) {
			printf("%04d - %04d = %04d\n", n, n, n - n);
			return 0;
		}
	}

	/*
	 * 判断初始N是否为6174
	 */

	if (n == 6174) {

		printf("%04d - %04d = %04d\n", 7641, 1467, 6174);
		return 0;

	}

	int max, min;

	while (1) {
		if (n == 6174) {

			return 0;

		}
		else {

			sort(a, a + 4);
			max = getN(a);
			sort(a, a + 4, greater<int>());
			min = getN(a);
			n = max - min;
			getArray(n);

			printf("%04d - %04d = %04d\n", max, min, n);
		}

	}

}