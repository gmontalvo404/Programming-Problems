//https://www.codechef.com/problems/STRPALIN

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
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    string s1, s2;

    cin >> t;

    while(t--) {
        cin >> s1 >> s2;
        int total = 0;

        rep(i, 0, s1.size()) {
            total += count(s2.begin(), s2.end(), s1[i]);
            if(total != 0) break;
        }

        total != 0 ? cout << "Yes" << ln : cout << "No" << ln;
    }

    return 0;
}