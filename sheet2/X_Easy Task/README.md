# Easy Task ツ

time limit per test1 second

memory limit per test256 megabytes

## Instructions

Mohamed Ali will give you N
 characters (letters). Check if each character appears in the string "ICPCHTI".

Note:- lowercase or uppercase Character will be valid

### Input
The first line of the input contains an integer t
 (1≤t≤26
), the number of test cases.

The only line of each test case contains a character C
, a single lowercase or uppercase English character (letter).

### Output
For each test case, print YES if C
 satisfies the condition, and NO otherwise.

## Example

Input

5

P

u

e

G

H

Output

YES

NO

NO

NO

YES

## solution

```
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    char s;
    string n = "ICPHT";
    for(int i = 0; i < t; i++){
        cin >> s;
        bool flag = true;

        for(int j = 0; j < n.size(); j++){
            if(n[j] == toupper(s)){
                cout << "YES\n";
                flag = false;
                break;
            }
        }
        if(flag) cout << "NO\n";
    }

    return 0;
}
```
