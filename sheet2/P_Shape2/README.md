# Shape2

time limit per test1 second

memory limit per test256 megabytes

## Instructions

Given a number N. Print a pyramid that has N rows.

For more clarification see the example below.

### Input
Only one line containing a number N (1 ≤ N ≤ 99).

### Output
Print the answer according to the required above.

## Example

Input

4

Output

   *

  ***

 *****

*******

### Note
Don't print any extra spaces after symbol " * ".

## solution

```
#include <iostream>
using namespace std;

int main()
{
    // St = the number of stars at the last row
    // Sp = the number of spaces at the first row
    int N, St, Sp;
    cin >> N;
    St = 2 * N - 1;
    Sp = (St - 1) / 2;

    for(int i = 1; i <= N; i++){
        for(int j = Sp; j > 0; j--){
            cout << " ";
        }
        Sp--;

        for(int k = 0; k < 2 * i - 1; k++){
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}
```
