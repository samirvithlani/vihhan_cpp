#include<iostream>
#include<deque>
#include<vector>

using namespace std;

void slidingWindowMax(const vector<int>& nums,int k){

 // {1,3,-1,-3,5,3,6,7};
    deque<int>dq; //0
    for(int i=0;i<nums.size();i++){

        //
        if(!dq.empty() && dq.front()<=i-k)
            dq.pop_front();

        while(!dq.empty() && nums[dq.back()]<nums[i])
            dq.pop_back();

        dq.push_back(i);  //1 //2

        if(i>=k-1)
        cout<<nums[dq.front()]<<" "<<endl;

        
    }



}

int main(){


    vector<int> arr = {1,3,-1,-3,5,3,6,7};
    int k = 3;
    slidingWindowMax(arr,k);
}