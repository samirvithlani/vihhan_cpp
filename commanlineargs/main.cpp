#include<iostream>
using namespace std;

int main(int argc,char* argv[]){

    cout<<"Number of arguments: "<<argc<<endl;

    cout<<"\n argv"<<*argv[1]<<endl;

    for(int i=0;i<argc;i++){
        cout<<""<<i<<"th argument: "<<argv[i]<<endl;
    }

}