#include<iostream>

#include<string>

using namespace std;
int main(){


    int number = 65;

    char* p = reinterpret_cast<char*>(&number);
    cout << "Original number: " << number << endl;
    cout<<" "<< *p << endl;
    
}