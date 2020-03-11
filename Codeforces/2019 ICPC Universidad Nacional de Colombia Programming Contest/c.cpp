//
// Created by GMontalvo404 on 3/11/2020.
//

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] > 47 && s[i] < 58) {
            cout << s[i];
        }
        else {
            if(i == 0) {
                cout << -1;
            }
            break;
        }
    }
}