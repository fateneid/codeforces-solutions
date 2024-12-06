#include <iostream>
using namespace std;

int main()
{
	short T;
	cin >> T;

	while(T--) {
		short N;
		long long fac = 1;
		cin >> N;
		for(short i = 1; i<=N; i++) {
			fac *= i;
		}
		cout << fac << '\n';
	}

	return 0;
}