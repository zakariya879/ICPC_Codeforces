#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;
    cout << (a % 10) + ((b / 10) % 10) + (c / 100);

    return 0;
}