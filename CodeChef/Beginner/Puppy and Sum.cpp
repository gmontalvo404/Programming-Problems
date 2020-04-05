//https://www.codechef.com/problems/PPSUM

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

int sum(int n) {
    return n*(n+1)/2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << setprecision(6) << fixed;

    int t, d, n;
    cin >> t;

    while(t--) {
        cin >> d >> n;
        int res = 0;

        rep(i, 0, d) {
            res = sum(n);
            n = res;
        }

        cout << res << ln;
    }
}