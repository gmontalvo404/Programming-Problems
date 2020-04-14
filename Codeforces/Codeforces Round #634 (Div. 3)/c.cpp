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
    cin >> t;

    while(t--) {
        cin >> n;
        set<int> set;
        int score[n];
        int arr[n];

        memset(score, 0, sizeof(score));

        rep(i, 0, n) {
            cin >> arr[i];
            set.insert(arr[i]);
            score[arr[i] - 1]++;
        }

        if(n == 1) {
            cout << 0 << ln;
        } else if(set.size() == n) {
            cout << 1 << ln;
        } else {
            sort(score, score + n);
            int ans = score[n - 1];
            if(ans > set.size()) cout << set.size() << ln;
            else if(set.size() ==  ans) cout << ans - 1 << ln;
            else cout << ans<< ln;
        }
    }

    return 0;
}