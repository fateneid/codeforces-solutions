#include <iostream>
using namespace std;
 
int main()
{
    
    int N;
    cin >> N;
    
    int Years, Months, Days, Remainder;
    Years = N / 365;
    Remainder = N % 365;
    Months = Remainder / 30;
    Remainder = Remainder % 30;
    Days = Remainder;
    
    cout << Years << " years\n" << Months << " months\n" << Days << " days";
    
    return 0;
}