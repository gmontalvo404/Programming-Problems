//
// Created by GMontalvo404 on 3/11/2020.
//

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool isPalindrome(string word);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string word;
    cin >> word;

    string drow = word;
    reverse(drow.begin(), drow.end());


    for(int i = word.length(); i > 0; i--) {
        string current = word + drow.substr(i);
        if(isPalindrome(current)) {
            cout << current;
            break;
        }
    }
}

bool isPalindrome(string word) {
    for (int i = 0; i < word.length() / 2; i++) {
        if(word.at(i) != word.at(word.length() - 1 - i)){
            return false;
        }
    }
    return true;
}