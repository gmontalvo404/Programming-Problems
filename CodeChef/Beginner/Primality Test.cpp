//https://www.codechef.com/problems/PRB01

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

bool isPrime(int n) {
    if(n < 2) return false;

    for(int i = 2; i < sqrt(n); i++) if(n % i == 0) return false;

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        isPrime(n) ? cout << "yes" : cout << "no";
        cout << ln;
    }
}