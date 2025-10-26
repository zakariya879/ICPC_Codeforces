# Fixed Password

time limit per test1 second
memory limit per test256 megabytes

## Instructions

Given multiple lines each line contains a number X which is a password. Print "Wrong" if the password is incorrect otherwise, print "Correct" and terminate the program.

Note: The "Correct" password is the number 1999.

### Input
The input contains several passwords.

Each line contains a number X (103 ≤ X ≤ 104 - 1).

### Output
Print "Wrong" if the password is typed wrong otherwise, print "Correct" if the password is typed correctly.

## Example

Input

2200

1020

1999

1000

9999

Output

Wrong

Wrong

Correct

## solution

```
#include <iostream>
using namespace std;

int main(){
    int X, counter = 0;
    
    while(1){
        cin >> X;
        if(X == 1999) break;
        else counter++;
    }

    for(int j = 0; j < counter; j++) cout << "Wrong" << endl;
    cout << "Correct";

    return 0;
}
```
