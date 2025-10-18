#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double R;

    cin >> R;
    cout  << fixed << setprecision(9) << R * R * 3.141592653;

    return 0;
}