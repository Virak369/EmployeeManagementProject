#pragma once
#include <iostream>
using namespace std;

class User {
private:
    string username;
    string password;
    int type;
public:
    User() :username("Unknown"), password("Unknown"), type(0) {}
    User(string username, string password, int type) :username(username), password(password), type(type) {}
    ~User() {

    }
    void setUsername(string username) {
        this->username = username;
    }
    string getUsername() {
        return username;
    }
    void setPassword(string password) {
        this->password = password;
    }
    string getPassword() {
        return password;
    }
    void setType(int type) {
        this->type = type;
    }
    int getType() {
        return type;
    }
    void inputUser() {

        system("cls");

        cout << "\n =====================================================================================";
        cout << "\n                                   CREATE USER";
        cout << "\n =====================================================================================\n";

        cout << "\n\t CREATE USERNAME : "; cin >> username;
        cout << "\n\t CREATE PASSWORD : "; cin >> password;

        cout << "\n\t ROLE OPTIONS :" << endl;
        cout << "\n\t     [1] ADMIN" << endl;
        cout << "\n\t     [2] NORMAL" << endl;
        cout << "\n\t PLEASE CHOOSE ROLE OPTIONS : "; cin >> type;

        system("cls");

        cout << "\n =====================================================================================";
        cout << "\n                                   CREATE USER";
        cout << "\n =====================================================================================\n";
        cout << "\n\t USER SUCCESSFULLY CREATED !\n";

        cout << "\n\t "; system("pause");
    }
    void outputUser() {
        cout << "\n\t USERNAME : " << username << "  ";
        //cout << "\nType : " << type << endl;
    }
};