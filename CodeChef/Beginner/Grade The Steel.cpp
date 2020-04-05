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

bool hardness(double value) {
    return value > 50;
}

bool carbon(double value) {
    return value < 0.7;
}

bool tensile(double value) {
    return value > 5600;
}

int gradeOfSteel(double x, double y, double z) {
    bool a = hardness(x);
    bool b = carbon(y);
    bool c = tensile(z);

    int grade = 5;
    if(a) {
        grade++;
        if(b) {
            grade += 3;
        }
        if(c) {
            grade++;
        }
    } else if(b) {
        grade++;

        if(c) {
            grade += 2;
        }
    } else if(c) {
        grade++;
    }

    return grade;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    double x, y, z;

    cin >> t;
    while(t--) {
        cin >> x >> y >> z;
        cout << gradeOfSteel(x, y, z) << ln;
    }
}