#include <iostream>
using namespace std;

int main()
{
    double X, Y;
    cin >> X >> Y;

    if(!X && !Y) cout << "Origem";
    else if(!X) cout << "Eixo Y";
    else if(!Y) cout << "Eixo X";
    else if(X > 0 && Y > 0) cout << "Q1";
    else if(X < 0 && Y > 0) cout << "Q2";
    else if(X < 0 && Y < 0) cout << "Q3";
    else if(X > 0 && Y < 0) cout << "Q4";

    return 0;
}