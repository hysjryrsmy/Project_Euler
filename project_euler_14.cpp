
#define _CRT_SECURE_NO_WARING
#include <iostream>
using namespace std;

//考虑如下定义在正整数集上的迭代规则：
//n → n / 2 (n 若为偶数)
//n → 3n + 1 (n若为奇数)
//
//从13开始，可以迭代生成如下的序列：
//
//13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
//可以看出这个序列（从13开始到1结束）共有10项。尽管还未被证明，但普遍认为，从任何数开始最终都能回到1（这被称为“考拉兹猜想”）。
//在小于一百万的数中，从哪个数开始迭代生成的序列最长？
//注： 在迭代过程中允许出现超过一百万的项。

/*int func(long long x) {
	if (x == 1) {
		return 1;
	}
	if (x % 2 == 0) {
		return func(x / 2) + 1;
	}
	else {
		return func(3 * x + 1) + 1;
	}
} */ //这个方法花的时间有点长

//优化方法

int num[10000005];
int func(long long x) {
	if (x == 1) {
		return 1;
	}
	if (x < 10000000 && num[x] != 0) {
		return num[x];
	}
	int t;
	if (x % 2 == 0) {
		t = func(x / 2) + 1;
	}
	else {
		t = func(3 * x + 1) + 1;
	}
	if (x < 10000000) {
		num[x] = t;
	}
	return t;
}

int main() {
	int ans = 1, cnt = 1;
	for (int i = 2; i < 1000000; i++) {
		int t = func(i);
		if (t > cnt) {
			ans = i;
			cnt = t;
		}
	}
	cout << ans << " " << cnt << endl;
	return 0;
}





//斐波那契数列（递归的方法）:效率太低，跟递推相比
//long long func(int n){
//	if (n == 1 || n == 2) {
//		return 1;
//	}
//	return func(n - 1) + func(n - 2);
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	cout << func(n) << endl;
//
//	return 0;
//}

//可以记忆化，采用记忆数组          递归 + 记忆化 ≈ 递推
/*
long long num[55];

long long func(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	if (num[n] != 0) {
		return num[n];
	}
	return num[n] = func(n - 1) + func(n - 2);
}

int main()
{
	int n;
	cin >> n;
	cout << func(n) << endl;
	return 0;
}
*/



//斐波那契数列（递推的方法）
/*
int main()
{
	int n;
	cin >> n;
	int num[55] = { 0,1,1 };
	for (int i = 3; i <= n; i++)
	{
		num[i] = num[i - 1] + num[i - 2];
	}
	cout << num[n] << endl;
	return 0;
}
*/
