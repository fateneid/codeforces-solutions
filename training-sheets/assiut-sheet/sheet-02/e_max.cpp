#include <iostream>
using namespace std;

int main()
{
    int N, X, Max = 0;
    cin >> N;
    
    while(N--){
        cin >> X;
        if(X >= Max){
            Max = X;
        }
    }
    cout << Max;
	
	return 0;
}