# Building an Aquarium

time limit per test2 seconds

memory limit per test256 megabytes

## Instructions

You love fish, that's why you have decided to build an aquarium. You have a piece of coral made of n
 columns, the i
-th of which is ai
 units tall. Afterwards, you will build a tank around the coral as follows:

Pick an integer h≥1
 — the height of the tank. Build walls of height h
 on either side of the tank.
Then, fill the tank up with water so that the height of each column is h
, unless the coral is taller than h
; then no water should be added to this column.
For example, with a=[3,1,2,4,6,2,5]
 and a height of h=4
, you will end up using a total of w=8
 units of water, as shown.

You can use at most x
 units of water to fill up the tank, but you want to build the biggest tank possible. What is the largest value of h
 you can select?
### Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases.

The first line of each test case contains two positive integers n
 and x
 (1≤n≤2⋅105
; 1≤x≤109
) — the number of columns of the coral and the maximum amount of water you can use.

The second line of each test case contains n
 space-separated integers ai
 (1≤ai≤109
) — the heights of the coral.

The sum of n
 over all test cases doesn't exceed 2⋅105
.

### Output
For each test case, output a single positive integer h
 (h≥1
) — the maximum height the tank can have, so you need at most x
 units of water to fill up the tank.

We have a proof that under these constraints, such a value of h
 always exists.

## Example
Input

5

7 9

3 1 2 4 6 2 5

3 10

1 1 1

4 1

1 4 3 4

6 1984

2 6 5 9 1 8

1 1000000000

1

Output

4

4

2

335

1000000001

### Note
The first test case is pictured in the statement. With h=4
 we need 8
 units of water, but if h
 is increased to 5
 we need 13
 units of water, which is more than x=9
. So h=4
 is optimal.

In the second test case, we can pick h=4
 and add 3
 units to each column, using a total of 9
 units of water. It can be shown that this is optimal.

In the third test case, we can pick h=2
 and use all of our water, so it is optimal.

 ## solution

 ```
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    long long t; cin >> t;

    for(int i = 0; i < t; i++){
        long long n; cin >> n;
        long long x; cin >> x;

        long long a[n];
        for(int j = 0; j < n; j++) cin >> a[j];
        sort(a, a + n);
        
        if(n == 1) cout << x + a[0] << endl;

        else{
            long long left = 1;
            long long right = a[n-1] + x;
            long long answer = a[0];
            while(left <= right){
                long long mid = left + (right - left) / 2;
                long long sum = 0;
                bool exceed = false;

                for(int k = 0; k < n; k++) {
                    if(mid > a[k]){
                        sum += (mid - a[k]);
                        if(sum > x){
                            exceed = true;
                            break;
                        }
                    }
                }

                if(exceed) right = mid - 1;
                else{
                    answer = mid;
                    left = mid + 1;
                }
            }
        
            cout << answer << endl;
        }
    }

    return 0;
}
 ```
