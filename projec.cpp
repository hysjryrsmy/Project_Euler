#define _CRT_SECURE_NO_WARING
#include <iostream>
using namespace std;

//第一题
//int main()
//{
//	int ans = 0;
//	for (int i = 1; i < 1000; i++) {
//		if (i % 3 == 0 || i % 5 == 0) {
//			ans += i;
//		}
//	}
//	cout << ans << endl;
//	return 0;   //时间复杂度O(n)
//}
//另一种方法：等差数列求和（首项+末项）*项数/2
//可以用3的倍数和+5的倍数和-15的倍数和

//int main()
//{
//	int t3 = (3 + 999) * 333 / 2;
//	int t5 = (5 + 995) * 199 / 2;
//	int t15 = (15 + 990) * 66 / 2;
//	cout << t3 + t5 - t15 << endl;
//	return 0;     //时间复杂度O(1)
//}
//时间复杂度的作用：当数据规模扩大一倍时，算法的时间如何扩大，O(n)扩大一倍 , O(1)不扩大
// O(1) 常数；  O(logn) 对数；   O(n) 线性；  O(nlogn) 线性对数（快速排序）；   O(n的平方)
//O(n)不一定比O(n的平方）快，不过大多数还是要快的




//第二题
//int num[4000005], ans; //4百万+5 ：是为了防止数据越界
//                       //全局区定义变量 ——> 自动清0，不需要初始化
//int main()
//{
//	num[0] = 1, num[1] = 2, ans = 2;
//	for (int i = 2; 1; i++){
//		num[i] = num[i - 1] + num[i - 2];
//		if (num[i] > 4000000) {
//			break;
//		}
//		if (num[i] % 2 == 0) {
//			ans += num[i];
//		}
//	}
//	cout << ans << endl;
//	return 0;
//}

//另一种方法
//int main() {
//	int a = 1, b = 2, ans = 0;
//	while (b < 4000000){
//		if (b % 2 == 0) {
//			ans += b;
//		}
//		b += a;
//		a = b - a; //同步向后移动
//	}
//	cout << ans << endl;
//	return 0;
//}

//空间复杂度：在数据规模扩大一倍时  算法所消耗的额外内存空间如何扩大
// 数据规模扩大一倍，O(n)成线性扩大一倍，O(1)不变
//O(1) 常数；   O(n) 线性；   O(n的平方) ; O(n的三次方）




//第四题
int func(int x) {
	int t = 0, raw = x;
	while (x) {
		t = t * 10 + x % 10;
		x /= 10;
	}
	return t == raw;
}

int main() {
	int ans = 0;
	for (int i = 100; i < 1000; i++) {
		for (int j = i; j < 1000; j++) {
			if (func(i * j)) {
				ans = max(ans, i * j);
			}
		}
	}
	cout << ans << endl;
	return 0;
}