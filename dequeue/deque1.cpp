#include<iostream>
#include<deque>

using namespace std;

int main(){


    deque<int> dq = {1,2,3};
    dq.push_front(0);
    dq.push_back(4);
    dq.insert(dq.begin()+2,10);

    for(int val:dq) cout<<val<<endl;


}