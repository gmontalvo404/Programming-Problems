//https://www.codechef.com/problems/FRGTNLNG

#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, n) for (int i = a; i < n; i++)
#define rev(i, n, a) for (int i = n; i >= a; i--)
#define ln '\n'
#define space ' '
#define cout(a, b) cout << a << space << b << ln;

typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> VI;
typedef vector<ll> VLL;
typedef vector<ull> VULL;
typedef pair<int, int> PII;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, k, l;
    cin >> t;

    while(t--) {
        cin >> n >> k;
        vector<string> arr(n);
        set<string> words;

        rep(i, 0, n) cin >> arr[i];
        rep(i, 0, k) {
            cin >> l;

            while(l--) {
                string word;
                cin >> word;
                words.insert(word);
            }
        }

        rep(i,0, n) {
            if(count(words.begin(), words.end(), arr[i]) == 1) cout << "YES ";
            else cout << "NO ";
        }

        cout << ln;
    }

    return 0;
}