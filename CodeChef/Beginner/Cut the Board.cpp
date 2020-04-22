//https://www.codechef.com/problems/CUTBOARD

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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, m, ans;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        ans = (n-1)*(m-1);
        cout << ans << ln;
    }
    return 0;
}