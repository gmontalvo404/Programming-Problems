//https://www.codechef.com/submit/FLOW009

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
    cout << setprecision(6) << fixed;

    int t, q, p;
    double res, dis = 0.10;
    cin >> t;

    while(t--) {
        cin >> q >> p;
        res = q * p;
        if(q > 1000) res -= (res * dis);
        cout << res << ln;
    }
}