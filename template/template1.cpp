#include<iostream>
#include<string>

using namespace std;

void sum(int a,int b){

    cout<<"\n value of a = "<<a;
    cout<<"\n value of b = "<<b;
}

template <typename T> void findMax(T a,T b){

    cout<<"\n valu of a "<<a;
    cout<<"\n value of b = "<<b;
}

int main(){

//    sum(12,22);
    //  findMax(12,22);
    //  findMax('a','b');
    //  findMax("ram","shyam");
     //findMax(true,false);
     int a,b;
     cout<<"\n enter a";
     cin>>a;
     cout<<"\n enter a";
     cin>>b;

     findMax(a,b);

}