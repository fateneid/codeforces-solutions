#include <iostream>
using namespace std;

int main()
{
	short t;
	cin >> t;

	while(t--) {

		short n;
		int a[100];

		cin >> n;

		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}

		int s = a[0] + a[1] + 2 - 1;

		for(int i = 0; i < n; i++) {
			for(int j = i + 1; j < n ; j++) {
				if(a[i] + a[j] + j + 1 - i - 1 < s) {
					s = a[i] + a[j] + j + 1 - i - 1;
				}
			}
		}

		cout << s << '\n';

	}

	return 0;
}