#include <iostream>
using namespace std;

int main()
{
	char S;
	short N, X;
	cin >> S >> N;

	while(N--) {
		cin >> X;
		for(short i = 1; i <= X; i++) {
			cout << S;
		}
		cout << endl;
	}

	return 0;
}