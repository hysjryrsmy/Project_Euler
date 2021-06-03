
#define _CRT_SECURE_NO_WARING
#include <iostream>
using namespace std;

//第36题 ：双进制回文数
//十进制数585 = 10010010012（二进制表示），因此它在这两种进制下都是回文数。
//找出所有小于一百万，且在十进制和二进制下均回文的数，并求它们的和。
//请注意，无论在哪种进制下，回文数均不考虑前导零。）

int func(int x, int n) {
	int t = 0, raw = x;
	while (x) {
		t = t * n + x % n;
		x /= n;
	}
	return t == raw;
}

int main()
{
	int ans = 0;
	for (int i = 1; i < 1000000; i++) {
		if (func(i, 10) && func(i, 2)) {
			ans += i;
		}
	}
	cout << ans << endl;

	return 0;
}