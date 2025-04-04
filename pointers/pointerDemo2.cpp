//pointer with arithmetic
#include<iostream>
using namespace std;

//size of int  ---> 4 bytes 10 : 1200
//plus + 1 1204 --> 20

int main(){

    int arr[] = {10,20,30};
    int*p = arr;

    cout<<*p<<endl; //10
    cout<<p<<endl; //1200
    cout<<(p+1)<<endl; //10



}