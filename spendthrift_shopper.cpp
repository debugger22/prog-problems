/*
You have the prices of n dresses arranged in a line.
You have to select any number of dresses such as to get
the max sum of prices. But, You cannot choose adjacent dresses.

Input Format

First line contains an integer n. The next line contains n integers
which denote the prices of the n dresses.

Example: 4 3 4 5 10

Constraints: n <= 100000 each of the prices < 10e9

Output Format

One integer which is the max price you could obtain by choosing
the set of dresses optimally.

Sample Input

4
3 4 5 10

Sample Output

14

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int get_sum(int *arr, int arr_size) {
    int sum[arr_size];

    for(int i=0; i < arr_size; i++){
        if(i == 0)
            sum[0] = arr[0];
        else if(i == 1)
            sum[1] = max(sum[0],arr[1]);
        else
            sum[i] = max(sum[i-2] + arr[i], sum[i - 1]);
    }
    return sum[arr_size - 1];
}

int main() {
    int cases;
    cin >> cases;
    int arr[cases];
    for(int i=0; i<cases; i++){
        int temp;
        cin >> temp;
        arr[i] = temp;
    }
    int result = get_sum(arr, cases);
    cout << result;
    return 0;
}
