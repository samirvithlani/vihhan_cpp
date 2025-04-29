#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){

    // ofstream fout("marks.txt");
    // if(fout.is_open()){

    //     int marks [] = {10,20,30,40,50};
    //     for(int i=0;i<5;i++){
    //         fout<<marks[i]<<" ";
    //     }
    //     fout.close();
    //     cout<<"File created successfully and marks stored"<<endl;

    // }

    //cin>>number
    ifstream fin("marks.txt");
    if(fin.is_open()){

        string number;
        while(fin>>number){
            cout<<number<<" ";
        }
        fin.close();
        cout<<endl<<"File read successfully"<<endl;
    }


}