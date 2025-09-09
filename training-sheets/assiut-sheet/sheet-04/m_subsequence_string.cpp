#include <iostream>
using namespace std;

int main()
{
	string s1, s2 = "hello";
	short len = 0;
	cin >> s1;

	for (int i = 0; i < s1.length(); i++) {
		if (s1[i] == s2[len]) len++;
		if (len == 5) break;
	}

	cout << (len == 5 ? "YES" : "NO");

	return 0;
}