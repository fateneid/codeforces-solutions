#include <iostream>
using namespace std;

int main()
{
	short N, i = 1;
	cin >> N;
	
	while(N--){
	    cout << i <<' '<< i + 1 <<' '<< i + 2 << " PUM\n";
	    i += 4;
	}

	return 0;
}