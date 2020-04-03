//https://www.codechef.com/problems/FLOW005

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

const int TN = 6;
const int notes[TN] = {100, 50, 10, 5, 2, 1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int smallestNumber = 0;

        for(int i = 0; i < TN && n > 0; i++) {
            smallestNumber += floor(n/notes[i]);
            n %= notes[i];
        }

        cout << smallestNumber << ln;
    }
}