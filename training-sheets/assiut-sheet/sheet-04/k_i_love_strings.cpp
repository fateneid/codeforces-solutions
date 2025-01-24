#include <iostream>
using namespace std;

int main()
{
	short n;
	cin >> n;

	while(n--) {
		string s, t;
		cin >> s >> t;

		int sl = s.size();
		int tl = t.size();
		int len = sl > tl? sl : tl;
		for(int i = 0; i < len; i++) {
			if(i < sl) {
				cout << s[i];
			}
			if(i < tl) {
				cout << t[i];
			}
		}
		cout << '\n';
	}

	return 0;
}