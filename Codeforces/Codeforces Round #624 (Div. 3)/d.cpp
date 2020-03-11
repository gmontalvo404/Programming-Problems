//
// Created by GMontalvo404 on 3/9/2020.
//

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, a, b, c;
    cin >> t;

    for (int g = 0; g < t; g++) {
        cin >> a >> b >> c;
        int result = INT_MAX, A = -1, B = -1, C = -1;

        for (int i = 1; i <= 2 * a; ++i) {
            for (int j = i; j <= 2 * b; j += i) {
                for (int k = 0; k < 2; ++k) {
                    int temp = j * (c / j) + k * j;
                    int res = abs(i - a) + abs(j - b) + abs(temp - c);
                    if (result > res) {
                        result = res;
                        A = i;
                        B = j;
                        C = temp;
                    }
                }
            }
        }

        cout << result << endl << A << " " << B << " " << C << endl;
    }
}
