#include <iostream>
using namespace std;

int main()
{
	short N;
	cin >> N;

	for(short i = 1; i <= N; i++) {
		for(short j = 1; j <= N-i; j++) {
			cout << ' ';
		}
		for(short k = 1; k <= 2*i -1; k++) {
			cout << '*';
		}
		cout << '\n';
	}

	for(short i = N; i >= 1; i--) {
		for(short j = 1; j <= N-i; j++) {
			cout << ' ';
		}
		for(short k = 1; k <= 2*i -1; k++) {
			cout << '*';
		}
		cout << '\n';
	}

	return 0;
}