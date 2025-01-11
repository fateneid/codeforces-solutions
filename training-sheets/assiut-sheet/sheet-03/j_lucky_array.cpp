#include <iostream>
using namespace std;

int main()
{
	int n;
	int a[1000];
	cin >> n;

	int min = 100000;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		if(min > a[i]) {
			min = a[i];
		}
	}

	int count = 0;
	for(int i = 0; i < n; i++) {
	    if(a[i] == min){
	        count++;
	    }
	}

	cout << (count % 2 != 0? "Lucky" : "Unlucky");


	return 0;
}