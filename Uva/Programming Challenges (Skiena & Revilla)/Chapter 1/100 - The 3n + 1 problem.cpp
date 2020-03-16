#include <bits/stdc++.h>
#define endl '\n'
typedef long long ll;
typedef unsigned long long int ull;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int m, n, maxL = 0;

    while(cin >> m >> n) {
        printf("%i %i ", m, n);

        if(m > n) {
            int temp = m;
            m = n;
            n = temp;
        }

        while(m <= n) {
            int k = m;
            int ct = 1;
            while(k != 1) {
                if(k % 2 == 0) {
                    k /= 2;
                } else {
                    k = (k * 3) + 1;
                }

                ct++;
            }

            maxL = max(maxL, ct);
            m++;
        }

        printf("%i\n", maxL);
        maxL = 0;
    }
}