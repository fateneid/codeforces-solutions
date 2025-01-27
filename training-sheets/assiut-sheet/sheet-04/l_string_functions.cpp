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
		int start, end;
		char ch;

		if(command == "substr") {
			cin >> start >> end;
			cout << s.substr(start - 1, end - start + 1) << '\n';
		}
		else if(command == "sort") {
			cin >> start >> end;
			sort(s.begin() + (start - 1), s.end() + end);
		}
		else if(command == "reverse") {
			cin >> start >> end;
			reverse(s.begin() + (start - 1), s.end() + end);
		}
		else if(command == "pop_back") {
			s.pop_back();
		}
		else if(command == "push_back") {
			cin >> ch;
			s.push_back(ch);
		}
		else if(command == "print") {
			cin >> start;
			cout << s.at(start - 1) << '\n';
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