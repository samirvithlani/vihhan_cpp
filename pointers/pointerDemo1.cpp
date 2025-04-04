#include<iostream>
using namespace std;

//& operator returns the address of a variable

int main(){
 
    int a = 10; //occupied... address...
    int* p = &a;

    cout<<"value of a "<<a<<endl;
    cout<<"address of a "<<&a<<endl;
    
    cout<<"value of p "<<p<<endl;
    //cout<<"value of *p "<<*p<<endl; //dereferencing the pointer
    cout<<"address of p "<<&p<<endl;


}