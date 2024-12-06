#include <iostream>
using namespace std;

int main()
{
	short N;
	cin >> N;

	if(N>=2) {
		for(int i = 1; i<=N; i++) {
			if(i%2 == 0) {
				cout << i << '\n';
			}
		}
	}
	else {
		cout << -1;
	}

	return 0;
}