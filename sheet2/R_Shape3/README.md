# Shape3

time limit per test1 second

memory limit per test256 megabytes

## Instructions

Given a number N. Print a diamond that has 2N rows.

For more clarification see the example below.

### Input
Only one line containing number N (1 ≤ N ≤ 99).

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

*******

 *****

  ***

   *

### Note
Don't print any extra spaces after symbol " * ".

## solution

```
#include <iostream>
using namespace std;

int main()
{
    int N, St, Sp, temp1_Sp, temp2_Sp;
    cin >> N;
    Sp = N - 1;
    temp1_Sp = Sp;
    temp2_Sp = 0;

    for(int i = 1; i <= N; i++){
        for(int j = temp1_Sp; j > 0; j--){
            cout << " ";
        }
        temp1_Sp--;

        for(int k = 0; k < 2 * i - 1; k++){
            cout << "*";
        }
        cout << endl;
    }

    for(int n = N; n >= 1; n--){
        for(int m = 0; m < temp2_Sp; m++){
            cout << " ";
        }
        temp2_Sp++;

        for(int g = 2 * n - 1; g >= 1; g--){
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}
```
