#include <iostream>
using namespace std;

int main()
{
    short n, m, x, y;
    char a[101][101];
    bool v, h, d1, d2;

    cin >> n >> m;
    for (int i = 1; i <= n; i++) for (int j = 1; j <= m; j++) cin >> a[i][j];
    cin >> x >> y;

    h = (a[x][y - 1] != '.' && a[x][y + 1] != '.');
    v = (a[x - 1][y] != '.' && a[x + 1][y] != '.');
    d1 = (a[x - 1][y - 1] != '.' && a[x + 1][y + 1] != '.');
    d2 = (a[x - 1][y + 1] != '.' && a[x + 1][y - 1] != '.');

    cout << (h && v && d1 && d2 ? "yes" : "no");

    return 0;
}
