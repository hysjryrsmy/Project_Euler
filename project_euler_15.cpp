#define _CRT_SECURE_NO_WARING
#include <iostream>
using namespace std;

long long num[25][25];

int main() {
	for (int i = 1; i <= 21; i++) {
		for (int j = 1; j <= 21; j++) {
			if (i == 1 && j == 1) {
				num[1][1] = 1;
			}
			else {
				num[i][j] = num[i - 1][j] + num[i][j - 1];
			}
		}
	}
	cout << num[21][21] << endl;

	/*long long ans = 1;
	for (int i = 40, j = 1; i > 20; i--, j++) {
		ans *= i;
		ans /= j;
	}
	cout << ans << endl;*/

	return 0;
}