#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0);

	short q;
	string s, k, o;
	cin >> q >> s;

	k = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
	o = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	if (q != 1) swap(k, o);
	for (int i = 0; i < s.size(); i++)
	{
		for (int j = 0; j < o.size(); j++)
		{
			if (s[i] == o[j]) { s[i] = k[j]; break; }
		}
	}

	cout << s;

	return 0;
}