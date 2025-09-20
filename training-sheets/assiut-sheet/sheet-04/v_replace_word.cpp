#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0);

	string s;
	cin >> s;

	short p ;
	while ((p = s.find("EGYPT")) != std::string::npos) s.replace(p, 5, " ");

	cout << s;

	return 0;
}