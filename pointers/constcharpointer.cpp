#include<iostream>
using namespace std;

int main(){

    const char* message = "Hello"; //string literal (read-only)
    cout<<"message :"<<message<<endl;

    //message[0] = "h"; //invalid, as message is a pointer to a string literal
    message = "World"; //valid, as message is a pointer to a string literal
    cout<<"message :"<<message<<endl;
}