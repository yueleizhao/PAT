#include<iostream>
using namespace std;

/*
 * 输入一个数n，然后输入n个数值各不相同，再输入一个值x，
 * 输出这个值在这个数组中的下标（从0开始，若不在数组中则输出-1）。
 * 测试数据有多组，输入n(1<=n<=200)，接着输入n个数，然后输入x。
 * 对于每组输入,请输出结果。
 *
 * 样例输入
 * 1|4
 * 2|1 2 3 4
 * 3|3
 * 样例输出
 * 1|2
 */



int main() {
	int a[200] = { 0 };
	int n, x, subscript = -1;
	cin >> n;
	for (int i = 0; i < n; i++) {

		cin >> a[i];

	}

	cin >> x;

	int left = 0, right = n - 1;
	int mid;
	while (left <= right) {
		mid = (left + right) / 2;
		if (x == a[mid]) {
			subscript = mid;
			break;
		}
		else if (x < a[mid]) {
			right = mid - 1;
		}
		else if (x > a[mid]) {
			left = mid + 1;
		}

	}
	cout << (subscript > -1 ? subscript : -1);
	return 0;
}