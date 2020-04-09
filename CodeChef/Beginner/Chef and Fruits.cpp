//https://www.codechef.com/problems/FRUITS

#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, n) for (int i = a; i < n; i++)
#define rev(i, n, a) for (int i = n; i >= a; i--)
#define ln '\n'
#define space ' '

typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> VI;
typedef vector<ll> VLL;
typedef vector<ull> VULL;
typedef pair<int, int> PII;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, m, k;
    cin >> t;

    while(t--) {
        cin >> n >> m >> k;
        int res = abs(n - m);
        if(res > k) cout << res - k << ln;
        else cout << 0 << ln;
    }

    return 0;
}