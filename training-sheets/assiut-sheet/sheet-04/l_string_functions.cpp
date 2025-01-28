#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	int n, q;
	cin >> n >> q;
	string s;
	cin >> s;
	while(q--) {
		string command;
		cin >> command;
		int l, r;

		if(command == "substr") {
			cin >> l >> r;
			int m = min(l, r);
			cout << s.substr(m - 1, max(l, r) - m + 1) << '\n';
		}
		else if(command == "sort") {
			cin >> l >> r;
			sort(s.begin() + min(l, r) - 1, s.begin() + max(l, r));
		}
		else if(command == "reverse") {
			cin >> l >> r;
			reverse(s.begin() + min(l, r) - 1, s.begin() + max(l, r));
		}
		else if(command == "pop_back") {
			s.pop_back();
		}
		else if(command == "push_back") {
			char ch;
			cin >> ch;
			s.push_back(ch);
		}
		else if(command == "print") {
			cin >> l;
			cout << s[l - 1] << '\n';
		}
		else if(command == "front") {
			cout << s.front() << '\n';
		}
		else if(command == "back") {
			cout << s.back() << '\n';
		}
	}

	return 0;
}