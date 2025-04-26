#include<iostream>
#include<deque>
#include<string>

using namespace std;



int main(){

    deque<string> history;
    int current =-1;

    auto visit = [&](const stirng& page){
        //clear forward history
        while(history.size()>current+1)
            history.pop_back();

        history.push_back(page);
        current++;
        cout<<"visited "<<page<<"\n";
    };


    visit("www.google.com");
    visit("www.youtube.com");
    visit("www.facebook.com");

}

