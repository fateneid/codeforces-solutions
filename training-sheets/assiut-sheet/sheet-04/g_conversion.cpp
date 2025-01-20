#include <iostream>
using namespace std;

int main()
{
	string s;
	cin >> s;

	for(int i = 0; i < s.size(); i++) {
		s[i] += (s[i] == ',' ? -12 : s[i] >= 65 && s[i] <= 90? 32 : -32);
	}

	cout << s;

	return 0;
}