#include <iostream>
using namespace std;

int main()
{
    long long T, X, Y, sum = 0;
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> X >> Y;
        if(X < Y){
            for(int j = X + 1; j < Y; j++){
                if(j % 2) sum += j;
            }
            cout << sum << endl;
            sum = 0;
        }
        else if(Y < X){
            for(int k = Y + 1; k < X; k++){
                if(k % 2) sum += k;
            }
            cout << sum << endl;
            sum = 0;
        }
        else cout << "0" << endl;
    }
    
    return 0;
}