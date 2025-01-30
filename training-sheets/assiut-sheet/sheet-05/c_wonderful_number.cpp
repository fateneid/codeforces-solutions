#include <iostream>
#include <bitset>
using namespace std;

string ToBinary(int N) {
	string B = bitset<32>(N).to_string();
	return B.substr(B.find('1'));
}

bool IsPalindrome(string Num) {
	for(int i = 0; i < Num.size()/2; i++) {
		if(Num[i] != Num[Num.size() - i - 1]) {
			return false;
		}
	}
	return true;
}

int main()
{
	int N;
	cin >> N;

	cout << (N % 2 != 0 && IsPalindrome(ToBinary(N))? "YES" : "NO");

	return 0;
}