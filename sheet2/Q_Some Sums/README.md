# Some Sums

time limit per test2 seconds

memory limit per test256 megabytes

## Instructions

Given three numbers N, A, B. Print the summation of the numbers between 1 and N whose sum of digits is between A and B inclusive.

### Input
Only one line containing three numbers N, A, B (1 ≤ N ≤ 104, 1 ≤ A ≤ B ≤ 36).

### Output
Print a single line contains the answer according to the required above.

## Examples

Input

20 2 5

Output

84


Input

10 1 2

Output

13


Input

100 4 16

Output

4554

Note

In the first simple:

Among the numbers not greater than 20, the numbers whose sums of digits are between 2 and 5, are: 2,3,4,5,11,12,13,14 and 20.

So the answer is: 84.

## solution

```
#include <iostream>
using namespace std;

int main()
{
    long long N, A, B,sum = 0, temp = 0;
    string S;
    cin >> N >> A >> B;

    for(int i = 1; i <= N; i++){
        S = to_string(i);

        for(int j : S) temp += j - '0';
        if(temp >= A && temp <= B) sum += i;
        temp = 0;
    }

    cout << sum;
    
    return 0;
}
```
