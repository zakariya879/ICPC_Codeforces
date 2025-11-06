#include <iostream>
using namespace std;

int main()
{
    long long n, num, first, max, min;
    cin >> n >> first;

    max = first;
    min = first;

    for(int i = 1; i < n; i++){
        cin >> num;

        if(num > max) max = num;
        if(num < min) min = num;
    }

    cout << "Maximum : " << max << endl
         << "Minimum : " << min;

    return 0;
}