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
    int n, a, b, res;
    while (cin >> n && !cin.eof()) {
        set<int> set;
        bool jolly = true;

        cin >> a;
        rep(i, 0, n - 1) {
            cin >> b;
            res = abs(a - b);
            set.insert(res);
            a = b;
        }

        if (set.size() != n - 1) jolly = false;
        if (set.count(0)) jolly = false;
        if (set.upper_bound(n - 1) != set.end()) jolly = false;

        if(jolly) cout << "Jolly" << ln;
        else cout << "Not jolly" << ln;
    }

    return 0;
}