#include<iostream>
using namespace std;

int main(){

    int arr[] = {5,15,25};
    int*p = arr;

    for(int i=0;i<3;i++){
        cout<<"index "<<i << " : "<<*(p+i)<<endl;
    }


}