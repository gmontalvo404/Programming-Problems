//https://www.codechef.com/problems/AMR15A

#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, n) for (int i = a; i < n; i++)
#define ln '\n'
#define space ' '

typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> VI;
typedef vector<ll> VLL;
typedef vector<ull> VULL;
typedef pair<int, int> PI;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, r = 0;
    cin >> n;

    while(n--) {
        cin >> a;
        a % 2 == 0 ? r++ : r--;
    }

    r > 0 ? cout << "READY FOR BATTLE" : cout << "NOT READY";
}