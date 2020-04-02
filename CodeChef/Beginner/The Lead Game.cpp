//https://www.codechef.com/problems/TLG

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
    int r, p1 = 0, p2 = 0, winner = -1, lead = -1, x, y;

    scanf("%d", &r);
    while (r--) {
        scanf("%d %d", &x, &y);

        p1 += x;
        p2 += y;

        int res = abs(p1 - p2);
        if(lead < res) {
            lead = res;
            winner = p1 > p2 ? 1 : 2;
        }
    }

    printf("%d %d", winner, lead);
}