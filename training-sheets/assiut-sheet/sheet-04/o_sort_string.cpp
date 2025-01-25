#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	char ch;
	int freq[26] = {0};

	for(int i = 0; i < n; i++) {
		cin >> ch;
		freq[ch - 'a']++;
	}

	for(int i = 0; i < 26; i++) {
		while(freq[i] > 0) {
			cout << char(i + 'a');
			freq[i]--;
		}
	}

	return 0;
}