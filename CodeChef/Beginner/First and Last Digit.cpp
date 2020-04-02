//https://www.codechef.com/problems/FLOW004

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
    int t, n, z;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        z = n % 10;

        while(n > 9) {
            n /= 10;
        }

        z += n;

        printf("%d\n", z);
    }
}