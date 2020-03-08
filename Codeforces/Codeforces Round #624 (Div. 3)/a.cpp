//
// Created by GMontalvo404 on 3/8/2020.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, a, b;
    cin >> t;

    for(int i = 0; i < t; i++) {
        cin >> a;
        cin >> b;

        if(a == b) {
            cout << 0 << endl;
        }
        else if (a > b && (a - b) % 2 == 0) {
            cout << 1 << endl;
        }
        else if (a < b && (b - a) % 2 == 1) {
            cout << 1 << endl;
        }
        else {
            cout << 2 << endl;
        }
    }
}