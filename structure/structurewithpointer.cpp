#include<iostream>
using namespace std;


struct Employee{

    int id;
    char name[20];

};

int main(){


        Employee emp;
        Employee*ptr = &emp;

        //this pointer...
        ptr->id=100;
        cout<<"id = "<<ptr->id;



}