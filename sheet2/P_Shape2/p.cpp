#include <iostream>
using namespace std;

int main()
{
    // St = the number of stars at the last row
    // Sp = the number of spaces at the first row
    int N, St, Sp;
    cin >> N;
    St = 2 * N - 1;
    Sp = (St - 1) / 2;

    for(int i = 1; i <= N; i++){
        for(int j = Sp; j > 0; j--){
            cout << " ";
        }
        Sp--;

        for(int k = 0; k < 2 * i - 1; k++){
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}