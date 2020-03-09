//
// Created by GMontalvo404 on 3/9/2020.
//

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while(t > 0) {
        int n, m;
        cin >> n >> m;

        vector<long> times(26), a(n);
        int total = m + 1;

        string s;
        cin >> s;
        int temp;

        for (int i = 0; i < m; i++) {
            cin >> temp;
            a[temp]++;
        }

        for(int i = 0; i < s.size(); i++) {
            total -= a[i];
            times[s[i] - 97] += total;
        }

        for (int i = 0; i < 26; i++) {
            cout << times[i] << " ";
        }

        cout << endl;

        t--;
    }


}