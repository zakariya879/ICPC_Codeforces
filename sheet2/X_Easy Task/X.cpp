#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    char s;
    string n = "ICPHT";
    for(int i = 0; i < t; i++){
        cin >> s;
        bool flag = true;

        for(int j = 0; j < n.size(); j++){
            if(n[j] == toupper(s)){
                cout << "YES\n";
                flag = false;
                break;
            }
        }
        if(flag) cout << "NO\n";
    }

    return 0;
}