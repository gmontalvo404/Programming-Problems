#include <bits/stdc++.h>
#define for(i, a, b) for (int i=a; i<=b; i++)
#define endl '\n'
typedef long long ll;
typedef unsigned long long int ull;
using namespace std;

char image[250][250];
int M = 0, N = 0;

void refreshImage() {
    for(i, 1, N) {
        for(j, 1, M) {
            image[i][j] = 'O';
        }
    }
}

void caseI() {
    cin >> M >> N;
    refreshImage();
}

void caseC() {
    refreshImage();
}

void caseL() {
    int X, Y;
    char c;
    cin >> X >> Y >> c;
    image[Y][X] = c;
}

void caseV() {
    int X1, X2, Y;
    char c;
    cin >> Y >> X1 >> X2 >> c;

    if (X1 > X2) {
        swap(X1, X2);
    }

    for(X, X1, X2) {
        image[X][Y] = c;
    }
}

void caseH() {
    int X, Y1, Y2;
    char c;
    cin >> Y1 >> Y2 >> X >> c;

    if (Y1 > Y2) {
        swap(Y1, Y2);
    }

    for(Y, Y1, Y2) {
        image[X][Y] = c;
    }
}

void caseK() {
    int X1, X2, Y1, Y2;
    char c;
    cin >> Y1 >> X1 >> Y2 >> X2 >>  c;

    if (X1 > X2) {
        swap(X1 , X2);
    }

    if (Y1 > Y2) {
        swap(Y1, Y2);
    }

    for(i, X1, X2) {
        for(j, Y1, Y2) {
            image[i][j] = c;
        }
    }
}

bool indexOutOfBounds(int X, int Y) {
    return X < 1 || X > N || Y < 1 || Y > M;
}

void fillAdjacentsPixels(int X, int Y, char oldC, char newC) {
    if (image[X][Y] != oldC || indexOutOfBounds(X, Y) ){
        return;
    }

    image[X][Y] = newC;
    fillAdjacentsPixels(X - 1, Y, oldC, newC); //TOP
    fillAdjacentsPixels(X, Y + 1, oldC, newC); //RIGHT
    fillAdjacentsPixels(X + 1, Y, oldC, newC); //BOT
    fillAdjacentsPixels(X, Y - 1, oldC, newC); //LEFT
}

void caseF() {
    int X, Y;
    char c;
    scanf("%d %d %c", &Y, &X, &c);
    if (image[X][Y] != c) {
        fillAdjacentsPixels(X, Y, image[X][Y], c);
    }
}

void caseS() {
    string name;
    cin >> name;
    cout << name << endl;

    for(i, 1, N) {
        for(j, 1, M) {
            cout << image[i][j];
        }

        cout << endl;
    }
}

int main() {
    char c;
    while (cin >> c) {
        if (c == 'X') break;
        switch (c) {
            case 'I':
                caseI(); break;
            case 'C':
                caseC(); break;
            case 'L':
                caseL(); break;
            case 'V':
                caseV(); break;
            case 'H':
                caseH(); break;
            case 'K':
                caseK(); break;
            case 'F':
                caseF(); break;
            case 'S':
                caseS(); break;
            default: break;
        }
    }

    return 0;
}