//https://www.codechef.com/problems/ONP

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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    string s;
    stack<char> stack;

    cin >> t;

    while(t--) {
        cin >> s;

        rep(i, 0, s.size()) {
            char c = s[i];
            if(c == ')') {
                cout << stack.top();
                stack.pop();
            } else if(c >= 'a' && c <= 'z') {
                cout << c;
            }
            else if(c != '(') {
                stack.push(c);
            }
        }

        cout << ln;
    }
}