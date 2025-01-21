#include <iostream>
using namespace std;

int main()
{
	string s;
	cin >> s;

	bool flag = true;
	for(int i = 0; i <= s.size() / 2; i++) {
		if(s[i] != s[s.size() - 1 - i]) {
			flag = false;
		}
	}

	cout << (flag? "YES" : "NO");

	return 0;
}