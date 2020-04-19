//https://www.codechef.com/problems/RECTSQ

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

int gcd(int a, int b) {
    if(b == 0) return a;
    else return gcd(b, a % b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, m, GCD, ans;
    cin >> t;

    while(t--) {
        cin >> n >> m;
        GCD = gcd(n, m);
        ans = (n*m) / pow(GCD, 2);
        cout << ans << ln;
    }
}