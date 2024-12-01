#include <iostream>
using namespace std;

int main()
{
    
    int A, B, C;
    cin >> A >> B >> C;
    
    if(A<=B && A<=C){
        cout<<A<<'\n'<<(B<=C? B: C)<<'\n'<<(B<=C? C: B);
    }
    else if(B<=A && B<=C){
        cout<<B<<'\n'<<(A<=C? A: C)<<'\n'<<(A<=C? C: A);
    }
    else{
        cout<<C<<'\n'<<(A<=B? A: B)<<'\n'<<(A<=B? B: A);
    }

    cout<<"\n\n"<< A <<'\n'<<B<<'\n'<<C;
    
    return 0;
}