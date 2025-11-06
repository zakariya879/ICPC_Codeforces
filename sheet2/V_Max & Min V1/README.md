# Max & Min V1

time limit per test1 second

memory limit per test256 megabytes

## Instructions

You are given n
 integers. Print Maximum and Minimum of all n
 numbers.

### Input
The first line contains an integer n
 (1≤n≤105)
, the number of elements.

The second line contains n
 integers (a1,a2,a3,....,an)
 (−107≤ai≤107)
.

### Output
In the first line, print "Maximum : " without quotes and Maximum number of all n
 numbers.

In the second line, print "Minimum : " without quotes and Minimum number of all n
 numbers.

## Examples

Input

5

1 2 3 4 5

Output

Maximum : 5

Minimum : 1


Input

3

-1 -10 2

Output

Maximum : 2

Minimum : -10

## solution

```
#include <iostream>
using namespace std;

int main()
{
    long long n, num, first, max, min;
    cin >> n >> first;

    max = first;
    min = first;

    for(int i = 1; i < n; i++){
        cin >> num;

        if(num > max) max = num;
        if(num < min) min = num;
    }

    cout << "Maximum : " << max << endl
         << "Minimum : " << min;

    return 0;
}
```
