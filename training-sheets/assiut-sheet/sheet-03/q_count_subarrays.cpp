#include <iostream>
using namespace std;

int main()
{
	short t, n;
	int a[101];
	cin >> t;

	while (t--) {
		cin >> n;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int count = 0;
		for(int i = 0; i < n; i++) {
			int max = a[i];
			for(int j = i; j < n; j++) {
				if(max <= a[j]) {
					max = a[j];
					count++;
				}
				else break;
			}
		}
		cout << count << endl;
	}

	return 0;
}