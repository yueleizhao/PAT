#include<iostream>
#include<stdlib.h>

using namespace std;



/*
 * 挖掘机技术哪家强
 * 为了用事实说明挖掘机技术到底哪家强，PAT 组织了一场挖掘机技能大赛。现请你根据比赛结果统计出技术最强的那个学校。
 * 输入在第 1 行给出不超过 10^5 的正整数 N，即参赛人数。随后 N 行，每行给出一位参赛者的信息和成绩，
 * 包括其所代表的学校的编号（从 1 开始连续编号）、及其比赛成绩（百分制），中间以空格分隔。
 *
 * 输?格式：
 * 输?在第1行给出不超过10^5的正整数N，即参赛?人数。随后N行，每?给出?位参赛者的信息和成绩，
 * 包括其所代表的学校的编号（从1开始连续编号）、及其?赛成绩（百分制），中间以空格分隔。
 * 输出格式：
 * 在?行中给出总得分最高的学校的编号、及其总分，中间以空格分隔。题?保证答案唯一，没有并列。
 *
 * 输入样例：
 * 6
 * 3 65
 * 2 80
 * 1 100
 * 2 70
 * 3 40
 * 3 0
 * 输出样例：
 * 2 150
 */

int main() {

	int n, info, grade;

	cin >> n;

	int* a = NULL;
	a = (int*)malloc(sizeof(int)*(n + 1));
	for (int i = 0; i < n; i++) {
		a[i] = 0;

	}

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

