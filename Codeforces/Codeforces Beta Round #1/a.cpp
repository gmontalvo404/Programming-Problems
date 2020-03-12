//
// Created by GMontalvo404 on 3/11/2020.
//

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int w;
    cin >> w;

    if(w % 2 == 0 && w > 2) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}