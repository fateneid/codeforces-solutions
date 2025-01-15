#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	
	string Output = "";
	for(int i = 0; i < s.length(); i++) {
	    if(s[i] == '\\'){
	        break;
	    }
	    
	    Output += s[i];
	}
	
	cout << Output;

	return 0;

}