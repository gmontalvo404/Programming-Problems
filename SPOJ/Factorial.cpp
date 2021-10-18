//https://www.spoj.com/problems/FCTRL/

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

    int t, n;
    cin >> t;

    while(t--) {
        cin >> n;
        int ans = 0;
        int temp = 5;
        while(n/temp >= 1) {
            ans += (n/temp);
            temp *= 5;
        }
        cout << ans << ln;
    }
}
