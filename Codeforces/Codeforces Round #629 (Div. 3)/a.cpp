#include <bits/stdc++.h>
#define for(x, n) for (int x = 0; x < n; x++)
#define endl '\n'
typedef long long ll;
typedef unsigned long long int ull;

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t, a, b, x;
    cin >> t;

    for(i, t) {
        cin >> a >> b;
        x = (double) ceil((double) a / (double) b);
        x *= b;
        cout << (x - a) << endl;
    }

    return 0;
}