/*
Problem Statement

Bill Gates is on one of his philanthropic journeys to a village in Utopia.
He has N packets of candies and would like to distribute one packet to each
of the K children in the village (each packet may contain different number of candies).
To avoid any fighting among the children, he would like to pick K out of N
packets, such that unfairness is minimized.

Suppose the K packets have (x1, x2, x3,....xk) candies in them, where xi denotes
the number of candies in the ith packet, then we define unfairness as

max(x1,x2,...xk) - min(x1,x2,...xk)

where max denotes the highest value amongst the elements, and min denotes the least
value amongst the elements. Can you figure out the minimum unfairness and print it?

Input Format

The first line contains an integer N.
The second line contains an integer K. N lines follow. Each line contains an
integer that denotes the candy in the ith packet.

Output Format
An integer that denotes the minimum possible value of unfairness.

Constraints
1<=N<=10**5
1<=K<=N
0<= number of candies in any packet <=10**9
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    long long int N, K, unfairness;
    cin >> N >> K;
    double temp;
    vector<double> candies;

    for (int i=0; i<N; i++){
        cin >> temp;
        candies.push_back(temp);
    }

    sort(candies.begin(), candies.begin() + N);

    unfairness = 10000000000;
    for(int i=0; i <= N-K; i++){
        long long int cmp_unfairness = *max_element(candies.begin() + i, candies.begin() + i + K)
            - *min_element(candies.begin() + i, candies.begin() + i + K);
        if(cmp_unfairness < unfairness) unfairness = cmp_unfairness;
    }

    cout << unfairness << "\n";
    return 0;
}
