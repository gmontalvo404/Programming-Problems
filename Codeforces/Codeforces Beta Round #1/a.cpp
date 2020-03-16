#include <bits/stdc++.h>
#define endl
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    double n, m, a;
    cin >> n >> m >> a;

    int x = ceil(n / a);
    int y = ceil(m / a);

    ll z = (ll) x * y;
    cout << z;
}