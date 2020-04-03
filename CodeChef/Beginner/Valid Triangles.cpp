//https://www.codechef.com/problems/FLOW013

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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, a, b, c;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        a+b+c == 180 ? cout << "YES" : cout << "NO";
        cout << ln;
    }
}