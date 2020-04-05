https://www.codechef.com/problems/SMPAIR

#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, n) for (int i = a; i < n; i++)
#define rev(i, n, a) for (int i = n; i >= a; i--)
#define ln '\n'
#define space ' '

typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> VI;
typedef vector<ll> VLL;
typedef vector<ull> VULL;
typedef pair<int, int> PII;

int nums[1000005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;

    while(t--) {
        cin >> n;
        int x = INT_MAX, y = INT_MAX;

        rep(i, 0, n) {
            cin >> nums[i];
            x = min(x, nums[i]);
        }

        int pos;
        rep(i, 0, n) {
            if(nums[i] == x) {
                pos = i;
                break;
            }
        }

        rep(i, pos + 1, n) y = min(y, nums[i]);
        rev(i, pos - 1, 0) y = min(y, nums[i]);

        cout << x+y << ln;
    }
}