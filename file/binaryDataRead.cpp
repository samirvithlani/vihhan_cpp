#include<iostream>
#include<fstream>

using namespace std;

int main(){

    int numbers[5]={};
    size_t count =5;

    ifstream fin("numbers.bin",ios::binary);
    if(!fin){
        cerr << "Error opening file for reading" << endl;
        return 1;
    }
    fin.read(reinterpret_cast<char*>(numbers),count*sizeof(int));
    fin.close();

    cout << "Read numbers from file:" << endl;
    for(size_t i=0; i<count; ++i){
        cout << numbers[i] << " ";
    }

}