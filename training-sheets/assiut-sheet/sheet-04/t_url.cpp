#include <bits/stdc++.h>
using namespace std;

int main()
{
	string url;
	cin >> url;

	int pos = url.find("?username") + 1;

	for (int i = pos; i < url.size(); i++) {
		if (url[i] == '=') cout << ": ";
		else if (url[i] == '&') cout << '\n';
		else cout << url[i];
	}

	return 0;
}

