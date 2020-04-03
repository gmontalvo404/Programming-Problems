//https://www.codechef.com/problems/CIELRCPT

#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, n) for (int i = a; i < n; i++)
#define ln '\n'

typedef long double ld;
typedef long long ll;
typedef unsigned long long int ull;
typedef vector<int> VI;
typedef pair<int, int> PI;

const VI prices = {2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, p;
    cin >> t;

    while (t--) {
        cin >> p;
        int m = 0;

        for(int i = 0; i < prices.size() && p > 0; i++) {
            m += floor(p/prices.at(i));
            p %= prices.at(i);
        }

        cout << m << ln;
    }
}