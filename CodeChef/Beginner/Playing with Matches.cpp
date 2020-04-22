//https://www.codechef.com/problems/MATCHES

#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, n) for (int i = a; i < n; i++)
#define rev(i, n, a) for (int i = n; i >= a; i--)
#define ln '\n'

typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> VI;
typedef vector<ll> VLL;
typedef vector<ull> VULL;
typedef pair<int, int> PII;

int score[10    ] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, a, b, ans;
    string s;
    cin >> t;

    while(t--) {
        cin >> a >> b;
        ans = 0;
        s = to_string(a + b);

        rep(i, 0, s.size()) {
            ans += score[s[i] - '0'];
        }

        cout << ans << ln;
    }
}