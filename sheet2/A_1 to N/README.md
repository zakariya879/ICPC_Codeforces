# 1 to N

time limit per test1 second

memory limit per test256 megabytes

## Instructions

Given a number N. Print numbers from 1 to N in separate lines.

### Input
Only one line containing a number N (1 ≤ N ≤ 103).

### Output
Print N lines according to the required above.

## Example

Input

5

Output

1

2

3

4

5

## solution

```
#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    for(int i = 1; i <= N; i++) cout << i << endl;

    return 0;
}
```
