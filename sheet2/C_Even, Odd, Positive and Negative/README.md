# Even, Odd, Positive and Negative

time limit per test1 second
memory limit per test256 megabytes

## Instructions

Given N numbers. Count how many of these values are even, odd, positive and negative.

### Input
First line contains one number N (1 ≤ N ≤ 103) number of values.

Second line contains N numbers (-105 ≤ Xi ≤ 105).

### Output
Print four lines with the following format:

First Line: "Even: X", where X is the number of even numbers in the given input.

Second Line: "Odd: X", where X is the number of odd numbers in the given input.

Third Line: "Positive: X", where X is the number of positive numbers in the given input.

Fourth Line: "Negative: X", where X is the number of negative numbers in the given input.

## Example
Input
5
-5 0 -3 -4 12
Output
Even: 3
Odd: 2
Positive: 1
Negative: 3

### Note

First Example :

Even Numbers are : 0, -4 , 12

Odd Numbers are : -5 , -3

Positive Numbers are : 12

Negative Numbers are : -5 , -3 , -4

## solution

```
#include <iostream>
using namespace std;

int main(){
    int N, even = 0, odd = 0, positive = 0, negative = 0;
    long long temp;
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> temp;

        if(temp > 0) positive++;
        if(temp < 0) {negative++; temp = -1 * temp;}
        if(temp % 2 == 0) even++;
        if(temp % 2 == 1) odd++;
    }

    cout << "Even: " << even << endl
         << "Odd: " << odd << endl
         << "Positive: " << positive << endl
         << "Negative: " << negative;

    return 0;
}
```
