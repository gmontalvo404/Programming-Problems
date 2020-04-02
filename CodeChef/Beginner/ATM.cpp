//https://www.codechef.com/problems/HS08TEST

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    double x, y;
    cin >> x >> y;

    if((int)x % 5 == 0 && (x + 0.5) < y) {
        y = y - (x + 0.5);
    }

    printf("%.2lf", y);
}

