//https://www.codechef.com/problems/TWOSTR

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

bool isMatched(string s1, string s2) {
    rep(i, 0, s1.size()) if(s1.at(i) != s2.at(i) && s1.at(i) != '?' && s2.at(i) != '?') return false;
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    string s1, s2;

    cin >> t;
    while(t--) {
        cin >> s1 >> s2;
        isMatched(s1, s2) ? cout << "Yes" << ln : cout << "No" << ln;
    }

    return 0;
}