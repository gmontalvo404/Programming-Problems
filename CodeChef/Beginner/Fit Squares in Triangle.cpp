//https://www.codechef.com/problems/TRISQ

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

int findFitSquaresInTriangle(int n) {
    if(n < 4) return 0;
    if(n%2 != 0) n--;

    int x = 1;
    int res = 0;
    while(n >= 4) {
        res += x;
        x++;
        n-=2;
    }

    return res;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;

    while(t--) {
        cin >> n;
        cout << findFitSquaresInTriangle(n) << ln;
    }
}