#include<iostream>
#include<string>
using namespace std;

template<typename T> class Demo{
    
    public:
    void push_back(T a){

        cout<<"\n value of a"<<a;
    }


};
int main(){

    Demo <int>d;
    //d.push_back(100);
    d.push_back(90.90);

    Demo <string>d1;
    //d.push_back(100);
    d1.push_back("ram");

}