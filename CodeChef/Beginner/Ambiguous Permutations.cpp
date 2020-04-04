//https://www.codechef.com/problems/PERMUT2

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

const int N = 100005;
int pn[N];
int pi[N];

bool isAmbiguous(int n) {
    rep(i, 0, n) {
        int a = pn[i];
        int b = pi[i];
        if(a != b) {
            return false;
        }
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    while(cin >> n  && n != 0) {
        rep(i, 0, n) {
            cin >> pn[i];
            pi[pn[i] - 1] = i+1;
        }

        isAmbiguous(n) ?  cout << "ambiguous" << ln: cout << "not ambiguous" << ln;
    }
}