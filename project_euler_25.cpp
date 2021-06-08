#define _CRT_SECURE_NO_WARING
#include <iostream>
using namespace std;

//1000位斐波那契数
//斐波那契数列是按如下递归定义的数列：
//F n = F n -1 + F n -2，其中 F 1 = 1 且 F 2 = 1。
//因此斐波那契数列的前12项分别是：
//F 1 = 1
//F 2 = 1
//F 3 = 2
//F 4 = 3
//F 5 = 5
//F 6 = 8
//F 7 = 13
//F 8 = 21
//F 9 = 34
//F 10 = 55
//F 11 = 89
//F 12 = 144
//第一个包含三位数字的是第12项 。
//在斐波那契数列中，第一个包含1000位数字的是第几项？
//

void func(int* n1, int* n2) {
	n2[0] = n1[0];
	for (int i = 1; i <= n2[0]; i++) {
		n2[i] += n1[i];
		if (n2[i] > 9) {
			n2[i + 1]++;
			n2[i] -= 10;
			if (i == n2[0]) {
				n2[0]++;
			}
		}
	}
}

int main() {
	int num[2][1005] = { {1,1},{1,1} }, a = 0, b = 1;
	//a -> 后一个数字  ；b -> 前一个数字
	for (int i = 3; 1; i++) {
		func(num[a], num[b]);
		if (num[b][0] == 1000) {
			cout << i << endl;
			break;
		}
		swap(a, b);
	}

	return 0;
}