#include <iostream>
using namespace std;
 
long long MaxOf3Nums(long long A, long long B, long long C){

    return (A >= B && A >= C)? A : ((B >= A && B >= C)? B : C);

}

long long MinOf3Nums(long long A, long long B, long long C){

    return (A <= B && A <= C)? A : ((B <= A && B <= C)? B : C);

}

int main(){
    
    long long A, B, C;
    cin >> A >> B >> C;
    
    cout << MinOf3Nums(A, B, C) << " " << MaxOf3Nums(A, B, C);
    
 
}