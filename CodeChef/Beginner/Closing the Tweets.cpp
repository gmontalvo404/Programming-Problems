//https://www.codechef.com/problems/TWTCLOSE

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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, x;
    int arr[1000];
    string s;

    cin >> n >> k;
    while(k--) {
        cin >> s;

        if(s == "CLICK") {
            cin >> x;
            int num = arr[x - 1];

            if(num == 1) arr[x - 1] = 0;
            else arr[x - 1] = 1;

            cout << count(arr, arr+n, 1) << ln;
        } else {
            rep(i, 0, n) arr[i] = 0;
            cout << 0 << ln;
        }
    }
    return 0;
}