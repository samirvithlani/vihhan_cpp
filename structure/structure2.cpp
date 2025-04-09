#include<iostream>
#include<string>
using namespace std;

struct Student{

    int rollNo;
    char name[20];
}st;

void addStudent(){

    //Student st; //ref object..
    
    cout<<"enter stu name";
    cin>>st.name; // .membership operator..
    

    cout<<"enter stu rollNo";
    cin>>st.rollNo;

    

}

void getStudents(){
   // Student st; //ref object..
    
    cout<<"\n name of student = "<<st.name;
    cout<<"\n rollno of student = "<<st.rollNo;
    
}

int main()
{
    addStudent();
    getStudents();
}