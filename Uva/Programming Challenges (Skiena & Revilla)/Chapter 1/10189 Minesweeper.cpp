#include <bits/stdc++.h>
#define endl '\n'
typedef long long ll;
typedef unsigned long long int ull;

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M, field = 1;

    cin >> N >> M;

    while(true) {
        int board[N][M];

        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                char current;
                cin >> current;

                if(current == '*') {
                    board[i][j] =-1;
                } else {
                    board[i][j] = 0;
                }
            }
        }

        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                if(board[i][j] != -1) {
                    int j1 = j - 1;
                    int j2 = j + 1;
                    int t = 0;

                    if(i > 0) {
                        int c = i - 1;

                        if(board[c][j] == -1) {
                            t++;
                        }

                        if(j > 0 && board[c][j1] == -1) {
                            t++;
                        }

                        if(j2 < M && board[c][j2] == -1) {
                            t++;
                        }
                    }

                    if(i < N - 1) {
                        int c = i + 1;

                        if(board[c][j] == -1) {
                            t++;
                        }

                        if(j > 0 && board[c][j1] == -1) {
                            t++;
                        }

                        if(j2 < M && board[c][j2] == -1) {
                            t++;
                        }
                    }

                    if(j > 0 && board[i][j1] == -1) {
                        t++;
                    }

                    if(j2 < M && board[i][j2] == -1) {
                        t++;
                    }

                    board[i][j] += t;
                }
            }
        }

        printf("Field #%i:\n", field);

        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                if(board[i][j] == -1) {
                    printf("%c", '*');
                } else {
                    printf("%i", board[i][j]);
                }
            }

            printf("\n");
        }

        field++;
        cin >> N >> M;

        if(N != 0 && M != 0) {
            printf("\n");
        } else {
            break;
        }
    }
}