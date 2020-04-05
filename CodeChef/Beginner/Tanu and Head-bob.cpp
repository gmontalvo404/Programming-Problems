//https://www.codechef.com/problems/HEADBOB

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

string identifyPerson(string s) {
    rep(i, 0, s.size()) {
        if(s[i] == 'I') return "INDIAN";
        else if(s[i] == 'Y') return "NOT INDIAN";
    }

    return "NOT SURE";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    string s;
    cin >> t;

    while(t--) {
        cin >> n >> s;
        cout << identifyPerson(s) << ln;
    }
}