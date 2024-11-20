#include <iostream>
using namespace std;
 
long long SummationOfDigits(long long N, long long M){
    
    return N % 10 + M % 10;
    
}
 
int main(){
    
    long long N, M;
    cin >> N >> M;
    
    cout<< SummationOfDigits(N,M);
    
    
}