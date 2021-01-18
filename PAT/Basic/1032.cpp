#include<iostream>
#include<iostream>
#include<stdlib.h>

using namespace std;
/*
 * 为了用事实说明挖掘机技术到底哪家强，PAT 组织了一场挖掘机技能大赛。现请你根据比赛结果统计出技术最强的那个学校。
 * 输入在第 1 行给出不超过 10^5 的正整数 N，即参赛人数。随后 N 行，每行给出一位参赛者的信息和成绩，
 * 包括其所代表的学校的编号（从 1 开始连续编号）、及其比赛成绩（百分制），中间以空格分隔。
 */



int main() {


	int n, info, grade;

	cin >> n;


	int* a = NULL;
	a = (int*)malloc(sizeof(int)*(n + 1));
	for (int i = 0; i < n; i++) {
		cin >> info >> grade;
		a[info] += grade;

	}


	int max = a[1];
	int subscript = 1;
	for (int i = 2; i <= n; i++) {
		if (max < a[i]) {
			max = a[i];
			subscript = i;

		}

	}
	cout << subscript << ' ' << max;

	return 0;
}