#include<iostream>
using namespace std;

struct Item{
    int val;
    Item* next;
};

class List{

    public:
    List(); //default constructor
    ~List();

    void push_back(int v);
    void print();
    private:
    Item* head; //NULL 0*0

};

List::List(){

    head =NULL;
}

void List::push_back(int v){

if(head == NULL){

    head = new Item; //structure object creation // 001
    head->next =NULL;
    head->val =v;
    
}
else{

    //walk to last element..
    Item* temp = head; //001
    while(temp->next !=NULL){
        temp = temp->next;
    }
    temp->next = new Item; //structre address..
    temp->next->val = v;
    temp->next->next = NULL;


}
}


int main(){

List myList;
myList.push_back(100);
myList.push_back(200);



}