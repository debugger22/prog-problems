/*
Problem Statement

Given two integers: L and R,

find the maximal values of A xor B given, L ≤ A ≤ B ≤ R

Input Format
The input contains two lines, L is present in the first line.
R in the second line.

Constraints
1 ≤ L ≤ R ≤ 103

Output Format
The maximal value as mentioned in the problem statement.
*/

#include <iostream>

using namespace std;

int maxXor(int l, int r) {
    int min, max;
    if(l < r){
        min = l; max = r;
    }else{
        min = r; max = l;
    }
    int maxm_xor = -1;
    int temp;
    for(int i=min; i<=max; i++){
        for(int j=i; j<=max; j++){
            temp = i^j;
            if(temp > maxm_xor) maxm_xor = temp;
        }
    }
    return maxm_xor;
}

int main() {
    int res;
    int _l;
    cin >> _l;

    int _r;
    cin >> _r;

    res = maxXor(_l, _r);
    cout << res;

    return 0;
}