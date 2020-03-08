//
// Created by GMontalvo404 on 3/8/2020.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t > 0) {
        int n, m;
        cin >> n >> m;

        int a[n];
        int p[m];

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for(int i = 0; i < m; i++) {
            cin >> p[i];
        }

        for (int i = 0; i < n - 1; i++) {
            if(a[i] > a[i + 1]) {
                for (int j = 0; j < m; j++) {
                    if((p[j] - 1) == i) {
                        int temp = a[i];
                        a[i] = a[i + 1];
                        a[i + 1] = temp;
                        if(i > 0) {
                            i-=2;
                        } else {
                            i = -1;
                        }
                        break;
                    }
                }
            }
        }

        bool ward = false;

        for (int i = 0; i < n - 1; i++) {
            if(a[i] > a[i + 1]) {
                ward = true;
                break;
            }
        }

        if(!ward) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

        t--;
    }
}