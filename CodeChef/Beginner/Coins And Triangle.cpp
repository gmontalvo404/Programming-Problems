//https://www.codechef.com/problems/TRICOIN

#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, n) for (int i = a; i < n; i++)
#define rev(i, n, a) for (int i = n; i >= a; i--)
#define ln '\n'
#define space ' '
#define cout(a, b) cout << a << space << b << ln;

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

    int t, n;
    ll x;
    cin >> t;

    while(t--) {
        cin >> n;
        x = 0;

        if(n == 1) cout << n << ln;
        else {
            rep(i, 0, n) {
                x += i + 1;
                if(x > n) {
                    cout << i << ln;
                    break;
                }
            }
        }
    }

    return 0;
}