#include <bits/stdc++.h>

#define endl '\n'
typedef long long ll;
typedef unsigned long long int ull;

using namespace std;

const string zero = " - | |   | | - ";
const string one = "     |     |   ";
const string two = " -   | - |   - ";
const string three = " -   | -   | - ";
const string four = "   | | -   |   ";
const string five = " - |   -   | - ";
const string six = " - |   - | | - ";
const string seven = " -   |     |   ";
const string eight = " - | | - | | - ";
const string nine = " - | | -   | - ";

const vector<string> numbers = {zero, one, two, three, four, five, six, seven, eight, nine};

string printLevel(int i, int s, string n) {
    string ss;
    if (i % 2 == 0) {
        for (int j = 0; j < n.size(); ++j) {
            int pos = n[j] - 48;
            string number = numbers.at(pos);

            if(j != 0) {
                ss += " ";
            }

            ss += number.at(i * 3);

            for (int l = 0; l < s; ++l) {
                ss += number.at(i * 3 + 1);
            }

            ss += number.at(i * 3 + 2);
        }
    } else {
        for (int l = 0; l < s; ++l) {
            for (int j = 0; j < n.size(); ++j) {
                int pos = n[j] - 48;
                string number = numbers.at(pos);

                if(j != 0) {
                    ss += " ";
                }

                ss += number.at(i * 3);

                for (int l = 0; l < s; ++l) {
                    ss += number.at(i * 3 + 1);
                }

                ss += number.at(i * 3 + 2);
            }

            if (l != s - 1) {
                ss += endl;
            }
        }
    }

    ss += endl;

    return ss;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int s = 1;
    string n, st;
    cin >> s >> n;

    while (true) {
        if (s == 0 && n == "0") {
            break;
        }

        for (int i = 0; i < 5; i++) {
            st += printLevel(i, s, n);
        }

        cin >> s >> n;


        st += endl;
    }

    cout << st;
}