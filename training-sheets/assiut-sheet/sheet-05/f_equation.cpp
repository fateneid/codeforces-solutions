#include <iostream>
using namespace std;

long long power(int b, int p) {
	long long res = 1;
	while(p--) {
		res *= b;
	}
	return res;
}

long long equation(short x, short n) {
	long long s = 0;
	for(int p = 2; p <= n; p += 2) {
		s += power(x, p);
	}
	return s;
}

int main()
{
	short x, n;
	cin >> x >> n;

	cout << equation(x, n) << '\n';

	return 0;
}