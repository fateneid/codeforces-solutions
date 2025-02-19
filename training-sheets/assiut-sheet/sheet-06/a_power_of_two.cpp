#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long N;
	cin >> N;

	if(N <= 0) {
		cout << "NO";
	}
	else {
		double logValue = log2(N);
		cout << (floor(logValue) == logValue? "YES" : "NO");
	}

	return 0;
}