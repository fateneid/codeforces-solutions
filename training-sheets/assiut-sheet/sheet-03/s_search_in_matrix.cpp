#include <iostream>
using namespace std;

int main()
{
	int n, m, a[101][101], x;
	cin >> n >> m;

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	cin >> x;
	bool isExist = false;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(a[i][j] == x) {
				isExist = true;
				break;
			}
		}
	}

	cout << (isExist? "will not take number" : "will take number");

	return 0;
}