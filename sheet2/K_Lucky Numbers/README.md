# Lucky Numbers

time limit per test1 second

memory limit per test256 megabytes

## Instructions

Given two numbers A
 and B
. Print all lucky numbers between A
 and B
 inclusive.

### Note:

The Lucky number is any positive number that its decimal representation contains only 4 and 7.

For example: numbers 4, 7, 47 and 744 are lucky and numbers 5, 17 and 174 are not.

### Input
Only one line containing two numbers A
 and B
 (1≤A≤B≤105)
.

### Output
Print all lucky numbers between A
 and B
 inclusive separated by a space. If there is no lucky number print -1.

## Examples

Input

4 20

Output

4 7 


Input

8 15

Output

-1

## solution

```
#include <iostream>
using namespace std;

int main(){
    long long A, B, D = 10;
    int flag = 1, flag2 = 1;
    cin >> A >> B;

    for(int i = A; i <= B; i++){
        while(1){ 
            if((i / D) == 0) break;
            D *= 10;
        }

        for(int j = 1; j <= D / 10; j *= 10){
            if((i / j) % 10 != 4 && (i / j) % 10 != 7) flag = 0;
        }

        if(flag){
            flag2 = 0;
            cout << i << " ";
        }
        flag = 1;
        D = 10;
    }

    if(flag2) cout << "-1";

    return 0;
}
```
