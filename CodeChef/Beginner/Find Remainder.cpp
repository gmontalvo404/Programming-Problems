//https://www.codechef.com/problems/FLOW002

#include <bits/stdc++.h> 
using namespace std;

#define ln '\n'

int main() {
	int t, A, B;
    cin >> t;
    while (t--) {
        cin >> A >> B;
        cout << (A%B) << ln;
    }

	return 0;
}