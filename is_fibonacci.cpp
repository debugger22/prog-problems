/*
Problem Statement
You are given an integer, N. Write a program to determine if N is an element of
the Fibonacci Sequence.
The first few elements of Fibonacci sequence are 0,1,1,2,3,5,8,13....
A Fibonacci sequence is one where every element is a sum of the previous
two elements in the sequence. The first two elements are 0 and 1.
Formally:

fib0 = 0
fib1 = 1
fibn = fibn-1 + fibn-2 ∀ n > 1

Input Format

The first line contains T, number of test cases.
T lines follows. Each line contains an integer N.

Output Format
Display IsFibo if N is a Fibonacci number and IsNotFibo if it is not a Fibonacci number.
The output for each test case should be displayed in a new line.

Constraints
1 <= T <= 105
1 <= N <= 1010
*/

#include <cmath>
#include <cstdio>
#include <iostream>

using namespace std;

/**
* This function tests whether passed number is a perfect square or not.
*/
bool isPerfectSquare(double number){
    double d_sqrt = sqrt(number);
    long long int i_sqrt = d_sqrt;
    return d_sqrt == i_sqrt;
}

/**
* For a Fibonacci number n, either of (5*n*n + 4) or (5*n*n - 4) is a perfect square.
* This function uses this property of Fibonacci number to test whether passed number
* belongs to Fibonacci sequence or not.
*/
bool isFibonacci(double number){
    return isPerfectSquare(5*number*number + 4) || isPerfectSquare(5*number*number - 4);
}

int main() {
    long cases;
    double number;
    cin >> cases;
    for(long i=0; i < cases; i++){
        cin >> number;
        bool data = isFibonacci(number);
        if(data) cout << "IsFibo" << endl;
        else cout << "IsNotFibo" << endl;
    }
    return 0;
}
