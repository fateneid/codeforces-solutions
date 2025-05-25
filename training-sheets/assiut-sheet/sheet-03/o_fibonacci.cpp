#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	long long fib[50];
	for(int i = 1; i <= n; i++) {
		if(i < 3) fib[i] = i - 1;
		if(i >= 3) fib[i] = fib[i - 1] + fib[i - 2];
	}

	cout << fib[n];

	return 0;
}