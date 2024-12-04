#include <iostream>
using namespace std;

int main()
{
    char C;
    cin >> C;
    
    cout << (C == 'z'? 'a' : char(C + 1));
    
    
    return 0;
}