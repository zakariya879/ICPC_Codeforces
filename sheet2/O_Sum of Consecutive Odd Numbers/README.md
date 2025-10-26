# Sum of Consecutive Odd Numbers

time limit per test1 second

memory limit per test256 megabytes

## Instructions

Given two numbers X and Y. Print the sum of all odd numbers between them, excluding X and Y.

### Input
First line contains a number T (1 ≤ T ≤ 10) number of test cases.

Next T lines will contain two numbers X and Y (0 ≤ X, Y ≤ 104).

### Output
Print the sum of all odd numbers between X and Y (excluding X and Y).

## Example

Input

3

5 6

10 4

4 9

Output

0

21

12

## solution

```
#include <iostream>
using namespace std;

int main()
{
    long long T, X, Y, sum = 0;
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> X >> Y;
        if(X < Y){
            for(int j = X + 1; j < Y; j++){
                if(j % 2) sum += j;
            }
            cout << sum << endl;
            sum = 0;
        }
        else if(Y < X){
            for(int k = Y + 1; k < X; k++){
                if(k % 2) sum += k;
            }
            cout << sum << endl;
            sum = 0;
        }
        else cout << "0" << endl;
    }
    
    return 0;
}
```
