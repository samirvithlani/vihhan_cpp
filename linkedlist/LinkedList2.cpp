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
    void pop_back();
    int pop_back1();
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

void List::pop_back(){

    //if list  empty..
    if(head ==NULL){
        cout<<"List is empty, nothing to remove";
        return;
    }
    //if only one element in list..
    if(head->next ==NULL){
        delete head;
        head =NULL;
        return;
    }

    //if more than one elm...
    Item* temp = head;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    delete temp->next; //delete last node
    temp->next =NULL;  //Set second last's next to NUll



}

int List::pop_back1(){

    if(head==NULL){
        cout<<"List is empty";
        return -1;
    }
    if(head->next == NULL){
        int val = head->val;
        delete head;
        head = NULL;
        return val;
    }
    Item* temp = head;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    int val = temp->next->val;
    delete temp->next;
    temp->next =NULL;
    return val;
}


void List::print(){

    Item* temp = head;
    while(temp!= NULL){
        cout<<"\n"<<temp->val<<endl;
        temp = temp->next;

    }
    cout<<"NULL"<<endl;

}

int main(){

    List myList; //default construtor... /head NULL
    myList.push_back(15);
    myList.push_back(3);
    myList.print();
    cout<<"after pop back..";
    cout<<"removing..."<<myList.pop_back1();
    myList.print();

}

//pop_front
//push_front
//size --> return size of linked list..
//boolean isEmpty()
//find(int)
//insert_at(int index,int value)
//remove_at(int index,int value)
//reverse()