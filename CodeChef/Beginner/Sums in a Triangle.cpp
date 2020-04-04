//https://www.codechef.com/problems/SUMTRIAN

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

const int G = 100;
int arr[G][G];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, x, y;


    cin >> t;
    while(t--) {
        cin >> n;
        int k = 1;
        rep(i, 0, n) {
            rep(j, 0, k) cin >> arr[i][j];
            k++;
        }

        while(n--) {
            rep(i, 0, k - 1) {
                x = arr[n][i];
                y = arr[n][i + 1];

                arr[n - 1][i] += max(x, y);
            }

            k--;
        }

        cout << arr[0][0] << ln;
    }
}