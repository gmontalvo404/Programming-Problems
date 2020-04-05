//https://www.codechef.com/problems/FLOW016

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

ll gcd(int x, int y) {
    if(y == 0) return x;
    else return gcd(y, x%y);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, x, y, res;
    cin >> t;

    while(t--) {
        cin >> x >> y;
        res = gcd(x,y);
        cout << res << space << (x*y)/res << ln;
    }
}