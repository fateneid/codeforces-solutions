#include <iostream>
using namespace std;

void CForNTimes(short N, char C) {
	for(short i = 1; i <= N; i++) {
		cout << C << ' ';
	}
}

int main()
{
	short T;
	cin >> T;

	while(T--) {
		short N;
		char C;
		cin >> N >> C;

		CForNTimes(N, C);
		cout << '\n';
	}

	return 0;

}