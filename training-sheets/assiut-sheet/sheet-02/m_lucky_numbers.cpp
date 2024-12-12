#include <iostream>
using namespace std;

bool IsLucky(int Num) {
	while(Num != 0) {
		int l = Num%10;
		if(l != 7 && l != 4) {
			return false;
		}
		Num /= 10;
	}
	return true;
}

int main()
{
	int A, B;
	cin >> A >> B;
	
	bool found = false;

	for(int i = A; i<=B; i++) {
	    if(IsLucky(i)){
	        cout << i << " ";
	        found = true;
	    }
	}
	
	if(!found){
	    cout << -1;
	}

	return 0;
}