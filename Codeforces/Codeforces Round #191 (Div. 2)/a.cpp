#include <bits/stdc++.h>
#define endl
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, a, maxOnes = 0;

    vector<pair<int, int>> couples;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a;
        maxOnes += a;

        if(couples.size() > 0 && couples.back().first == a) {
            couples.back().second++;
        } else {
            couples.push_back({a, 1});
        }
    }

    if(maxOnes == n) {
        cout << maxOnes - 1;
    }
    else {
        int maxPoint = 0;

        for(int i = 0; i < couples.size(); i++) {
            int x = 0, y = 0;
            for (int j = i; j < couples.size(); ++j) {
                pair<int, int> currentCouple = couples.at(j);

                if(i % 2 == 0) {
                    if(currentCouple.first == 1) {
                        x += currentCouple.second;
                    } else {
                        y += currentCouple.second;
                    }
                } else {
                    if(currentCouple.first == 0) {
                        y += currentCouple.second;
                    } else {
                        x += currentCouple.second;
                    }
                }

                int currentPoint = y - x;
                if(currentPoint > maxPoint) {
                    maxPoint = currentPoint;
                }
            }
        }

        if(maxPoint > 0) {
            maxOnes += maxPoint;
        }

        cout << maxOnes;
    }
}