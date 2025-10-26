# Divisors

time limit per test1 second

memory limit per test256 megabytes

## Instructions

Given a number N. Print all the divisors of N in ascending order.

### Input
Only one line containing a number N (1 ≤ N ≤ 104).

### Output
Print all positive divisors of N, one number per line.

## Examples

Input

6

Output

1

2

3

6


Input

7

Output

1

7


Input

4

Output

1

2

4

### Note
Divisor of Number is A number that divides the integer exactly (no remainder).

In other words the division works perfectly with no fractions or remainders involved.

Examples:

3 is a divisor of 12, because 12 ÷ 3 = 4 exactly
4 is a divisor of 12, because 12 ÷ 4 = 3 exactly.
5 is not a divisor of 12, because 12 ÷ 5 = 2 with a remainder of 2.
a divisor is also a factor of the original integer.

## solution

```
#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    for(int i = 1; i <= N; i++){
        if(N % i == 0) cout << i << endl;
    }

    return 0;
}
```
