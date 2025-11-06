# Max & Min V2

time limit per test1 second

memory limit per test256 megabytes

## Instructions

You are given n
 integers. Print Position of Maximum Number and Position of Minimum Number of all n
 numbers.

If there are multiple maximum or minimum numbers, print the position of the first one.

### Input
The first line contains an integer n
 (1≤n≤105)
 the number of elements.

The second line contains n
 integers (a1,a2,a3,....,an)
 (−107≤ai≤107)
.

### Output
In the first line, print "Position of Maximum : " without quotes and Position of maximum number of all n
 numbers.

In the second line, print "Position of Minimum : " without quotes and Position of minimum number of all n
 numbers.

## Examples

Input

6

2 5 7 1 7 3

Output

Position of Maximum : 3

Position of Minimum : 4


Input

3

1 2 3

Output

Position of Maximum : 3

Position of Minimum : 1


Input

3

2 2 2

Output

Position of Maximum : 1

Position of Minimum : 1

### Note
Print position one index.

## solution

```
#include <iostream>
using namespace std;

int main()
{
    long long n, num, first, max, min, pos1 = 1, pos2 = 1;
    cin >> n >> first;

    max = first;
    min = first;

    for(int i = 2; i <= n; i++){
        cin >> num;

        if(num > max){
            max = num;
            pos1 = i;
        }
        if(num < min){
            min = num;
            pos2 = i;
        }
    }

    cout << "Position of Maximum : " << pos1 << endl
         << "Position of Minimum : " << pos2;

    return 0;
}
```
