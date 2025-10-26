# Numbers Histogram

time limit per test1 second

memory limit per test256 megabytes

## Instructions

Given 3 lines of input described as follow:

First line contains a symbol S
.
Second line contains a number N
.
Third line contains N
 numbers.
For each number Xi
 in the N
 numbers print a new line that contains the symbol S
 repeated Xi
 time.

### Input
The first line contains a symbol S
 can be (+,−,∗,/)
.

The second line an number N
 (1≤N≤50)
.

The third line contains N
 numbers (1≤Xi≤100)
.

### Output
Print the answer required above.

## Example

Input

+

5

5 2 4 3 7

Output

+++++

++

++++

+++

+++++++

### Note
Don't print any extra spaces after symbol S
.

## solution

```
#include <iostream>
using namespace std;

int main(){
    char S;
    int N, X;
    cin >> S >> N;

    for(int i = 0; i < N; i++){
        cin >> X;
        for(int j = 0; j < X; j++){
            cout << S;
        }
        cout << endl;
    }

    return 0;
}
```
