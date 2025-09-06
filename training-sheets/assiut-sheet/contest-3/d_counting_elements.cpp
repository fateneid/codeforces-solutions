#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	short n, a[1001], count = 0;
	cin >> n;

	for (int i = 0; i < n; i++) cin >> a[i];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i] + 1 == a[j]) {
				count++;
				break;
			}
		}
	}

	cout << count;

	return 0;
}
