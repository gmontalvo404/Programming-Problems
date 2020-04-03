//https://www.codechef.com/problems/FLOW018

#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, n) for (int i = a; i < n; i++)
#define ln '\n'

typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> VI;
typedef vector<ll> VLL;
typedef vector<ull> VULL;
typedef pair<int, int> PI;

VLL nums(20);

ll factorial(ld n) {
    ll f = 0;
    if(nums[n] != 0 || n == 0) {
        return nums[n];
    } else {
        f = n * factorial(n - 1);
    }

    nums[n] = f;
    return f;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    nums[0] = 1;
    nums[1] = 1;
    factorial(20);
    cin >> t;
    while (t--) {
        cin >> n;
        cout << nums[n] << ln;
    }
}