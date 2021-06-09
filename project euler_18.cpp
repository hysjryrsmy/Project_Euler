#define _CRT_SECURE_NO_WARING
#include <iostream>
using namespace std;

int num[20][20], ans[20][20], fin;

int main() {
	for (int i = 1; i <= 15; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> num[i][j];
		}
	}
	for (int i = 1; i <= 15; i++) {
		for (int j = 1; j <= i; j++) {
			ans[i][j] = max(ans[i - 1][j - 1], ans[i - 1][j]) + num[i][j];
			fin = max(fin, ans[i][j]);
		}
	}
	cout << fin << endl;

	for (int i = 1; i <= 15; i++) {
		for (int j = 1; j <= i; j++) {
			ans[i][j] = max(ans[i - 1][j - 1], ans[i - 1][j]) + num[i][j];
		 }
	}

	cout << ans[1][1] << endl;

	//for (int i = 1; i <= 15; i++) {
	//	for (int j = 1; j <= i; j++) {
	//		ans[i][j] = max(ans[i - 1][j - 1], ans[i - 1][j]) + num[i][j];
	//		fin = max(fin, ans[i][j]);
	//	}
	//}
	//cout << fin << endl;


	return 0;
}