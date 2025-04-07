#include<iostream>
using namespace std;

void swap(int* no1,int* no2){

    cout<<"Inside swap function before swap: "<<*no1<<" "<<*no2<<endl;
    cout<<"Inside swap function before swap: "<<no1<<" "<<no2<<endl;


    int temp;
    temp = *no1;
    *no1 = *no2;
    *no2 = temp;

    cout<<"Inside swap function: After swap "<<*no1<<" "<<*no2<<endl;
    cout<<"Inside swap function after swap: "<<no1<<" "<<no2<<endl;




}



int main(){


    int no1=100,no2=200;
    cout<<"Before swap function called....: "<<no1<<" "<<no2<<endl;
    cout<<"Before swap function called....: "<<&no1<<" "<<&no2<<endl;

    //swap(no1,no2);
    swap(&no1,&no2);
    
    cout<<"After swap function called....: "<<no1<<" "<<no2<<endl;
    cout<<"After swap function called....: "<<&no1<<" "<<&no2<<endl;



}