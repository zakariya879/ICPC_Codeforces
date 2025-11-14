#include <iostream>
using namespace std;

int main(){
    long long n, counter = 0;
    cin >> n;

    char temp;
    for(long long i = 0; i < n; i++){
        cin >> temp;
        if(temp == 'A') counter++;
        else counter--;
    }

    if(counter > 0) cout << "Anton";
    else if(counter == 0) cout << "Friendship";
    else cout << "Danik";

    return 0;
}