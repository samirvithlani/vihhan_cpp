#include<iostream>
using namespace std;

int main(){

    int a = 10;
    int *p = &a;
    int **pp = &p;

    cout << "Value of a: " << a << endl; // 10
    cout << "Value of a using pointer p: " << *p << endl; // 10
    cout << "Value of a using pointer to pointer pp: " << **pp << endl; // 10

    **pp =100;
    cout << "Value of a after changing using pointer to pointer pp: " << a << endl; // 100


}