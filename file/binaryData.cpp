#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main(){

    int numbers[] = {1, 2, 3, 4, 5};
    //cout<<"size of numbers" << sizeof(numbers) << endl;
    size_t count = sizeof(numbers)/sizeof(numbers[0]);

    ofstream fout("numbers.bin",ios::binary);
    if(!fout){
        cerr << "Error opening file for writing" << endl;
        return 1;
    }
    fout.write(reinterpret_cast<char*>(numbers),count*sizeof(int));
    fout.close();
    
}