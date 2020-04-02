//https://www.codechef.com/problems/LUCKFOUR

#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, n) for (int i = a; i < n; i++)

typedef long double ld;
typedef long long ll;
typedef unsigned long long int ull;
typedef vector<int> VI;
typedef pair<int, int> PI;

int main() {
    int t, n, o = 0;

    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);
        while(n > 0) {
            if(n % 10 == 4) {
                o++;
            }

            n /= 10;
        }

        printf("%d\n", o);
        o = 0;
    }
}