//https://www.codechef.com/problems/GDOG

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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, k;
    cin >> t;
    while(t--) {
        int coins = 0;
        cin >> n >> k;

        rev(i, k, 1) {
            if(n % i > coins) coins = n % i;
        }

        cout << coins << ln;
    }
    return 0;
}