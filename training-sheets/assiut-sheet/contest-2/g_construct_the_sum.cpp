#include <iostream>
using namespace std;

int main()
{
	short t;
	cin >> t;

	while(t--) {
		long long n, s;
		cin >> n >> s;

		if(n * (n + 1) / 2 < s) {
			cout << -1;
		}
		else {
			long long sum = 0;
			for(int i = n; i >= 1; i--) {
				if(sum + i <= s) {
					sum += i;
					cout << i << ' ';
					if(sum == s) {
						break;
					}
				}
			}
		}
		cout << '\n';
	}

	return 0;
}
