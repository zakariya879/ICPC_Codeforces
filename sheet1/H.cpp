#include <iostream>
using namespace std;

int main()
{
    int A, B;

    cin >> A >> B;
    
    if(!(A % B) || !(B % A)) cout << "Multiples";
    else if(A % B || B % A) cout << "No Multiples";

    return 0;
}