//https://www.codechef.com/problems/COPS

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

const int MAX = 100;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[MAX];
    memset(arr, 0, sizeof(arr));
    int t, m, x, y, z;
    cin >> t;

    while(t--) {
        cin >> m >> x >> y;
        z = x * y;
        int cops[m];

        rep(i, 0, m) cin >> cops[i];

        rep(i, 0, m) {
            rep(j, max(1, cops[i] - z), cops[i] + 1) arr[j - 1] = 1;
            rep(j, cops[i], min(100, cops[i] + z) + 1) arr[j - 1] = 1;
        }

        cout << count(arr, arr+MAX, 0) << ln;
        memset(arr, 0, sizeof(arr));
    }

    return 0;
}