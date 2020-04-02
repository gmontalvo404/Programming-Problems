//https://www.codechef.com/problems/FLOW006

#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, n) for (int i = a; i < n; i++)
#define ln '\n'

typedef long long ll;
typedef unsigned long long int ull;
typedef vector<int> VI;
typedef pair<int, int> PI;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, res = 0;
    string s;
    cin >> t;
    getline(cin, s);

    while (t--) {
        getline(cin, s);

        rep(i, 0, s.size()) {
            res += s[i] - 48;
        }

        cout << res << ln;
        res = 0;
    }
}