#include <bits/stdc++.h>
using namespace std;
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int td = k * l;
    td = td / nl;
    int ts = c * d;
    int tsa = p / np;

    int ans = min(min(td, ts), tsa) / n;
    cout << ans;
    return 0;
}