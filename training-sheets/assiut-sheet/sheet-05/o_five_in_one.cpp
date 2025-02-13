#include <iostream>
using namespace std;

short Max(short A[], short N) {
	short Max = A[0];
	for(short i = 1; i < N; i++) {
		if(A[i] > Max) {
			Max = A[i];
		}
	}
	return Max;
}

short Min(short A[], short N) {
	short Min = A[0];
	for(short i = 1; i < N; i++) {
		if(A[i] < Min) {
			Min = A[i];
		}
	}
	return Min;
}

bool IsPrime(short Num) {
	if(Num < 2) return false;
	if(Num == 2 || Num == 3) return true;
	if(Num % 2 == 0) return false;

	for(short i = 3; i * i <= Num; i += 2) {
		if(Num % i == 0) {
			return false;
		}
	}
	return true;
}

short CountPrimeNums(short A[], short N) {
	short count = 0;
	for(short i = 0; i < N; i++) {
		if(IsPrime(A[i])) {
			count++;
		}
	}
	return count;
}

bool IsPalindrome(short Num) {
	short temp = Num, rev = 0;
	while(temp != 0) {
		rev = rev * 10 + (temp % 10);
		temp /= 10;
	}
	return (rev == Num);
}

short CountPalindromeNums(short A[], short N) {
	short count = 0;
	for(short i = 0; i < N; i++) {
		if(IsPalindrome(A[i])) {
			count++;
		}
	}
	return count;
}

short Divisors(int Num) {
	short count = 0;
	for(int i = 1; i <= Num; i++) {
		if(Num % i == 0) {
			count++;
		}
	}
	return count;
}

short MaxDivisors(short A[], short N) {
	short Max = Divisors(A[0]), Div, Index = 0;
	for(short i = 1; i < N; i++) {
		Div = Divisors(A[i]);
		if(Div > Max) {
			Max = Div;
			Index = i;
		}
		else if(Div == Max) {
			Index = A[Index] > A[i] ? Index : i;
		}
	}
	return A[Index];
}

int main()
{
	short N, A[101];
	cin >> N;

	for(short i = 0; i < N; i++) {
		cin >> A[i];
	}

	cout << "The maximum number : " << Max(A, N);
	cout << "\nThe minimum number : " << Min(A, N);
	cout << "\nThe number of prime numbers : " << CountPrimeNums(A, N);
	cout << "\nThe number of palindrome numbers : " << CountPalindromeNums(A, N);
	cout << "\nThe number that has the maximum number of divisors : " << MaxDivisors(A, N);

	return 0;
}