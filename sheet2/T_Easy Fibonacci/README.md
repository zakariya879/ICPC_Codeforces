# Easy Fibonacci

time limit per test1 second

memory limit per test256 megabytes

## Instructions

Given a number N. Print first N numbers of the Fibonacci sequence.

Note: In order to create the Fibonacci sequence use the following function:

fib(1) = 0.
fib(2) = 1.
fib(n) = fib(n - 1) + fib(n - 2).
### Input
Only one line containing a number N (1 ≤ N ≤ 45).

### Output
Print the first N numbers from the Fibonacci Sequence .

## Example

Input

7

Output

0 1 1 2 3 5 8 

### Note
For more information visit Fibonacci: https://www.mathsisfun.com/numbers/fibonacci-sequence.html.

## soluion

```
#include <iostream>
using namespace std;

int main()
{
    int N, F1 = 0, F2 = 1;
    cin >> N;
    cout << "0 ";
    if(N >= 2) cout << "1 ";

    for(int i = 3; i <= N; i++){
        int F = F1 + F2;
        cout << F << " ";
        F1 = F2;
        F2 = F;
    }
    
    return 0;
}
```
