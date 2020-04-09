//https://www.codechef.com/problems/CHEFSTLT

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

    int t;
    string s1, s2;
    cin >> t;

    while(t--) {
        int maxD = 0, minD = 0;
        cin >> s1 >> s2;

        int size = min(s1.size(), s2.size());
        rep(i, 0, size) {
            if(s1.at(i) != s2.at(i) || s1.at(i) == '?' || s2.at(i) == '?') maxD++;
            if(s1.at(i) != s2.at(i) && s1.at(i) != '?' && s2.at(i) != '?') minD++;
        }

        cout(minD, maxD);
    }

    return 0;
}