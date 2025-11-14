# Replacement

time limit per test1 second

memory limit per test256 megabytes

## Intstructions

Given a number N and an array A of N numbers. Print the array after doing the following operations:

Replace every positive number by 1.
Replace every negative number by 2.
### Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers (-105  ≤  Ai  ≤  105).

### Output
Print the array after the replacement and it's values separated by space.

## Example
Input

5

1 -2 0 3 4

Output

1 2 0 1 1

## soltion

```
#include <iostream>
using namespace std;

int main(){
    long long N;
    cin >> N;

    long long A[N];
    for(long long i = 0; i < N; i++) cin >> A[i];

    for(long long j = 0; j < N; j++){
        if(A[j] > 0) cout << "1 ";
        else if(A[j] < 0) cout << "2 ";
        else cout << "0 ";
    }
    return 0;
}
```
