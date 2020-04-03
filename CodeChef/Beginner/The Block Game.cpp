//https://www.codechef.com/problems/PALL01

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

bool isPalindrome(int n) {
    int k = n, p = 0;

    while(n > 0) {
        p *= 10;
        p += (n%10);
        n = floor(n/10);
    }

    return k == p;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;

    while(t--) {
        cin >> n;

        if(isPalindrome(n)) {
            cout << "wins" << ln;
        } else {
            cout << "losses" << ln;
        }

          /** Otherwise
             cin >> sa;
             sb = sa;
             reverse(sa.begin(), sa.end());

             if(sa == sb) {
                 cout << "wins" << ln;
             } else {
                 cout << "losses" << ln;
             }

         */
    }
}