#include<iostream>
using namespace std;

int main()
{
    long long X;
    bool flag = 1;
    cin >> X;
    
    if(X == 2){
        cout << "YES";
        return 0;
    }
    
    if(X % 2 == 0 || X < 2){
        cout << "NO";
        return 0;
    }
    
    for(int i = 3; i * i <= X; i++){
        if(X % i == 0){
                cout << "NO";
                return 0;
        }
    }
    
    cout << "YES";
    
    return 0;
}