#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    
    while(t--){
        
        int a, b;
        cin >> a >> b;
        int m = (a <= b)? a : b;
        while(m % a != m % b){
            m++;
        }
        cout << m <<'\n';
    }
 
    return 0;
}
