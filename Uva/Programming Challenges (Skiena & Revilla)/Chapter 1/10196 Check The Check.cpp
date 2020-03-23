#include <bits/stdc++.h>
#define for(i, n) for (int i=0; i<n; i++)
#define for2(i, a, b) for (int i=a; i<b; i++)
#define endl '\n'
#define read(a, b) cin >> a >> b
typedef long long ll;
typedef unsigned long long int ull;

using namespace std;

char board[8][8];
int player = 0;
pair<int, int> K = {-1, -1};
pair<int, int> k = {-1, -1};
vector<pair<int, int>> white;
vector<pair<int, int>> black;

bool pawn(pair<int, int> cp, pair<int, int> king) {
    bool result = abs(king.first - cp.first) == 1 && abs(king.second - cp.second) == 1;

    if(result) {
        if(player == -1 && cp.first < king.first) {
            return true;
        } else if(player == 1 && cp.first > king.first) {
            return true;
        }
    }

    return false;
}

bool rook(pair<int, int> cp, pair<int, int> king) {
    char c = '.';
    if(cp.first == king.first) {
        int j = cp.second;
        int value = 0;
        if(cp.second > king.second){
            value = -1;
        } else {
            value = 1;
        }

        while(c == '.') {
            j += value;
            c = board[cp.first][j];
        }
    } else if(cp.second == king.second) {
        int i = cp.first;
        int value = 0;
        if(cp.first > king.first){
            value = -1;
        } else {
            value = 1;
        }

        while(c == '.') {
            i += value;
            c = board[i][cp.second];
        }
    } else {
        return false;
    }

    return c == board[king.first][king.second];
}

bool bishop(pair<int, int> cp, pair<int, int> king) {
    int x = cp.second - king.second;
    int y = cp.first - king.first;
    bool result = abs(x) ==  abs(y);
    char c = '.';
    int i = cp.first, j = cp.second;
    int valueI, valueJ;

    if(result) {
        if(cp.first > king.first) {
            valueI = -1;
        } else {
            valueI = 1;
        }

        if(cp.second > king.second) {
            valueJ = -1;
        } else {
            valueJ = 1;
        }

    } else {
        return false;
    }

    while(c == '.') {
        i += valueI;
        j += valueJ;
        c = board[i][j];
    }

    return c == board[king.first][king.second];
}

bool queen(pair<int, int> cp, pair<int, int> king) {
    return bishop(cp, king) || rook(cp, king);
}

bool king(pair<int, int> cp, pair<int, int> king) {
    bool x = abs(king.first - cp.first) == 1 && abs(king.second - cp.second) == 0;
    bool y = abs(king.first - cp.first) == 0 && abs(king.second - cp.second) == 1;

    return x || y;
}

bool knight(pair<int, int> cp, pair<int, int> king) {
    bool x = abs(king.first - cp.first) == 1 && abs(king.second - cp.second) == 2;
    bool y = abs(king.first - cp.first) == 2 && abs(king.second - cp.second) == 1;

    return x || y;
}

int solve() {
    bool check = false;

    for(i, 2) {
        int currentPlayer;
        vector<pair<int, int>> cpPlayer;
        pair<int, int> curentKing = k;

        if(i == 0) {
            player = 1;
            cpPlayer = white;
            curentKing = k;
        } else {
            player = -1;
            cpPlayer = black;
            curentKing = K;
        }

        currentPlayer = player;

        for(j, cpPlayer.size()) {
            pair<int, int> cp = cpPlayer.at(j);
            char c = board[cp.first][cp.second];

            if(c < 97) {
                c += 32;
            }

            switch (c) {
                case 'p':
                    check = pawn(cp, curentKing);
                    break;
                case 'r':
                    check = rook(cp, curentKing);
                    break;
                case 'b':
                    check = bishop(cp, curentKing);
                    break;
                case 'q':
                    check = queen(cp, curentKing);
                    break;
                case 'k':
                    check = king(cp, curentKing);
                    break;
                case 'n':
                    check = knight(cp, curentKing);
                    break;
                default:
                    break;
            }

            if(check) {
                return player;
            }
        }
    }

    return 0;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    vector<int> results;

    while (true) {
        for(i, 8) {
            cin >> s;
            for(j, 8) {
                char c = s[j];
                board[i][j] = c;

                if(c != '.') {
                    if(c == 'k') {
                        k.first = i;
                        k.second = j;
                    }
                    else if(c == 'K') {
                        K.first = i;
                        K.second = j;
                    } else {
                        pair<int, int> pos = {i, j};
                        if(c < 91) {
                            white.push_back(pos);
                        } else {
                            black.push_back(pos);
                        }
                    }
                }
            }
        }

        if(K.first == -1 && K.second == -1 &&
            (k.first == -1 && k.second == -1)) {
            break;
        }

        int result = solve();
        results.push_back(result);

        K = {-1, -1};
        k = {-1, -1};
        white.clear();
        black.clear();
        player = 0;
    }

    int game, result;
    for(i, results.size()) {
        result = results.at(i);
        game = i + 1;

        if(result == 1) {
            printf("Game #%d: black king is in check.\n", game);
        } else if(result == -1) {
            printf("Game #%d: white king is in check.\n", game);
        } else {
            printf("Game #%d: no king is in check.\n", game);
        }
    }

    return 0;
}