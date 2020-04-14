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

    int t;
    cin >> t;

    while(t--) {
        string s;
        rep(i, 0, 9) {
            cin >> s;
            size_t pos = s.find('1');
            s.at(pos) = '3';
            cout << s << ln;
        }
    }

    return 0;
}