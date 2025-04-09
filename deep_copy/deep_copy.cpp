#include<iostream>
using namespace std;

int main(){
    int*a = new int(10);
    int*b = new int(*a); //deep copy..

    *b = 20;
    cout<<"value of a = "<<*a;
    cout<<"value of a = "<<*b;
}