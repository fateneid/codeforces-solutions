#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int count = 0;
	bool inWord = false;

	getline(cin, s);

	for(char c : s) {
		if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
			if(!inWord) {
				count++;
				inWord = true;
			}
		}
		else inWord = false;
	}

	cout << count;

	return 0;
}