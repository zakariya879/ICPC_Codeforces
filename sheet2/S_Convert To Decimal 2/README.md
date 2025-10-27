# Convert To Decimal 2

time limit per test1 second

memory limit per test64 megabytes

## Instructions

Given a number N. Print the result of doing the following operation on N:

Convert N to its binary representation.
Count number of ones in the above binary representation.
Print the equivalent decimal number that its binary representation has only the number of ones that were counted above.
For example: (10)decimal = (1010)binary has 2 ones "11", after converting "11" to decimal number it will become 3.

### Input
First line contains a number T (1 ≤ T ≤ 10) number of test cases.

Next T lines will contain a number N (1 ≤ N ≤ 231 - 1).

### Output
For each test case print a single line contains the answer according to the required above.

## Example

Input

3

10

7

8

Output

3

7

1

### Note
To convert decimal number to binary :

A decimal integer can be converted to binary by dividing it by 2.

Take the quotient, and keep dividing it by 2, until you reach zero.

Each time you perform this division, take note of the remainder. Now reverse the remainders list, and you get the number in binary form

Example to convert 29 to binary


for more details visit this https://flaviocopes.com/converting-decimal-to-binary/

To convert from binary to Decimal :


Second Test Case :

(7)decimal = (111)binary has 3 ones "111", after converting "111" to decimal number it will become 7.

Third Test Case :

(8)decimal = (1000)binary has 1 one "1", after converting "1" to decimal number it will become 1.

## solution

```
#include <iostream>
using namespace std;

int main()
{
    long long T, N, B = 0, D = 0;
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> N;

        while(1){
            if(N % 2 == 1) B++;
            N /= 2;
            if(N == 0) break;
        }

        int counter = 0, temp = 1;
        for(int j = 0; j < B; j++){
            for(int k = 0; k < counter; k++){
                temp *= 2;
            }
            D += temp;
            temp = 1;
            counter++;
        }

        cout << D << endl;
        D = 0;
        B = 0;
    }
    
    return 0;
}
```
