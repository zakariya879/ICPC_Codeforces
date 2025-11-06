#include <iostream>
using namespace std;

int main()
{
    long long n, num, first, max, min, pos1 = 1, pos2 = 1;
    cin >> n >> first;

    max = first;
    min = first;

    for(int i = 2; i <= n; i++){
        cin >> num;

        if(num > max){
            max = num;
            pos1 = i;
        }
        if(num < min){
            min = num;
            pos2 = i;
        }
    }

    cout << "Position of Maximum : " << pos1 << endl
         << "Position of Minimum : " << pos2;

    return 0;
}