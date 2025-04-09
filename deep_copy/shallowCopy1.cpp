#include<iostream>
using namespace std;

int main(){

    int*a = new int(10);
    int*b = a ;// shallow copy

    *b = 20;

    cout<<"a = "<<*a;

}