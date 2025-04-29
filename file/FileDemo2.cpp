#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main(){
    string data;
    ifstream fin("example.txt");
    if(fin.is_open()){
        while(getline(fin,data)){
            cout<<data<<endl;
        }
        fin.close();
    }


}