#include<iostream>
using namespace std;

class Demo1{

    public:

    Demo1(int x){

        cout<<"\n param const"<<x;
    }
    Demo1(){
        cout<<"\n const.....";
    }
    

};

int main(){

    Demo1 d(100);
    Demo1 d2;

}