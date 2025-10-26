# Digits

time limit per test1 second

memory limit per test256 megabytes

## Instructions

Given a number N. Print the digits of that number from right to left separated by space.

### Input
First line contains a number T (1 ≤ T ≤ 10) number of test cases.

Next T lines will contain a number N (0 ≤ N ≤ 109)

### Output
For each test case print a single line contains the digits of the number separated by space.

## Example

Input

4

121

39

123456

1200

Output

1 2 1

9 3

6 5 4 3 2 1

0 0 2 1

## solution

```
#include <iostream>
using namespace std;

int main(){
    long long T, X, D = 10;
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> X;
        while(1){                   // to check how many digits X has 
            if((X / D) == 0) break;
            D *= 10;
        }

        for(int j = 1; j <= D / 10; j *= 10){ // D / 10 ==> عشان اعرف الرقم من الدرجة كام
            cout << (X / j) % 10 << " ";
        }

        D = 10;
        cout << endl;
    }

    return 0;
}
```
