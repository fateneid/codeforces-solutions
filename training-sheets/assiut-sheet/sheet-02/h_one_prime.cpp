#include <iostream>
using namespace std;

int main()
{
	int X;
	cin >> X;

	bool IsPrime = true;
	if(X >= 2) {
		for(int i = 2; i < X; i++) {
			if(X % i == 0) {
				IsPrime = false;
				break;
			}
		}
	}
	else {
		IsPrime = false;
	}

	cout << (IsPrime? "YES":"NO");

	return 0;
}