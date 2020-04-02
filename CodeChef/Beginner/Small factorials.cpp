//https://www.codechef.com/problems/FCTRL2

#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, n) for (int i = a; i < n; i++)

typedef long double ld;
typedef long long ll;
typedef unsigned long long int ull;
typedef vector<int> VI;
typedef pair<int, int> PI;

void solve() {
    int a[200] = {1};
    int n, m = 1;
    scanf("%d", &n);

    while(n > 1) {
        int temp = 0;
        rep(i, 0, m) {
            int x = a[i] * n + temp;
            a[i] = x % 10;
            temp = x / 10;
        }

        while(temp != 0) {
            a[m] = temp % 10;
            temp = temp / 10;
            m++;
        }
        n--;
    }

    while(m--) {
        printf("%d", a[m]);
    }

    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
}