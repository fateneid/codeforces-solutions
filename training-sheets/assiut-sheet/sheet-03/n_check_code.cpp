#include <iostream>
#include <cctype>
using namespace std;

bool Check(int a, int b, string s) {
	if(s.length() != a + b + 1) return false;
	if(s[a] != '-') return false;
	
	for(int i = 0; i < s.length(); i++) {
		if(i == a) continue;
		if(!isdigit(s[i])) return false;
	}
	
	return true;
}

int main()
{

	short a, b;
	string s;
	cin >> a >> b >> s;

	cout << (Check(a, b, s)? "Yes" : "No");

	return 0;
}