//https://www.codechef.com/problems/RECIPE

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

int n;
int ingredients[50];

int gcd(int x, int y) {
    if(y == 0) return x;
    else return gcd(y, x%y);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        cin >> n;

        rep(i, 0, n) cin >> ingredients[i];

        int temp = ingredients[0];
        rep(i, 1, n) temp = gcd(temp, ingredients[i]);

        rep(i, 0, n) cout << ingredients[i] / temp << space;
        cout << ln;
    }
}