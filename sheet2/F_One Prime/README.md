# One Prime

time limit per test3 seconds

memory limit per test64 megabytes

## Instructions

Given a number X. Determine if the number is prime or not

Note:

A prime number is a number that is greater than 1 and has only two factors which are 1 and itself.

In other words : prime number divisible only by 1 and itself.

Be careful that 1 is not prime .

The first few prime numbers are


### Input
Only one line containing a number X (2 ≤ X ≤ 105).

### Output
print "YES" if the number is prime and "NO" otherwise.

## Examples

Input
7

Output
YES


Input
15

Output
NO

### Note

First Example :

7 is prime because it is not divisible by 2,3,4,5,6, and only divisible by 1 and itself, so the answer is YES.

Second Example :

15 not is prime because it is divisible by 3 ,5, so the answer is NO.

## solution

```
#include<iostream>
using namespace std;

int main()
{
    long long X;
    bool flag = 1;
    cin >> X;
    
    if(X == 2){
        cout << "YES";
        return 0;
    }
    
    if(X % 2 == 0 || X < 2){
        cout << "NO";
        return 0;
    }
    
    for(int i = 3; i * i <= X; i++){
        if(X % i == 0){
                cout << "NO";
                return 0;
        }
    }
    
    cout << "YES";
    
    return 0;
}
```
