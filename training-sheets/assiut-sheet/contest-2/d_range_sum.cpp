#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--) {
		long long l, r;
		cin >> l >> r;

		if(l > r) {
			int temp = l;
			l = r;
			r = temp;
		}

		cout << ((r - l + 1)*(l + r))/2 << '\n';
	}

	return 0;
}
