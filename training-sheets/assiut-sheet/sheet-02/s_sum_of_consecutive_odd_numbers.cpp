#include <iostream>
#include <algorithm>
using namespace std;

int SumOfOdd(int X, int Y) {
	int Sum = 0;
	for(int i = X; i <= Y; i++) {
		if(i%2 != 0) {
			Sum += i;
		}
	}
	return Sum;
}

int main()
{
	short t;
	cin >> t;
	while(t--) {
		int X, Y;
		cin >> X >> Y;
		cout << SumOfOdd(min(X,Y) + 1, max(X,Y) - 1) << endl;
	}

	return 0;
}