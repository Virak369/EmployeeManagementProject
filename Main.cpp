#pragma once
#include <iostream>
#include"Employee.cpp"
#include"Application.cpp"
#include "User.cpp"
#include "UserManager.cpp"
using namespace std;
int main() {
//===============================================================================================================================================
	Application app;
	UserManager userManager;
	string username;
	string password;

	do {

		system("cls");

		cout << "\n =====================================================================================";
		cout << "\n                      WELCOME TO EMPLOYEE MANAGEMENT SYSTEM";
		cout << "\n =====================================================================================\n";

		cout << "\n\t ENTER USERNAME : "; cin >> username;
		cout << "\n\t ENTER PASSWORD : "; cin >> password;

		system("cls");

		cout << "\n =====================================================================================";
		cout << "\n                               EMPLOYEE MANAGEMENT SYSTEM MENU";
		cout << "\n =====================================================================================\n";

		User* user = userManager.authenticateUser(username, password);
			if (user != nullptr) {
				if (user->getType() == 1) {
				//Employee algorithm========================================================================
					Employee objEmp[1000];
					int option, optionLevel1, n = 0;
					do {

						system("cls");

						cout << "\n =====================================================================================";
						cout << "\n                               EMPLOYEE MANAGEMENT SYSTEM MENU";
						cout << "\n =====================================================================================\n";

						cout << "\n\t [1] INPUT EMPLOYEE" << endl;
						cout << "\n\t [2] VIEW ALL EMPLOYEE" << endl;
						cout << "\n\t [3] SEARCH EMPLOYEE" << endl;
						cout << "\n\t [4] SORT EMPLOYEE" << endl;
						cout << "\n\t [5] DELET EMPLOYEE" << endl;
						cout << "\n\t [6] UPDATE EMPLOYEE" << endl;
						cout << "\n\t [7] EXIT PROGRAM" << endl;
						cout << "\n\t PLEASE CHOOSE OPTIONS (1-7) : "; cin >> option;
						switch (option)
						{
						case 1:
							objEmp[n].input();
							n++;
							break;
						case 2:
							objEmp->getList(objEmp, n);
							break;
						case 3:
							do {

								system("cls");

								cout << "\n =====================================================================================";
								cout << "\n                               SEARCH EMPLOYEE MENU";
								cout << "\n =====================================================================================\n";

								//cout << " =====SEARCH EMPLOYEE MENU=====" << endl;
								cout << "\n\t [1] SEARCH BY ID (0XXXX)" << endl;
								cout << "\n\t [2] SEARCH BY NAME" << endl;
								cout << "\n\t [3] SEARCH BY POSITION" << endl;
								cout << "\n\t [4] BACK" << endl;
								cout << "\n\t PLEASE CHOOSE OPTIONS (1-4) : "; cin >> optionLevel1;
								switch (optionLevel1) {
								case 1: objEmp->searchById(objEmp, n); cout << "\n\t "; system("pause"); break;
									case 2: objEmp->searchByName(objEmp, n); cout << "\n\t "; system("pause"); break;
									case 3: objEmp->searchByposition(objEmp, n); cout << "\n\t "; system("pause"); break;
								}
							} while (optionLevel1 != 4);
							break;
						case 4:
							do {

								system("cls");

								cout << "\n =====================================================================================";
								cout << "\n                                  SORT EMPLOYEE MENU";
								cout << "\n =====================================================================================\n";

								//cout << " =====SORT EMPLOYEE MENU=====" << endl;
								cout << "\n\t [1] SORT BY NAME ACENDING" << endl;
								cout << "\n\t [2] SORT BY NAME DECENDING" << endl;
								cout << "\n\t [3] SORT BY DEPARTMENT ACENDING" << endl;
								cout << "\n\t [4] SORT BY DEPARTMENT DECENDING" << endl;
								cout << "\n\t [5] SORT BY SALARY ACENDING" << endl;
								cout << "\n\t [6] SORT BY SALARY DECENDING" << endl;
								cout << "\n\t [7] BACK" << endl;
								cout << "\n\t PLEASE CHOOSE OPTIONS (1-7) : "; cin >> optionLevel1;
								switch (optionLevel1) {
								case 1: objEmp->sortNameAcending(objEmp, n); break;
								case 2: objEmp->sortNameDecending(objEmp, n); break;
								case 3: objEmp->sortDepartmentAcending(objEmp, n); break;
								case 4: objEmp->sortDepartmentDecending(objEmp, n); break;
								case 5: objEmp->sortSalaryAcending(objEmp, n); break;
								case 6: objEmp->sortSalaryDecending(objEmp, n); break;
								}
							} while (optionLevel1 != 7);
							break;
						case 5:
							objEmp->deleteEmployee(objEmp, n); break;
						case 6:
							objEmp->updateEmployee(objEmp, n); break;
						case 7:
							exit(0); break;
						}
					} while (option != 7);
					//==========================================================================================
				}
				else if (user->getType() == 2) {
					app.userApplication();
				}
			}
			else {
				cout << "\n\t INVALID USER SYSTEM CAN NOT LOGIN !" << endl;
			}
		cout << "\n\t "; system("pause");
	} while (true);

	return 0;
}

