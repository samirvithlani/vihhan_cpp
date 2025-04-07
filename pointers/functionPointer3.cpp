#include<iostream>
using namespace std;
#include<string>


struct User{
    string username;
    string password;
};


User* findUser(string username, User* users, int size){
    for(int i=0; i<size; i++){
        if(users[i].username == username){
            return &users[i];
        }
    }
    return nullptr;
}


int main(){

    User users[3] = {{"user1", "pass1"}, {"user2", "pass2"}, {"user3", "pass3"}};
    string username;
    cout << "Enter username: ";
    cin >> username;
    //user1
    User* user = findUser(username, users, 3); // struct
    if(user != nullptr){
        cout << "User found: " << user->username << endl;
    } else {
        cout << "User not found" << endl;
    }

    return 0;

}