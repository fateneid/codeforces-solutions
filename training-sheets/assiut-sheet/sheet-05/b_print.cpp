#include <iostream>
using namespace std;

void Print1ToN(int N) {
	for(int i = 1; i <= N; i++) {
		cout << i << (i != N? " " : "");
	}
}

int main()
{
	int N;
	cin >> N;

	Print1ToN(N);

	return 0;
}