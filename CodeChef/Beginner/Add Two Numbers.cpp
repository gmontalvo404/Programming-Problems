//https://www.codechef.com/problems/FLOW001

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

    int t, a, b;
    cin >> t;

    while (t--) {
        cin >> a >> b;
        cout << (a + b) << ln;
    }
}