//https://www.codechef.com/problems/LAPIN

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

    int t;
    string s;

    cin >> t;

    while(t--) {
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        vector<int> sa(26);
        vector<int> sb(26);

        rep(i, 0, s.size() / 2) sa[s.at(i) - 97]++;

        int size = s.size()/2;
        if(s.size() % 2 != 0) size++;

        rev(i, s.size() - 1, size) sb[s.at(i) - 97]++;

        sa == sb ? cout << "YES" << ln : cout << "NO" << ln;
    }
}
