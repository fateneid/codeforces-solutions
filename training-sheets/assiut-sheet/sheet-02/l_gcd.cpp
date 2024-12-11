#include <iostream>
#include <algorithm>
using namespace std;

int GCD(int A, int B) {
	int gcd = 1;
	for(int i = 1; i <= min(A,B); i++) {
		if(A % i == 0 && B % i == 0) {
			if(i >= gcd) {
				gcd = i;
			}
		}
	}
	return gcd;
}

int main()
{
	int A, B;
	cin >> A >> B;

	cout << GCD(A,B);

	return 0;
}