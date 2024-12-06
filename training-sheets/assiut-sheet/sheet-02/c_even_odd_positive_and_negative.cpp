#include <iostream>
using namespace std;

int main()
{
	int N, X, Neg = 0, Pos = 0, Odd = 0, Even = 0;
	cin >> N;

	while(N--) {
		cin >> X;
		if(X>0) {
			Pos++;
			X%2==0? Even++ : Odd++;
		}
		else if(X<0) {
			Neg++;
			X%2==0? Even++ : Odd++;
		}
		else {
			Even++;
		}
	}

	cout << "Even: " << Even << "\nOdd: " << Odd;
	cout << "\nPositive: " << Pos << "\nNegative: "<< Neg;

	return 0;
}