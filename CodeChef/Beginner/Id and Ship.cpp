//https://www.codechef.com/problems/FLOW010

#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, n) for (int i = a; i < n; i++)
#define rev(i, n, a) for (int i = n; i >= a; i--)
#define ln '\n'
#define space ' '

typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> VI;
typedef vector<ll> VLL;
typedef vector<ull> VULL;
typedef pair<int, int> PII;

string shipClass[5] = {"BattleShip", "Cruiser", "Destroyer", "", "Frigate"};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    char c;
    cin >> t;

    while(t--) {
        cin >> c;
        c = tolower(c);
        cout << shipClass[c - 'b'] << ln;
    }
}