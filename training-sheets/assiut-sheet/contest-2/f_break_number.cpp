#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int max = 0;
	while(n--) {
		long long x;
		cin >> x;

		int count = 0;
		while(x % 2 == 0) {
			x /= 2;
			count++;
		}
		if(count > max) {
			max = count;
		}
	}

	cout << max;

	return 0;
}

