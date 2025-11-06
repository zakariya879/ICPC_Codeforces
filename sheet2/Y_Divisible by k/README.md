# Divisible by k ?

time limit per test1 second

memory limit per test256 megabytes

## Instructions

AbdElkareem will give you an integer k
 and want to know how many number from l
 to r
 inclusive is divisible by k
 .

### Input
in first and only line contains three integers l,r,k
 (1≤l≤r≤100000),(1≤k≤100000)
 .

### Output
Print how many number from l
 to r
 inclusive is divisible by k
 .

## Example

Input

1 10 2

Output

5

### Note
in first test case we have 2 , 4 , 6 , 8 , 10 is divisible by 2 so the answer is 5 .

## solution

```
#include <iostream>
using namespace std;

int main()
{
    long long l, r, k, counter = 0;
    cin >> l >> r >> k;
    
    for(int i = l; i <= r; i++){
        if(i % k == 0) counter++;
    }
    
    cout << counter;
    
    return 0;
}
```
