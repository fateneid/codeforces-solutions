#include <iostream>
using namespace std;

bool IsPrime(int N) {
	if(N < 2) return false;
	if(N == 2 || N == 3) return true;
	if(N % 2 == 0) return false;

	for(int i = 3; i * i <= N; i += 2) {
		if(N % i == 0) {
			return false;
		}
	}
	return true;
}

int main()
{
	int T;
	cin >> T;

	while(T--) {
		int N;
		cin >> N;
		cout << (IsPrime(N)? "YES" : "NO") << '\n';
	}

	return 0;
}