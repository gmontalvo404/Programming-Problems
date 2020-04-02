//https://www.codechef.com/problems/FLOW007

#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, n) for (int i = a; i < n; i++)
#define ln '\n'

typedef long double ld;
typedef long long ll;
typedef unsigned long long int ull;
typedef vector<int> VI;
typedef pair<int, int> PI;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t, n;
    cin >> t;

    rep(i, 0, t) {
        cin >> n;

        while(n % 10 == 0) {
            n /= 10;
        }

        while(n != 0) {
            cout << (n % 10);
            n /= 10;
        }
        cout << ln;
    }
}