#pragma once
#include <iostream>
#include"Employee.cpp"
#include "User.cpp"
#include "UserManager.cpp"

using namespace std;

enum userMenuType { NEW_USER = '1', VIEW_USER = '2', EXIT_USER = '0' };
class Application :public Employee {
public:
	void userApplication() {
		Application app;
		char cha;
		string username;
		UserManager userManager;
		do
		{
			system("cls");
			app.userMenu();
			cin >> cha;
			system("cls");
			switch (cha)
			{
				case userMenuType::NEW_USER: {
					User user;
					user.inputUser();
					userManager.addUser(user);
					break;
				}
				case userMenuType::VIEW_USER:
					userManager.viewUser();
					break;
				case userMenuType::EXIT_USER: {
					exit(1);
					break;
				}
			}
		} while (cha != '0');
	}
};