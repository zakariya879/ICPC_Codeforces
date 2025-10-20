#include <iostream>
using namespace std;

int main()
{
    int X;
    cin >> X;
    
    if(!((X / 1000) % 2)) cout << "EVEN";
    if((X / 1000) % 2) cout << "ODD";

    return 0;
}