#include<iostream>
using namespace std;

void updatePointer(char*& p){
    static char newChar = 'Z'; //static --> only one copy of newChar exists
    p = &newChar; // p now points to newChar
}

int main(){


    char c ='A';
    char*p = &c;
    cout << "Before updatePointer: " << *p << endl; // prints 'A'
    updatePointer(p);
    cout << "After updatePointer: " << *p << endl; // prints 'Z'

}