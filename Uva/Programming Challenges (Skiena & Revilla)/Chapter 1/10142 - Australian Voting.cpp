//https://www.codechef.com/problems/FLOW014

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

struct candidate {
    string name;
    int votes;
    bool eliminated;
};

void solve() {
    int n;
    scanf("%d", &n);

    vector<candidate> candidates;
    vector<vector<int>> votes;
    string name, line;
    getline(cin, line);

    rep(i, 0, n) {
        getline(cin, name);
        candidate cc = {name, 0, false};
        candidates.push_back(cc);
    }

    getline(cin, line);

    while(line != "") {
        vector<int> ccVotes;
        stringstream  ss(line);
        int temp;
        ccVotes.push_back(1);
        while (ss >> temp) {
            ccVotes.push_back(temp);
        }
        votes.push_back(ccVotes);

        if(cin.eof()) {
            break;
        }

        getline(cin, line);
    }

    if(candidates.size() == 1) {
        cout << candidates.at(0).name << ln;
        return;
    }

    int middle = ceil((double) votes.size()/ 2.0);
    int minN = INT_MAX, maxN = -1;

    while(true) {
        minN = INT_MAX, maxN = -1;

        rep(i, 0, votes.size()) {
            int pos  = votes.at(i).front();
            int voteCc = votes.at(i).at(pos);
            candidates.at(voteCc - 1).votes++;
        }

        rep(i, 0, n) {
            if(!candidates.at(i).eliminated) {
                minN = min(minN, candidates.at(i).votes);
                maxN = max(maxN, candidates.at(i).votes);
            }
        }

        if(minN == maxN || maxN > middle) {
            break;
        } else {
            rep(i, 0, n) {
                int cVotes = candidates.at(i).votes;
                if(cVotes == minN) {
                    candidates.at(i).eliminated = true;
                }

                candidates.at(i).votes = 0;
            }

            rep(i, 0, votes.size()) {
                int pos  = votes.at(i).front();
                int voteCc;
                candidate cc;

                while(true) {
                    voteCc = votes.at(i).at(pos);
                    cc = candidates.at(voteCc - 1);
                    if(!cc.eliminated) {
                        break;
                    }
                    pos++;
                }
                votes.at(i).front() = pos;
            }
        }
    }

    rep(i, 0, n) {
        if(candidates.at(i).votes == maxN && !candidates.at(i).eliminated) {
            cout << candidates.at(i).name << ln;
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);

    rep(i, 0, t) {
        solve();

        if(i + 1 != t) {
            cout << ln;
        }
    }

    return 0;
}