#include <iostream>
using namespace std;

void Fibonacci(int fib1, int fib2, int N) {
	if(N == 0) {
		return;
	}
	cout << fib1 << ' ';
	Fibonacci(fib2, fib1 + fib2, N - 1);
}

int main()
{
	short N;
	cin >> N;

	Fibonacci(0, 1, N);

	return 0;
}