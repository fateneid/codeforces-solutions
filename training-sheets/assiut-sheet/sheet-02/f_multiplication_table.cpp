#include <iostream>
using namespace std;

int main()
{
    short N;
    cin >> N;
    
    for(short i = 1; i<=12; i++){
        cout << N << " * " << i << " = " << N*i <<'\n';
    }

    return 0;
}