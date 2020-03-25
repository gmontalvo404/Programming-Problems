//https://codeforces.com/contest/237/problem/A

#include <bits/stdc++.h>
#define for(i, n) for (int i=0; i<n; i++)
#define for2(i, a, b) for (int i=a; i<b; i++)
#define endl '\n'
#define read(a, b) cin >> a >> b
typedef long long ll;
typedef unsigned long long int ull;

using namespace std;

const int H = 24;
const int M = 60;

int values[H][M];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, h, m, fc = 1;
    cin >> n;

    for(i, n) {
        cin >> h >> m;
        values[h][m]++;
    }

    for(i, H) {
        for(j, M) {
            fc = max(fc, values[i][j]);
        }
    }

    cout << fc;

    return 0;
}