#include<iostream>
using namespace std;

struct Node{

    int val;
    Node* next;
    Node* prev;

    Node(int v):val(v),next(nullptr),prev(nullptr){}

};
class DoublyLinkdList{

    public:
    Node* head;
    Node* tail;

    DoublyLinkdList(){
        head = nullptr;
        tail = nullptr;
    }

    void push_back(int val);
    void print_forward();
    void print_backward();
    void push_front(int val);


};

void DoublyLinkdList::push_back(int val){

    Node* newNode = new Node(val);
    if(tail==nullptr){
        head = tail = newNode;
    }
    // A   --> B   -->C
    else{
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

}

void DoublyLinkdList :: print_forward(){

    Node* curr = head;
    while(curr!=nullptr){
        cout<<curr->val<<endl;
        curr = curr->next;
    }
    cout<<"NULL \n";

}
void DoublyLinkdList :: print_backward(){


    Node* curr = tail;
    while(curr!=nullptr){
        cout<<curr->val<<endl;
        curr = curr->prev;
    }
    cout<<"NULL \n";
}

void DoublyLinkdList:: push_front(int val){

    Node* newNode = new Node(val);
    if(head==nullptr){
        head = tail = newNode;
    }
    else{
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}
int main()
{

    DoublyLinkdList dl;
    dl.push_back(100);
    dl.push_back(200);
    dl.push_front(9000);
    dl.push_back(300);

    dl.print_forward();
    //dl.print_backward();

}
