//https://www.codechef.com/problems/FLOW011

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

double grossSalary(int n) {
    if(n < 1500) return n*2;

    double DA = 0.98 * n;
    double HRA = 500;

    return n + DA + HRA;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << setprecision(2) << fixed;

    int t, n;
    cin >> t;

    while(t--) {
        cin >> n;
        cout << grossSalary(n) << ln;
    }
}