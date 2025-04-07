#include<iostream>
#include<string>
using namespace std;

struct Student{
    int id;
    float gpa;
};

int main(){

    Student s1 = {101,3.9};
    //pointer to structure
    Student *ptr = &s1;
    //s1.id s1.gpa
    //this pointer : ->
    cout<<"ID = "<<ptr->id<<endl;
    cout<<"GPA = "<<ptr->gpa<<endl;

}