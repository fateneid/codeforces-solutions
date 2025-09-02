#include <iostream>
using namespace std;

int main()
{
	int n, m, a[10001], b[10001], len = 0;

	cin >> n >> m;
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < m; i++) cin >> b[i];

	for(int i = 0; i < n && len < m; i++) {
		if(a[i] == b[len]) len++;
	}

	cout << (len == m? "YES" : "NO");

	return 0;
}