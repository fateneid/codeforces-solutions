#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string DecimalToBinary(int Decimal) {
	string Binary = "";
	while(Decimal != 0) {
		Binary = to_string(Decimal%2) + Binary;
		Decimal /= 2;
	}
	return Binary;
}

int BinaryToDecimal(string Binary) {
	int Decimal = 0;
	int Length = Binary.length() - 1;
	for(int i = 0; i <= Length; i++) {
		Decimal += (Binary[i] - '0') * (int)pow(2, Length - i);
	}
	return Decimal;
}

int main()
{
	short t;
	int N;
	cin >> t;

	while(t--) {
		cin >> N;
		string Binary = DecimalToBinary(N);
		string NewBinary = "";
		for(int i = 0; i < Binary.length(); i++) {
			if(Binary[i] - '0' == 1) {
				NewBinary += Binary[i];
			}
		}
		cout << BinaryToDecimal(NewBinary) << '\n';
	}

	return 0;
}