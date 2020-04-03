//https://www.codechef.com/problems/CHOPRT

#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, n) for (int i = a; i < n; i++)
#define ln '\n'
#define space ' '

typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> VI;
typedef vector<ll> VLL;
typedef vector<ull> VULL;
typedef pair<int, int> PI;

const char M = '>';
const char m = '<';
const char e = '=';

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, a, b;
    char c;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        a > b ? c = M : a < b ? c = m : c = e;
        cout << c << ln;
    }
}