#include<iostream>
#include<cstdlib> //for atoi
using namespace std;

int main(int argc,char* argv[]){

    if(argc<2){
        cout<<"Please provide at least one integer argument."<<endl;
        return 1;
    }

    int sum=0;
    for(int i=1;i<argc;i++){

        int* p= new int;
        *p = atoi(argv[i]);
        sum+=*p;
        delete p; // Free the allocated memory
    }
    cout<<"Sum of integers: "<<sum<<endl;

}

