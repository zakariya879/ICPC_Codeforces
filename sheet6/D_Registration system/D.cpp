#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main(){
    long long n; cin >> n;
    unordered_map<string, int> dataBase;

    for(long long i = 0; i < n; i++){
        string name;
        cin >> name;

        if(dataBase.find(name) == dataBase.end()){
            cout << "OK\n";
            dataBase[name] = 1;
        }

        else{
            int counter = dataBase[name];
            string newName;

            while(1){
                newName = name + to_string(counter);
                if(dataBase.find(newName) == dataBase.end()) break;
                counter++;
            }

            cout << newName << endl;
            dataBase[newName] = 1;
            dataBase[name] = counter + 1;
        }
    }

    return 0;
}