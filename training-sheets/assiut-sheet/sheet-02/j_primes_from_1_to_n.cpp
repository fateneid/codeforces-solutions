#include <iostream>
using namespace std;

bool IsPrime(int num) {
	for(int i = 2; i<=num/2; i++) {
		if(num%i == 0) {
			return false;
		}
	}
	return true;
}

int main()
{
	int N;
	cin >> N;

	for(int i = 2; i<=N; i++) {
		if(IsPrime(i)) {
			cout << i << " ";
		}
	}

	return 0;
}