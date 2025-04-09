#include<iostream>
#include<string>
using namespace std;

struct Student{

    int rollNo;
    char name[20];
};

void addStudent(Student &st){

    //Student st; //ref object..
    
    cout<<"enter stu name";
    cin>>st.name; // .membership operator..
    

    cout<<"enter stu rollNo";
    cin>>st.rollNo;

    

}

void getStudents(Student &st){
   // Student st; //ref object..
    
    cout<<"\n name of student = "<<st.name;
    cout<<"\n rollno of student = "<<st.rollNo;
    
}

int main()
{
    Student st;
    addStudent(st);
    getStudents(st);
}