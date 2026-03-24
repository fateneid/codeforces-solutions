#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, s = 0, d = 0, c, l, r, cards[1000];
    bool st = true;
    cin >> n;

    for (int i = 0; i < n; i++) cin >> cards[i];

    l = 0; r = n - 1;
    while (l <= r) {
        if (cards[l] > cards[r]) {
            c = cards[l];
            l++;
        }
        else {
            c = cards[r];
            r--;
        }
        if (st) s += c;
        else d += c;
        st = !st;
    }

    cout << s << " " << d;

    return 0;
}