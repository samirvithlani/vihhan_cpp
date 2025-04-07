//array : 
//structure :
#include <iostream>
#include<string>
using namespace std;

struct Student{
    string name;
    int age;
    float gpa;
};


int main(){

    //ref
    Student s1;
    s1.name = "Ram";
    s1.age = 20;
    s1.gpa = 3.5;

    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "GPA: " << s1.gpa << endl;






}
