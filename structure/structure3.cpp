#include<iostream>
using namespace std;


struct Employees{

    int id;
    char name[10];
}emp[3];


void add(){

        for(int i=0;i<3;i++){

            cout<<"\n enter id of employee";
            cin>>emp[i].id;
            cout<<"\n enter id of name";
            cin>>emp[i].name;
        }

}

void display(){

 for(int i=0;i<3;i++){

            cout<<"\n id of emp = "<<emp[i].id <<"--"<<" name of employee ="<<emp[i].name;
        }
}


int main(){

    add();
    display();

}