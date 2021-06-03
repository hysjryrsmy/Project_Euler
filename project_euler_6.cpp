
#define _CRT_SECURE_NO_WARING
#include <iostream>
using namespace std;

//第6题

int main() {
	int psum = 0, sum = 0;
	for (int i = 1; i <= 100; i++) {
		psum += i * i;
		sum += i;
	}
	cout << sum * sum - psum << endl;

	return 0;
}