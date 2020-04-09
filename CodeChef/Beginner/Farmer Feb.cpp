//https://www.codechef.com/problems/POTATOES

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

bool isPrime(int n) {
    rep(i, 2, sqrt(n) + 1) if(n % i == 0) return false;
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, x, y, z;
    cin >> t;

    while(t--) {
        cin >> x >> y;
        z = x + y + 1;

        while(!isPrime(z)) z++;
        cout << z - x - y<< ln;
    }

    return 0;
}