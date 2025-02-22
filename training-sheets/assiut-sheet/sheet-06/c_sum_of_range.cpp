#include <iostream>
using namespace std;

long long Sum(long long A, long long B) {
	return (B * (B + 1)) / 2 - (A * (A - 1)) / 2;
}

long long SumEven(long long A, long long B) {
	if(A % 2 != 0) A++;
	if(B % 2 != 0) B--;
	return (B * (B + 2)) / 4 - (A * (A - 2)) / 4;
}

long long SumOdd(long long A, long long B) {
	if(A % 2 == 0) A++;
	if(B % 2 == 0) B--;
	return ((B + 1) * (B + 1)) / 4 - ((A - 1) * (A - 1)) / 4;
}

int main()
{
	long long A, B;
	cin >> A >> B;

	if (A > B) swap(A, B);
	cout << Sum(A, B) << '\n' << SumEven(A, B) << '\n' << SumOdd(A, B);

	return 0;
}