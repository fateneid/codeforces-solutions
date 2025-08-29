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

		int count = 0, len = 1;
		for(int i = 1; i < n; i++) {
			if(a[i - 1] <= a[i]) len++;
			else {
				count += (len * (len + 1)) /2;
				len = 1;
			}
		}
		count += (len * (len + 1)) /2;
		cout << count << endl;
	}


	return 0;
}