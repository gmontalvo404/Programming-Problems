//https://www.codechef.com/problems/TSORT

#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, n) for (int i = a; i < n; i++)
#define ln '\n'

typedef long double ld;
typedef long long ll;
typedef unsigned long long int ull;
typedef vector<int> VI;
typedef pair<int, int> PI;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, n;
    vector<int> nums;
    cin >> t;
    while (t--) {
        cin >> n;
        nums.push_back(n);
    }

    sort(nums.begin(), nums.end());

    rep(i, 0, nums.size()) {
        cout << nums[i] << ln;
    }
}