#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	short N, M;
	while (true) {
		cin >> N >> M;
		if(N <= 0 || M <= 0) {
			break;
		}

		short Min = min(N,M);
		short Max = max(N,M);
		int Sum = 0;

		for(short i = Min; i<= Max; i++) {
			cout << i << ' ';
			Sum += i;
		}

		cout << "sum =" << Sum << '\n';
	}

	return 0;
}