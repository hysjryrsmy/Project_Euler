#define _CRT_SECURE_NO_WARING
#include <iostream>
#include <cstring>
using namespace std;

//大整数相加 5537376230 5537376230

int n1[1005], n2[1005], ans[1005];
char s1[1005], s2[1005];

int main() {
	cin >> s1 >> s2;
	n1[0] = strlen(s1);
	for (int i = 0, j = n1[0]; i < n1[0]; i++, j--) {
		n1[j] = s1[i] - '0';
	}
	n2[0] = strlen(s2);
	for (int i = 0, j = n2[0]; i < n2[0]; i++, j--) {
		n2[j] = s2[i] - '0';
	}
	ans[0] = max(n1[0], n2[0]);
	for (int i = 1; i <= ans[0]; i++) {
		ans[i] = n1[i] + n2[i];
	}
	for (int i = 1; i <= ans[0]; i++) {
		if (ans[i] > 9) {
			//ans[i+1]++;
			ans[i + 1] += ans[i] / 10;
			ans[i] %= 10;
			if (i == ans[0]) {
				ans[0]++;
			}
		}
	}
	for (int i = ans[0]; i > 0; i--) {
		cout << ans[i];
	}
	cout << endl;
	return  0;
}


//#include <iostream>
//#include <cstring>
//using namespace std;
//#define MAX_N 52
//
//char str[MAX_N + 5] = { 0 };
//int ans[MAX_N + 5] = { 0 };
//
//int main() {
//	while (~scanf("%s", str)) {
//		int len = strlen(str);
//		if (len > ans[0]) ans[0] = len;
//		for (int i = 0; i < len; i++) {
//			ans[len - i] += str[i] - '0';
//		}
//
//		for (int i = 1; i <= ans[0]; i++) {
//			if (ans[i] < 10) continue;
//			ans[i + 1] += ans[i] / 10;
//			ans[i] %= 10;
//			ans[0] += (ans[0] == i);
//		}
//	}
//
//	for (int i = ans[0]; i > ans[0] - 10; i--) {
//		cout << ans[i];
//	}
//	cout << endl;
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//int main() {
//	char read_num[55];
//	int ans[55] = { 0 };
//	while (scanf("%s", read_num) != EOF) {
//		int len = strlen(read_num);
//		if (len > ans[0]) ans[0] = len;
//		for (int i = 0; read_num[i]; i++) {
//			ans[len - i] += read_num[i] - '0';
//		}
//		for (int i = 1; i <= ans[0]; i++) {
//			if (ans[i] >= 10) {
//				ans[i + 1] += ans[i] / 10;
//				ans[i] %= 10;
//				if (i == ans[0]) ans[0]++;
//			}
//		}
//	}
//	for (int i = ans[0]; i > ans[0] - 10; i--)
//	{
//		printf("%d", ans[i]);
//	}
//	return 0;
//}
