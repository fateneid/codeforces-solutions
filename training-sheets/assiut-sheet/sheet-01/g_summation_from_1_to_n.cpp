#include <iostream>
using namespace std;
 
long long SummationFrom1ToN(long long N){

    return N*(N+1)/2;
    
}
 
int main(){
    
    long long N;
    cin >> N;
    
    cout << SummationFrom1ToN(N);
    
    
}