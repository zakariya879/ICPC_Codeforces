#include <iostream>
using namespace std;

int main()
{
    long long l, r, k, counter = 0;
    cin >> l >> r >> k;
    
    for(int i = l; i <= r; i++){
        if(i % k == 0) counter++;
    }
    
    cout << counter;
    
    return 0;
}