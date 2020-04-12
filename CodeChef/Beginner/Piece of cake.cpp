//https://www.codechef.com/problems/LCH15JAB

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
const int N = 26;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    string s;
    int arr[N];
    cin >> t;

    while(t--) {
        cin >> s;
        memset(arr, 0, sizeof(arr));
        rep(i, 0, s.size()) arr[s.at(i) - 'a']++;

        int ward = 0;
        rep(i, 0, N) {
            if(arr[i] > 0 && s.size() - arr[i] == arr[i]) {
                ward = 1;
                break;
            }
        }

        if(ward) cout << "YES" << ln;
        else cout << "NO" << ln;
    }

    return 0;
}