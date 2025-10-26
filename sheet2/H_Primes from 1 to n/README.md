# Primes from 1 to n

time limit per test3 seconds

memory limit per test256 megabytes

## Instuctions

Given a number N
. Print all prime numbers between 1 and N
 inclusive.

A prime number is a number that is greater than 1 and has only two factors which are 1 and itself.

In other words : prime number divisible only by 1 and itself.

Be careful that 1 is not prime .

The first few prime numbers are


### Input
Only one line containing a number N
 (2≤N≤103)
.

### Output
Print all prime numbers between 1 and N
 (inclusive) separated by a space.

## Example

Input

10

Output

2 3 5 7 

## solution

```
#include <iostream>
using namespace std;

int main(){
    int N;
    bool flag = 1;
    cin >> N;

    for(int i = 2; i <= N; i++){
        for(int j = 2; j * j <= i; j++){
            if(i % j == 0) flag = 0;
        }
        if(flag) cout << i << " ";
        flag = 1;
    }

    return 0;
}
```
