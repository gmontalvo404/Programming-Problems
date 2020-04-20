//https://www.codechef.com/problems/CHEFARRP

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

    int t, n;
    int arr[50];
    cin >> t;

    while(t--) {
        cin >> n;
        int ans = 0;

        rep(i, 0, n) cin >> arr[i];

        rep(i, 0, n) {
            int sum = 0, pro = 1;

            rep(j, i, n) {
                sum += arr[j];
                pro *= arr[j];

                if(sum == pro) ans++;
            }
        }

        cout << ans << ln;
    }
}