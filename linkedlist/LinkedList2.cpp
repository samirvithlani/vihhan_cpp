#include<iostream>
using namespace std;

struct Item{
    int val;
    Item* next;
};

class List{

    public:
    List(); //constructor...
    Item* head; //structure:
    void push_back(int v);
    void print();
};
//constructor...
List::List(){

    //list class object null;
    head = NULL;
}

void List :: push_back(int v){


    if(head == NULL){
        //3200 structure object..
        head = new Item; //3200 object.. head is your sttructure object..
        head->next = NULL;
        head->val = v; //15
    }
    else{
        Item* temp = head; //3200
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = new Item;
        temp->next->val =v;
        temp->next->next =NULL;

    }

}

void List::print(){

    Item* temp = head;
    while(temp!= NULL){
        cout<<temp->val;
        temp = temp->next;

    }
    cout<<"NULL"<<endl;



}

int main(){

    List myList; //default construtor... /head NULL
    myList.push_back(15);
    myList.push_back(3);
    myList.print();

}