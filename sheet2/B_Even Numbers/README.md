# Even Numbers

time limit per test1 second

memory limit per test256 megabytes

## Instruction

Given a number N. Print all even numbers between 1 and N inclusive in separate lines.

### Input
Only one line containing a number N (1 ≤ N ≤ 103).

### Output
Print the answer according to the required above. If there are no even numbers print -1.

## Examples

Input

10

Output

2

4

6

8

10


Input
5

Output
2
4

## solution

```
#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    if(N < 2) cout << "-1";
    else for(int i = 2; i <= N; i += 2) cout << i << endl;

    return 0;
}
```
