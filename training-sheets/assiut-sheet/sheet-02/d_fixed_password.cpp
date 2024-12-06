#include <iostream>
using namespace std;

int main()
{
    int X;
    
	while(cin >> X) {
		if(X != 1999){
		    cout << "Wrong\n";
		}
		else{
		    cout << "Correct\n";
		    break;
		}
	}
	
	return 0;
}