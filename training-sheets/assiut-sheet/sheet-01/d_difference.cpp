#include <iostream>
using namespace std;
 
long long Difference(long long a, long long b, long long c, long long d){
    return (a * b) - (c * d);
}
 
int main(){
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
 
    cout << "Difference = " << Difference(a, b, c, d) << endl;
}

