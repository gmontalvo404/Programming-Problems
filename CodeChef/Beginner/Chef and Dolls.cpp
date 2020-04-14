//https://www.codechef.com/problems/MISSP

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

const int N = 100000;
int arr[N];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;

    while(t--) {
        cin >> n;

        rep(i, 0, n) {
            int num;
            cin >> num;

            arr[num - 1]++;
        }

        rep(i, 0, N) {
            if(arr[i] % 2 != 0) {
                cout << i + 1 << ln;
                break;
            }
        }

        memset(arr, 0, sizeof(arr));
    }

    return 0;
}