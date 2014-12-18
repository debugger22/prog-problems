/*
Problem Statement

There are N integers in an array A. All but one integer occur in pairs.
Your task is to find out the number that occurs only once.

Input Format

The first line of the input contains an integer N indicating number of integers.
The next line contains N space separated integers that form the array A.

Constraints

1 <= N < 100
N % 2 = 1 ( N is an odd number )
0 <= A[i] <= 100, ∀ i ∈ [1, N]

Output Format

Output S, the number that occurs only once.
*/

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

int lonelyinteger(vector < int > a) {
    sort(a.begin(), a.begin() + a.size());
    if(a.size() == 1) return a.at(0);
    for(int i=0; i < a.size()-2; i+=2){
        if(a.at(i) != a.at(i+1)){
            return a.at(i);
        }
    }
    return a.at(a.size() - 1);
}

int main() {
    int res;

    int _a_size;
    cin >> _a_size;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    vector<int> _a;
    int _a_item;
    for(int _a_i=0; _a_i<_a_size; _a_i++) {
        cin >> _a_item;
        _a.push_back(_a_item);
    }

    res = lonelyinteger(_a);
    cout << res;

    return 0;
}
