#include<iostream>
using namespace std;

int main(){

    char name[] = "John";
    char *p = name;


    cout<<"\n address of name: "<< &name << endl; // 0x7ffeefbff5a0
    cout << "address of name using pointer p: " << *p << endl; // 0x7ffeefbff5a0

    cout << "Value of name: " << name << endl; // John
    cout << "Value of name using pointer p: " << p << endl; // John



}