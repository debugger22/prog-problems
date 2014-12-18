/*
Problem Statement

Roy wanted to increase his typing speed for programming contests.
So, his friend advised him to type the sentence "The quick brown fox jumps
over the lazy dog" repeatedly because it is a pangram. ( pangrams are
sentences constructed by using every letter of the alphabet at least once. )

After typing the sentence several times, Roy became bored with it. So he
started to look for other pangrams.

Given a sentence s, tell Roy if it is a pangram or not.

Input Format

Input consists of a line containing s.

Constraints
Length of s can be atmost 10**3 (1≤|s|≤10**3) and it may contain spaces,lowercase and
uppercase letters. Lowercase and uppercase instances of a letter are considered same.

Output Format

Output a line containing pangram if s is a pangram, otherwise output not pangram.

Sample Input #1
*/

#include <cmath>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::tolower);  // Converting to lower case
    sort(s.begin(), s.end());  // Sorting chars
    s.erase(unique(s.begin(), s.end()), s.end());  // Removing duplicate characters

    // Removing space char if present at the beginning
    if(s.at(0) == ' '){
        s.erase(s.begin(), s.begin() + 1);
    }

    if(s == "abcdefghijklmnopqrstuvwxyz"){
        cout << "pangram";
    }else{
        cout << "not pangram";
    }
    return 0;
}