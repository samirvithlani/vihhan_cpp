#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){

    //ofstream fout("example.txt");
    ofstream fout("example.txt",ios::app);
    if(fout.is_open()){
        fout<<"\n Hello File 2!\n";
        fout<<"This is a test file 2.\n";
    }
    else{
        cout<<"Error opening file for writing.\n";
    }


}