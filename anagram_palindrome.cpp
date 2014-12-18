/*
Problem Statement

King Robert has 7 kingdoms under his rule. He finds out from a raven that the Dothraki
are soon going to wage a war against him. But, he knows the Dothraki need to cross the
Narrow River to enter his realm. There is only one bridge that connects both banks of
the river which is sealed by a huge door.

The king wants to lock the door so that the Dothraki can't enter.
But, to lock the door he needs a key that is an anagram of a certain palindrome string.

The king has a string composed of lowercase English letters. Help him figure out if any
anagram of the string can be a palindrome or not.

Input Format
A single line which contains the input string

Constraints
1<=length of string <= 10^5
Each character of the string is a lowercase English letter.

Output Format
A single line which contains YES or NO in uppercase.

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <iterator>
using namespace std;

int countFrequency(char c, string str){
    int count = 0;
    for(int i = 0; i < str.length(); i++){
        if(str.at(i) == c) count++;
    }
    return count;
}

int main() {
    string s;
    cin >> s;
    string arr = s;
    sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin(), arr.end()),arr.end());
    sort(s.begin(), s.end());
    int flag = 0;
    long int str_length = s.length();
    bool even = false;
    if(str_length % 2 == 0) even = true;
    if(even){
        for(int i=0; i < arr.length(); i++){
            if(countFrequency(arr.at(i), s) % 2 != 0){
                flag = 0;
                break;
            }else{
                flag = 1;
            }
        }
    }else{
        int odd_char_count = 0;
        for(int i=0; i < arr.length(); i++){
            if(countFrequency(arr.at(i), s) % 2 != 0){
                odd_char_count++;
                if(odd_char_count > 1){
                    flag = 0;
                    break;
                }
            }else{
                flag = 1;
            }
        }
    }
    if(flag==0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}


/*
This is one of my favorite problems.
*/