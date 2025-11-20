# Shift Right

time limit per test1 second

memory limit per test256 megabytes

## Instructions

Given an array A
 of size N
 and a number X
. Print the array elements after shifting right the elements X
 times.

For example: if A
 = [1, 2, 3] then after shifting it to the right for 1 time A
 = [3, 1, 2].

Note: Solve this problem using function.

### Input
First line will contain two number N
 and X
 (1≤N≤104,1≤X≤100)
.

Second line will contain N
 number (1≤Ai≤105)
.

### Output
Print the array after shifting right its elements X
 times.

## Examples
Input

2 2

2 1

Output

2 1 


Input

5 21

1 2 3 4 5

Output

5 1 2 3 4 

## solution

```
#include <iostream>
using namespace std;

void shift_right(long long arr[], int N, int X){
    X = X % N;
    if(X == 0) return;

    long long temp[N];
    for(int i = 0; i < N; i++){
        temp[(i + X) % N] = arr[i];
    }

    for(int i = 0; i < N; i++){
        arr[i] = temp[i];
    }
}

int main(){
    int N, X;
    cin >> N >> X;

    long long arr[N];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    shift_right(arr, N, X);
    for(int j = 0; j < N; j++){
        cout << arr[j] << " ";
    }

    return 0;
}
```
