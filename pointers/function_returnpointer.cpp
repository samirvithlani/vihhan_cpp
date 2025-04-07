#include<iostream>
using namespace std;


int* createPointer(){
    //dynamic memory allocation
    int *p = new int;
    *p = 10;
    cout<<"address of pointer: "<<p<<endl; //address of pointer
    return p; //returning pointer
}

int main(){

    int *ptr = createPointer(); //calling function
    cout << "Value of pointer: " << ptr << endl; //dereferencing pointer

}