#include <bits/stdc++.h>
#define for(x, n) for (int x = 0; x < n; x++)
#define endl '\n'
typedef long long ll;
typedef unsigned long long int ull;

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t, n, k;
    cin >> t;

    for(i, t) {
        cin >> n >> k;
        char s[n];
        for(j, n) {
            s[j] = 'a';
        }

        int p = n - 2;
        int q = n - 1;
        for(i, k - 1) {
            if(p + 1 == q) {
                q = n - 1;
                p--;
            } else {
                q--;
            }
        }

        s[p] = 'b';
        s[q] = 'b';

        for(j, n) {
            cout << s[j];
        }

        cout << endl;
    }

    return 0;
}