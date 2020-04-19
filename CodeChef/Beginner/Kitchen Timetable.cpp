//https://www.codechef.com/problems/KTTABLE

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

    int t, n, temp;
    cin >> t;

    while(t--) {
        int ans = 0;
        cin >> n;
        vector<int> arr(n);

        rep(i, 0, n) cin >> arr[i];
        rev(i, n - 1, 1) arr[i] -= arr[i - 1];

        rep(i, 0, n) {
            cin >> temp;
            if(arr[i] >= temp) ans++;
        }

        cout << ans << ln;
    }
}