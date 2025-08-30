#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, a[1001], b[1001];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    
    sort(a, a + n);
    sort(b, b + n);
    
    bool isPermutation = true;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            isPermutation = false;
            break;
        }
    }
    
    cout << (isPermutation ? "yes" : "no");
    
    return 0;
}