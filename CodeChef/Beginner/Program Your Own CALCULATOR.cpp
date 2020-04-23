//https://www.codechef.com/problems/URCALC

#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, n) for (int i = a; i < n; i++)
#define rev(i, n, a) for (int i = n; i >= a; i--)
#define ln '\n'

typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> VI;
typedef vector<ll> VLL;
typedef vector<ull> VULL;
typedef pair<int, int> PII;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    double a, b, ans;
    char c;
    scanf("%lf\n%lf\n%c", &a, &b, &c);
    if(c == '+') ans = a + b;
    else if(c == '-') ans = a - b;
    else if(c == '*') ans = a * b;
    else if(c == '/') ans = (double) a / b;

    printf("%lf", ans);

    return 0;
}