#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;



int main(){

    vector <string>v;
    v.push_back("java");
    v.push_back("python");
    v.push_back("cpp");
    v.push_back("js");

    //sort(v.begin(),v.end());
    //sort(v.begin(),v.end(),greater<string>());
    //sort(v.end(),v.begin());

    vector<string>::iterator it; //object..

    for(it = v.begin();it!=v.end();it++){
        cout<<"\n"<<*it;
    }



    // for(string  s:v){
    //     cout<<"\n "<<s;
    // }


}