#define _CRT_SECURE_NO_WARING
#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>


//1.  3或5的倍数
//求小于1000的自然数中所有3或5的倍数之和
/*
int main()
{
	int i = 0;
	int sum = 0;
	for (i = 3; i < 1000; i++)
	{

		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return 0;
}//最后结果：233168
*/


//2. 偶斐波那契数
//通过考虑斐波那契数列（前两个项相加）中值不超过400万的项，找到偶值项的总和
/*
int main()
{
	int i = 1;
	int j = 2;
	int tmp = 0;
	int sum = 0;

	while (i <= 4000000 && j <= 4000000)
	{

		tmp = i + j;
		i = j;
		j = tmp;
		if (i % 2 == 0 )
		{
			sum += i;
			if (j % 2 == 0)
			{
				sum += j;
			}
		}
	}
	printf("%d\n", sum);

	return 0;
} // 最后结果：4613732
*/


//3.  最大质因数
//13195的质因数是5、7、13和29。数字600851475143中最大的质因数是多少？
/*
#include <math.h>
long long is_prime(int n)
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
			return 0;
	}
	return 1;
}
int main()
{
	long long val = 0, N = 600851475143;//13195;
	if (N % 2 == 0)
	{
		N /= 2;
	}
	for (val = 3; val <= N; val += 2)
	{
		if (is_prime(val))
		{
			if (N % val == 0)
			{
				//printf("%d %d\n", N, val);
				N /= val;
			}
		}
	}
	printf("%lld\n", val-2);
	return 0;
}
*/


//4. 最大回文乘积 
//由两个位数相乘得到的最大的回文数是9009 = 91×99 。求由两个3位数相乘得到的最大的回文数
/*
#include <stdlib.h>
int palindromic(int num) {
	int store = num, back = 0;
	while (num) {
		back = num % 10 + back * 10;
		num /= 10;
	}
	if (back == store) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	int max = 0;
	for (int i = 0; i < 999; i++) {
		for (int j = 0; j < 999; j++) {
			if (palindromic(i * j) && (i * j > max)) {
				max = i * j;
			}
		}
	}
	printf("%d\n", max);
	return 0;
}
*/


//5.最小公倍数
// 2520是最小的能够被1到10整除的数，最大的能够被1到20整除的正数是多少

#include <string.h>
#include <ctype.h>
#include <math.h>
#define N 20
int gcd(int a, int b) 
{
	//if (b == 0)
	//	return a;
	//else
	//	return gcd(b, a % b);
	return (b ? gcd(b, a % b) : a);  //求最大公约数
}

int lcm(int a, int b)
{
	return a / (gcd(a, b)) * b;  //求最小公倍数
}

void solve()
{
	int i, s = 2;
	for (i = 3; i <= N; i++)
	{
		s = lcm(s, i);
	}
	printf("%d\n", s);
}

int main()
{
	solve();
	return 0;
}
