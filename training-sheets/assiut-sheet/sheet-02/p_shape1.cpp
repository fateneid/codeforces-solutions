#include <iostream>
using namespace std;

int main()
{
	short N;
	cin >> N;

	for(short i = N; i >= 1; i--) {
		for(short j = 1; j <= i; j++) {
			cout << '*';
		}
		cout << endl;
	}

	return 0;
}