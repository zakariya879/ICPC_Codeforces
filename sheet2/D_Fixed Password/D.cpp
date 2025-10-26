#include <iostream>
using namespace std;

int main(){
    int X, counter = 0;
    
    while(1){
        cin >> X;
        if(X == 1999) break;
        else counter++;
    }

    for(int j = 0; j < counter; j++) cout << "Wrong" << endl;
    cout << "Correct";

    return 0;
}