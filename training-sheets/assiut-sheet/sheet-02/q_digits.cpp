#include <iostream>
using namespace std;

int main()
{
	short t;
	int n;
	cin >> t;

	while (t--) {
		cin >> n;
		if (n == 0) {
			cout << 0;
		} else {
			while (n != 0) {
				cout << n % 10 << ' ';
				n /= 10;
			}
		}
		cout << endl;
	}

	return 0;
}
