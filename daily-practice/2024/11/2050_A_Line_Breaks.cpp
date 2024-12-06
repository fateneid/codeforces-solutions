#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--) {
		int n, m, counter = 0;
		cin >> n >> m;
		while(n--) {
			string s;
			cin >> s;
			if(m >= s.length()) {
				m -= s.length();
				counter++;
			}
			else {
				m = 0;
			}
		}
		cout << counter << '\n';
	}

	return 0;
}