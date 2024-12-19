#include <iostream>
using namespace std;

int SumOfDigits(int Num) {
	int Sum = 0;
	while(Num != 0) {
		Sum += Num % 10;
		Num /= 10;
	}
	return Sum;
}

int main()
{
	int N;
	short A, B;
	cin >> N >> A >> B;

	int Sum = 0;
	for(int i = 1; i<=N; i++) {
		int S = SumOfDigits(i);
		if(S >= A && S <= B) {
			Sum += i;
		}
	}

	cout << Sum;

	return 0;
}
