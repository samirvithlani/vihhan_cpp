//a vrctor in c++ stl is a dynamic array
//initially a vector has a zero size.. cap 0
#include<iostream>
#include<vector> //vector is template type of class
//STL
//itrable,subscriptable

using namespace std;

int main(){

    vector <int>v;
    v.push_back(100);
    v.push_back(200);
    v.push_back(300);
    v.push_back(400);
    v.push_back(500);

    cout<<"\n "<<v[0];
    cout<<"\n "<<v.at(0);

    // for(int i=0;i<v.size();i++){
    //     cout<<"\n"<<v[i];
    // }

    //range based for loop
    for(int i:v){
        cout<<"\n"<<i;
    }
    v.pop_back(); //remve last element...
    cout<<"\n after remove...";
    for(int i:v){
        cout<<"\n"<<i;
    }

    v.erase(v.begin()+1);
    cout<<"\n after remove...";
    for(int i:v){
        cout<<"\n"<<i;
    }

    // insert element at spec position...
    v.insert(v.begin()+1,999);
    cout<<"\n after add...";
    for(int i:v){
        cout<<"\n"<<i;
    }
    cout<<"\n front "<<v.front();
    cout<<"\n back "<<v.back();

    //clear
    v.clear();
    cout<<"\n after clear...";
    for(int i:v){
        cout<<"\n"<<i;
    }
    //empty..
    cout<<"\n empty"<<v.empty();




}