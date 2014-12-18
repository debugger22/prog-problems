/*
Problem Statement

Shashank likes strings in which consecutive characters are different. For example, he likes ABABA, while he doesn't like ABAA. Given a string containing characters A and B only, he wants to change it into a string he likes. To do this, he is allowed to delete the characters in the string.

Your task is to find the minimum number of required deletions.

Input Format
The first line contains an integer T i.e. the number of test cases.
Next T lines contain a string each.

Output Format
Print minimum number of required steps for each test case.

Constraints

1 ≤ T ≤ 10
1 ≤ lengthofString ≤ 105
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    short int cases;
    string test_str;
    cin >> cases;
    for(short int i=0; i < cases; i++){
        cin >> test_str;
        int deletions = 0;
        for(int j=1; j < test_str.length(); j++){
            if(test_str.at(j-1) == test_str.at(j)){
                deletions++;
            }
        }
        cout << deletions << endl;
    }
    return 0;
}
