#include <iostream>
using namespace std;

int main()
{
	short n;
	cin >> n;

	for(short i = 1; i <= n; i++) {
		for(short j = 1; j <= n; j++) {
			cout << (j == i? (j == n - j + 1? 'X' : '\\') : (j == n - i + 1? '/' : '*'));
		}
		cout << '\n';
	}

	return 0;
}
