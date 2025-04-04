#include<iostream>
using namespace std;

int main(){

    int*p = new int; // allocating memory for a single integer
    //int*p -: pointer to an integer
    //new int -: dynamically allocates memory for an integer
    *p = 50;

    cout<<*p<<endl; // prints the value stored at the address pointed to by p

    delete p; // deallocating the memory allocated for the integer
    p = nullptr; // setting the pointer to nullptr to avoid dangling pointer


    if(p!=nullptr){    
        cout<<*p<<endl; // prints the value stored at the address pointed to by p
    }else{
    cout<<"p is null"<<endl; // prints the value stored at the address pointed to by p
    }


}