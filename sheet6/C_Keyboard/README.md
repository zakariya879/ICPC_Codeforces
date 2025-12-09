# Keyboard

time limit per test2 seconds

memory limit per test256 megabytes

## Instructions

Our good friend Mole is trying to code a big message. He is typing on an unusual keyboard with characters arranged in following way:


qwertyuiop
asdfghjkl;
zxcvbnm,./
Unfortunately Mole is blind, so sometimes it is problem for him to put his hands accurately. He accidentally moved both his hands with one position to the left or to the right. That means that now he presses not a button he wants, but one neighboring button (left or right, as specified in input).

We have a sequence of characters he has typed and we want to find the original message.

### Input
First line of the input contains one letter describing direction of shifting ('L' or 'R' respectively for left or right).

Second line contains a sequence of characters written by Mole. The size of this sequence will be no more than 100. Sequence contains only symbols that appear on Mole's keyboard. It doesn't contain spaces as there is no space on Mole's keyboard.

It is guaranteed that even though Mole hands are moved, he is still pressing buttons on keyboard and not hitting outside it.

### Output
Print a line that contains the original message.

## Examples
Input

R

s;;upimrrfod;pbr

Output

allyouneedislove

## solution

```
#include <iostream>
#include <string>
using namespace std;

int main(){
    char direction; cin >> direction;
    string s; cin >> s;
    string keys = "qwertyuiopasdfghjkl;zxcvbnm,./";

    if(direction == 'R'){
        for(char c : s){
            for(int i = 0; i < keys.size(); i++){
                if(c == keys[i]) cout << keys[i - 1];
            }
        }
    }

    else{
        for(char c : s){
            for(int i = 0; i < keys.size(); i++){
                if(c == keys[i]) cout << keys[i + 1];
            }
        }
    }

    return 0;
}
```
