#include <iostream>
using namespace std;

int main()
{
    short n, m, x, y;
    char a[101][101];
    bool c1, c2;

    cin >> n >> m;
    for (int i = 1; i <= n; i++) for (int j = 1; j <= m; j++) cin >> a[i][j];
    cin >> x >> y;

    c1 = (a[x][y - 1] != '.' && a[x][y + 1] != '.' && a[x - 1][y] != '.' && a[x + 1][y] != '.');
    c2 = (a[x - 1][y - 1] != '.' && a[x + 1][y + 1] != '.' && a[x - 1][y + 1] != '.' && a[x + 1][y - 1] != '.');

    cout << (c1 && c2 ? "yes" : "no");

    return 0;
}