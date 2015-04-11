/*
You'll be given a number n, which would be followed by n lines of numbers
A1, A2, .... , An.

If Ai == 0 : You have to print the maximum amongst all the numbers seen till now.
   Ai == -1 : Delete the last element. (i.e this element wouldn't be considered
from now on)
Note that 0, -1, wouldn't be added to the pool of numbers which you are using to
find the maximum or deletion.


Constraints

n <= 10^6
Ai <= 10^9


Input Format

First line would contain n, n lines would follow consisting of A1, A2 ... An.
(One in each line)


Output Format

For each 0 encountered print the maximum element from the pool.
(Ignoring 0 and -1 that you have seen). For each -1 encountered delete the
last element from the pool.

Note that the answer to each 0 and -1 queries should be printed in a new line.

Sample Input

10
5
0
-1
10
7
0
12
0
-1
0
Sample Output

5
10
12
10

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int cases, temp, maxm;
    cin >> cases;
    vector<int> data;
    for(int i=0; i < cases; i++){
        cin >> temp;
        if(i==0) maxm = temp;
        if(temp > maxm) maxm = temp;
        if(temp != 0 && temp != -1){
            data.push_back(temp);
        }else if(temp == 0){
            cout << maxm << "\n";
        }else if(temp == -1){
            if(data.at(data.size() - 1) == maxm){
                data.erase(data.end() - 1, data.end());
                maxm = *max_element(data.begin(), data.end());
            }
        }
    }
    return 0;
}
