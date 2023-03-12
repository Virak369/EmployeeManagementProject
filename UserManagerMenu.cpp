#pragma once
#include <iostream>
#include "User.cpp"
using namespace std;
class UserManagerMenu {
public:
	virtual void addUser(User user) = 0;
	virtual void viewUser() = 0;
};