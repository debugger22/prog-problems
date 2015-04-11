"""
Sameera in her dreams goes to Magic Land. She notices three piles of coins.
She has a bag with her with 0 coins initially. She can only choose one pile
at a time. Since it is Magic Land, whenever she chooses a pile of X coins
(X>=1), the coins in her bag increase by X but only one coin gets reduced
from the pile. She repeats the operation N times.

Find the maximum coins she can take with her.

Input : First line of input consists of T, the number of test cases.
Second line of input consists of number of coins in the three piles
respectively, separated by space. Third line of input consist of a single integer N.

Output: Single line consisting of maximum coins she can take.

Constraints:
1<=T<=100 Each pile will contain coins between 1 and 50,
inclusive, initially. N will be between 1 and 150, inclusive.

Examples:

Example Input #1 :

1
3 4 5
3
Example Output #1:

13

The three numbers written on the blackboard are (3, 4, 5).
One possible optimal strategy is as follows:

Sameera chooses 5. She gains 5 points, and the numbers become (3, 4, 4).
Sameera chooses 4. She gains 4 points, and the numbers become (3, 3, 4).
Sameera chooses 4. She gains 4 points, and the numbers become (3, 3, 3).

Example Input #2 :

3
36 36 36
13
8  2  6 
13
3 5 48
40

Example Output #2 :

446
57
1140
"""

import sys
lines = []

for line in sys.stdin:
    lines.append(line)

cases = int(lines.pop(0))
for i in xrange(0, cases*2, 2):
    lines[i] = lines[i].strip()
    piles = map(int, lines[i].split(" "))
    n = int(lines[i + 1])
    coins = 0
    for j in xrange(n):
        _max = max(piles)
        _index = piles.index(_max)
        if _max >= 0:
            coins += _max
        else:
            continue
        if piles[_index] >= 1:
            piles[_index] -= 1
    sys.stdout.write(str(coins) + "\n")
