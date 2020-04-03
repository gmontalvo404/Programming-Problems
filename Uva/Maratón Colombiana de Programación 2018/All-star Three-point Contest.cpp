//https://www.codechef.com/problems/PALL01

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

struct Player {
    string name;
    int points;
};

bool sortPlayers(Player a, Player b) {
    if(a.points != b.points) {
        return a.points > b.points;
    } else {
        string name1 = a.name;
        string name2 = b.name;

        transform(name1.begin(), name1.end(), name1.begin(), ::toupper);
        transform(name2.begin(), name2.end(), name2.begin(), ::toupper);

        return name2 > name1;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int ncase = 1;
    while(getline(cin, s) && !s.empty()) {
        vector<Player> players;
        int n = stoi(s);

        while(n--) {
            getline(cin, s);
            string name;
            int points = 0;

            rep(i, 0, s.size()) {
                if(s[i] == ';') break;
                name += s[i];
            }

            rep(i, name.size() + 1, s.size()) {
                if(s[i] == '1') points++;
                if(s[i] == ';' && s[i - 1] == '1') points++;
            }

            if(s.back() == '1') points++;

            Player player = {name, points};
            players.push_back(player);
        }

        sort(players.begin(), players.end(), sortPlayers);
        printf("Case %d:\n", ncase);
        rep(i, 0, players.size()) {
            printf("%s %d\n", players.at(i).name.c_str(), players.at(i).points);
        }
        ncase++;
    }
}