#pragma once
#include <iostream>
#include <fstream>
#include "UserManagerMenu.cpp"
#include "User.cpp"

class UserManager : public UserManagerMenu {
private:
	User users[100];
	int count = 0;
public:
	UserManager() {
		User user1("User", "03251", 1);
		User user2("Admin", "03251", 2);
		users[count++] = user1;
		users[count++] = user2;
	}
	void addUser(User user) {
		users[count] = user;
		count++;
	}
	void viewUser() {

		system("cls");

		cout << "\n =====================================================================================";
		cout << "\n                                    VIEW ALL USER LIST";
		cout << "\n =====================================================================================\n";

			for (int i = 0; i < count; i++) {
				if (users[i].getType() == 1) {
					users[i].outputUser();
					cout << "Type: " << "ADMIN" << endl;
				}
				else if (users[i].getType() == 2) {
					users[i].outputUser();
					cout << "Type: " << "NORMAL" << endl;
				}
			}
		cout << "\n\t "; system("pause");
	}

	User* authenticateUser(string username, string password) {
		User* user = nullptr;
			for (int i = 0; i < count; i++) {
				if (users[i].getUsername() == username && users[i].getPassword() == password) {
					return &users[i];
				}
			}
		return user;
	}
};