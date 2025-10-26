# Shape1

time limit per test1 second

memory limit per test256 megabytes

## Insturctions

Given a number N. Print a face down right angled triangle that has N rows.

For more clarification see the example below.

### Input
Only one line containing a number N (1 ≤ N ≤ 99).

### Output
Print the answer according to the required above.

## Example

Input

4

Output

****

***

**

*

### Note
Don't print any extra spaces after symbol " * ".

## solution

```
#include <iostream>
using namespace std;

int main(){
    int N, C = 0;
    cin >> N;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N - C; j++){
            cout << "*";
        }
        C++;
        cout << endl;
    }

    return 0;
}
```
