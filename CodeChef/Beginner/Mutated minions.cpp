//https://www.codechef.com/problems/CHN15A

#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, n) for (int i = a; i < n; i++)
#define ln '\n'
#define space ' '

typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ull> vull;
typedef pair<int, int> pi;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, k, ans, cnt;
    cin >> t;

    while(t--) {
        ans = 0;
        cin >> n >> k;
        rep(i, 0, n) {
            cin >> cnt;
            if((cnt + k) % 7 == 0) ans++;
        }
        cout << ans << ln;
    }
}
