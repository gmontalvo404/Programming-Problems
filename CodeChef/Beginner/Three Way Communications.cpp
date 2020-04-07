//https://www.codechef.com/problems/COMM3

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
    int t, r, x1, y1, x2, y2, x3, y3;
    cin >> t;

    while(t--) {
        cin >> r >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        int connections = 0;
        int R = pow(r, 2);

        int res = pow((x1-x2),2) + pow((y1-y2),2);
        if(res <= R) {
            connections++;
        }

        res = pow((x1-x3),2) + pow((y1-y3),2);
        if(res <= R) {
            connections++;
        }

        res = pow((x2-x3),2) + pow((y2-y3),2);
        if(res <= R) {
            connections++;
        }

        if(connections > 1) {
            cout << "yes" << ln;
        } else {
            cout << "no" << ln;
        }
    }
    return 0;
}