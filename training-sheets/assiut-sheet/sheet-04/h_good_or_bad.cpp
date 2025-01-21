#include <iostream>
using namespace std;

int main()
{
	short t;
	cin >> t;

	while(t--) {
		string s;
		cin >> s;

		bool found = false;
		for(int i = 0; i <= s.size() - 3; i++) {
			if((s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1') ||
			        (s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0')) {
				found = true;
				break;
			}
		}
		cout << (found? "Good" : "Bad") << '\n';
	}

	return 0;
}