//https://www.codechef.com/problems/FLOW017

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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    VI nums(3);
    cin >> t;

    while (t--) {
        cin >> nums[0] >> nums[1] >> nums[2];
        sort(nums.begin(), nums.end());
        cout << nums[1] << ln;
    }
}