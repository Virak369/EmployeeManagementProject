#pragma once
#include <iostream>
#include<iomanip>
#include<string>
#include "UserManager.cpp"

using namespace std;

class Employee {
	private:
		int id;
		string name, gender, address, position, department;
		float salary;

	public:

		//defauld constructor
		Employee() {
			id = 0;
			name = "Unknown";
			gender = "Unknown";
			address = "Unknown";
			position = "Unknown";
			department = "Unknown";
			salary = 0;
		}

		//constructor with parameter
		Employee(int id,string name,string gender,string address,string position,string department, float salary) {
			this->id = id;
			this->name = name;
			this->gender = gender;
			this->address = address;
			this->position = position;
			this->department = department;
			this->salary = salary;
		}

		//getter and Setter
		int getId() {
			return id;
		}
		string getName() {
			return name;
		}
		string getGender() {
			return gender;
		}
		string getAddress() {
			return address;
		}
		string getPosition() {
			return position;
		}
		string getDepartment() {
			return department;
		}
		double getSalary() {
			return salary;
		}
		void setId(int id) {
			this->id = id;
		}
		void setName(string name) {
			this->name = name;
		}
		void setGender(string gender) {
			this->gender = gender;
		}
		void setAddress(string address) {
			this->address = address;
		}
		void setPosition(string position) {
			this->position = position;
		}
		void setDeaprtment(string department) {
			this->department = department;
		}
		void setSalary(float salary) {
			this->salary = salary;
		}

		// Add employee information
		void input() {

			system("cls");

			cout << "\n =====================================================================================";
			cout << "\n                               INPUT EMPLOYEE INFORMATION";
			cout << "\n =====================================================================================\n";

			cout << "\n\t INPUT EMPLOYEE ID (0XXXX)		: "; cin >> id;
			cout << "\n\t INPUT EMPLOYEE NAME			: "; cin.clear(); cin.ignore(); getline(cin, name);
			cout << "\n\t INPUT EMPLOYEE GENDER	(M/F)		: "; cin >> gender;
			cout << "\n\t INPUT EMPLOYEE ADDRESS		: "; cin.clear(); cin.ignore(); getline(cin, address);
			cout << "\n\t INPUT EMPLOYEE POSITION		: "; cin.clear(); cin.ignore(); getline(cin, position);
			cout << "\n\t INPUT EMPLOYEE DEPARTMENT		: "; cin.clear(); cin.ignore(); getline(cin, department);
			cout << "\n\t INPUT EMPLOYEE SALARY			: "; cin >> salary;

			system("cls");

			cout << "\n =====================================================================================";
			cout << "\n                               INPUT EMPLOYEE INFORMATION";
			cout << "\n =====================================================================================\n";

			cout << "\n\t *** EMPLOYEE RECORD INSERTED SUCCESSFULY ***\n";
			cout << "\n\t "; system("pause");
		}

		//Print Header
		void printHeader() {
			cout << setw(10) << "ID";
			cout << setw(15) << "NAME" ;
			cout << setw(10) << "GENDER" ;
			cout << setw(15) << "ADDRESS";
			cout << setw(15) << "POSITION";
			cout << setw(15) << "DEPARTMENT" ;
			cout << setw(10) << "SALARY"  << endl;
		}

		// Show employee information
		void output() {
			cout << setw(10) << id ;
			cout << setw(15) << name ;
			cout << setw(10) << gender ;
			cout << setw(15) << address ;
			cout << setw(15) << position ;
			cout << setw(15) << department ;
			cout << setw(10) << salary  << endl;
		}

		void getList(Employee obj[],int n) {

			system("cls");

			cout << "\n ==========================================================================================================";
			cout << "\n                                        VIEW ALL EMPLOYEE INFORMATION";
			cout << "\n ==========================================================================================================\n";

			printHeader();
				for (int i = 0; i < n; i++) {
					obj[i].output();

				}
				cout << " ==========================================================================================================\n";
				cout << "\n\t "; system("pause");
		}

		//Search
		// Search employee information by id
		void searchById(Employee obj[],int n) {

			system("cls");

			cout << "\n =====================================================================================";
			cout << "\n                               SEARCH EMPLOYEE MENU";
			cout << "\n =====================================================================================\n";

			int idSearch, idFound;
				cout << "\n\t PLEASE INPUT EMPLOYEE ID TO SEARCH : "; cin >> idSearch;
				idFound = 0;
					for (int i = 0; i < n; i++) {
						if (idSearch == obj[i].getId()) {

							system("cls");

							cout << "\n ==========================================================================================================";
							cout << "\n                                        VIEW EMPLOYEE INFORMATION";
							cout << "\n ==========================================================================================================\n";

							printHeader();
							obj[i].output();

							idFound = 1;
							break;
						}
					}
					cout << " ==========================================================================================================";
					if (idFound == 0) {

						system("cls");

						cout << "\n =====================================================================================";
						cout << "\n                               SEARCH EMPLOYEE MENU";
						cout << "\n =====================================================================================\n";

						cout << "\n\t EMPLOYEE ID (" << idSearch << " ) NOT FOUND IN THE LIST !" << endl;
					}
		}

		// Search employee information by name
		void searchByName(Employee obj[], int n) {

			system("cls");

			cout << "\n =====================================================================================";
			cout << "\n                               SEARCH EMPLOYEE MENU";
			cout << "\n =====================================================================================\n";

			int nameFound;
			string nameSearch;
			cout << "\n\t PLEASE INPUT EMPLOYEE NAME TO SEARCH : "; cin.clear(); cin.ignore(); getline(cin, nameSearch);
			nameFound = 0;
			for (int i = 0; i < n; i++) {
				if (nameSearch == obj[i].getName()) {

					system("cls");

					cout << "\n ==========================================================================================================";
					cout << "\n                                        VIEW EMPLOYEE INFORMATION";
					cout << "\n ==========================================================================================================\n";

					printHeader();
					obj[i].output();

					nameFound = 1;
					break;
				}
			}
			cout << " ==========================================================================================================";
			if (nameFound == 0) {

				system("cls");

				cout << "\n =====================================================================================";
				cout << "\n                               SEARCH EMPLOYEE MENU";
				cout << "\n =====================================================================================\n";

				cout << "\n\t EMPLOYEE ID (" << nameSearch << " ) NOT FOUND IN THE LIST !" << endl;
			}
		}

		// Search employee information by position
		void searchByposition(Employee obj[], int n) {

			system("cls");

			cout << "\n =====================================================================================";
			cout << "\n                               SEARCH EMPLOYEE MENU";
			cout << "\n =====================================================================================\n";

			int positionFound;
			string positionSearch;
			cout << "\n\t PLEASE INPUT EMPLOYEE POSITION TO SEARCH : "; cin.clear(); cin.ignore(); getline(cin, positionSearch);
			positionFound = 0;
			for (int i = 0; i < n; i++) {
				if (positionSearch == obj[i].getPosition()) {

					system("cls");

					cout << "\n ==========================================================================================================";
					cout << "\n                                        VIEW EMPLOYEE INFORMATION";
					cout << "\n ==========================================================================================================\n";

					printHeader();
					obj[i].output();

					positionFound = 1;
					break;
				}
			}
			cout << " ==========================================================================================================";
			if (positionFound == 0) {

				system("cls");

				cout << "\n =====================================================================================";
				cout << "\n                               SEARCH EMPLOYEE MENU";
				cout << "\n =====================================================================================\n";

				cout << "\n\t EMPLOYEE ID (" << positionSearch << " ) NOT FOUND IN THE LIST !" << endl;
			}

		}

		// SORT
		// Sort name acending
		void sortNameAcending(Employee obj[], int n) {

			system("cls");

			cout << "\n =====================================================================================";
			cout << "\n                                  SORT EMPLOYEE MENU";
			cout << "\n =====================================================================================\n";

			Employee objEmp;
				for (int i = 0; i < n; i++) {
					for (int j = i + 1; j < n; j++) {
						if (obj[i].getName() > obj[j].getName());
						objEmp = obj[i];
						obj[i] = obj[j];
						obj[j] = objEmp;
					}
				}

				system("cls");

				cout << "\n ==========================================================================================================";
				cout << "\n                                        VIEW ALL EMPLOYEE INFORMATION";
				cout << "\n ==========================================================================================================\n";

				getList(obj, n);
				cout << " ==========================================================================================================";
		}
		// Sort name decending
		void sortNameDecending(Employee obj[], int n) {

			system("cls");

			cout << "\n =====================================================================================";
			cout << "\n                                  SORT EMPLOYEE MENU";
			cout << "\n =====================================================================================\n";

			Employee objEmp;
			for (int i = 0; i < n; i++) {
				for (int j = i + 1; j < n; j++) {
					if (obj[i].getName() < obj[j].getName());
					objEmp = obj[i];
					obj[i] = obj[j];
					obj[j] = objEmp;
				}
			}

			system("cls");

			cout << "\n ==========================================================================================================";
			cout << "\n                                        VIEW ALL EMPLOYEE INFORMATION";
			cout << "\n ==========================================================================================================\n";

			getList(obj, n);
			cout << " ==========================================================================================================";
		}

		// Sort salary acending
		void sortSalaryAcending(Employee obj[], int n) {

			system("cls");

			cout << "\n =====================================================================================";
			cout << "\n                                  SORT EMPLOYEE MENU";
			cout << "\n =====================================================================================\n";

			Employee objEmp;
			for (int i = 0; i < n; i++) {
				for (int j = i + 1; j < n; j++) {
					if (obj[i].getSalary() > obj[j].getSalary());
					objEmp = obj[i];
					obj[i] = obj[j];
					obj[j] = objEmp;
				}
			}

			system("cls");

			cout << "\n ==========================================================================================================";
			cout << "\n                                        VIEW ALL EMPLOYEE INFORMATION";
			cout << "\n ==========================================================================================================\n";

			getList(obj, n);
			cout << " ==========================================================================================================";
		}
		// Sort salary decending
		void sortSalaryDecending(Employee obj[], int n) {

			system("cls");

			cout << "\n =====================================================================================";
			cout << "\n                                  SORT EMPLOYEE MENU";
			cout << "\n =====================================================================================\n";

			Employee objEmp;
			for (int i = 0; i < n; i++) {
				for (int j = i + 1; j < n; j++) {
					if (obj[i].getSalary() < obj[j].getSalary());
					objEmp = obj[i];
					obj[i] = obj[j];
					obj[j] = objEmp;
				}
			}

			system("cls");

			cout << "\n ==========================================================================================================";
			cout << "\n                                        VIEW ALL EMPLOYEE INFORMATION";
			cout << "\n ==========================================================================================================\n";

			getList(obj, n);
			cout << " ==========================================================================================================";
		}

		// Sort department acending
		void sortDepartmentAcending(Employee obj[], int n) {

			system("cls");

			cout << "\n =====================================================================================";
			cout << "\n                                  SORT EMPLOYEE MENU";
			cout << "\n =====================================================================================\n";

			Employee objEmp;
			for (int i = 0; i < n; i++) {
				for (int j = i + 1; j < n; j++) {
					if (obj[i].getDepartment() > obj[j].getDepartment());
					objEmp = obj[i];
					obj[i] = obj[j];
					obj[j] = objEmp;
				}
			}

			system("cls");

			cout << "\n ==========================================================================================================";
			cout << "\n                                        VIEW ALL EMPLOYEE INFORMATION";
			cout << "\n ==========================================================================================================\n";

			getList(obj, n);
			cout << " ==========================================================================================================";
		}

		// Sort department decending
		void sortDepartmentDecending(Employee obj[], int n) {

			system("cls");

			cout << "\n =====================================================================================";
			cout << "\n                                  SORT EMPLOYEE MENU";
			cout << "\n =====================================================================================\n";

			Employee objEmp;
			for (int i = 0; i < n; i++) {
				for (int j = i + 1; j < n; j++) {
					if (obj[i].getDepartment() < obj[j].getDepartment());
					objEmp = obj[i];
					obj[i] = obj[j];
					obj[j] = objEmp;
				}
			}

			system("cls");

			cout << "\n ==========================================================================================================";
			cout << "\n                                        VIEW ALL EMPLOYEE INFORMATION";
			cout << "\n ==========================================================================================================\n";

			getList(obj, n);
			cout << " ==========================================================================================================";
		}

		// Delete employee by ID
		void deleteEmployee(Employee obj[],int &n) {

			system("cls");

			cout << "\n =====================================================================================";
			cout << "\n                               DELETE EMPLOYEE INFORMATION";
			cout << "\n =====================================================================================\n";

			int idSearch, idFound;
			char choice;
				cout << "\n\t PLEASE INPUT EMPLOYEE ID TO DELETE : "; cin >> idSearch;
				idFound = 0;
				for (int i = 0; i < n; i++) {
					if (idSearch == obj[i].getId()) {
						//Show employee information

						system("cls");

						cout << "\n ==========================================================================================================";
						cout << "\n                                        VIEW ALL EMPLOYEE INFORMATION";
						cout << "\n ==========================================================================================================\n";

						printHeader();
						obj[i].output();
						cout << " ==========================================================================================================\n";

						//Massage confirm to delete
						cout << "\n\t ARE YOU SURE YOU WANT TO DELETE EMPLOYEE ID No. ?\n";
						cout << "\n\t PLEASE CONFIRM YOUR CHOICE (Y/N) : ";
						cin >> choice;
						if (choice == 'Y' || choice == 'y')
						{
							//Delete employee information from list
							for (int j = i; j < n; j++) {
								obj[j] = obj[j + 1];
							}
							system("cls");

							cout << "\n =====================================================================================";
							cout << "\n                               DELETE EMPLOYEE INFORMATION";
							cout << "\n =====================================================================================\n";

							//Massage confirm when deleting successfull !
							cout << "\n\t EMPLOYEE ID (" << idSearch << " ) IS SUCCESSFULL TO DELETE FROM THE LIST !" << endl;
							cout << "\n\t "; system("pause");
							n--;
							idFound=1;
							break;
						}
						else {
							system("cls");

							cout << "\n =====================================================================================";
							cout << "\n                               DELETE EMPLOYEE INFORMATION";
							cout << "\n =====================================================================================\n";

							//Massage confirm when deleting not successfull !
							cout << "\n\t EMPLOYEE ID (" << idSearch << " ) IS NOT SUCCESSFULL TO DELETE FROM THE LIST !" << endl;
							cout << "\n\t "; system("pause");
							idFound++;
							break;
						}
					}
				}
				if (idFound == 0) {

					system("cls");

					cout << "\n =====================================================================================";
					cout << "\n                               DELETE EMPLOYEE INFORMATION";
					cout << "\n =====================================================================================\n";

					cout << "\n\t EMPLOYEE ID (" << idSearch << " ) NOT FOUND IN THE LIST !" << endl;
					cout << "\n\t "; system("pause");
				}
			//getList(obj, n);
		}

		// Update employee by ID
		void updateEmployee(Employee obj[],int n) {

			system("cls");

			cout << "\n =====================================================================================";
			cout << "\n                               UPDATE EMPLOYEE INFORMATION";
			cout << "\n =====================================================================================\n";

			int idSearch, idFound, optionUpdate;
				cout << "\n\t PLEASE INPUT EMPLOYEE ID TO UPDATE : "; cin >> idSearch;
				idFound = 0;
					for (int i = 0; i < n; i++) {
						if (idSearch == obj[i].getId()) {

							system("cls");

							cout << "\n ==========================================================================================================";
							cout << "\n                                        VIEW EMPLOYEE INFORMATION";
							cout << "\n ==========================================================================================================\n";

							obj->printHeader();
							obj[i].output();

							cout << " ==========================================================================================================" << endl;
							cout << "\n\t EMPLOYEE INFORMATION UPDATE MENU : " << endl;
							cout << "\n\t [1] UPDATE ID (0XXXX)" << endl;
							cout << "\n\t [2] UPDATE NAME" << endl;
							cout << "\n\t [3] UPDATE GENDER (M/F)" << endl;
							cout << "\n\t [4] UPDATE ADDRESS" << endl;
							cout << "\n\t [5] UPDATE POSITION" << endl;
							cout << "\n\t [6] UPDATE DEPARTMENT" << endl;
							cout << "\n\t [7] UPDATE SALARY" << endl;
							cout << "\n\t [8] UPDATE All" << endl;
							cout << "\n\t [9] BACK" << endl;
							cout << "\n\t PLEASE CHOOSE OPTIONS (1-9) TO UPDATE : "; cin >> optionUpdate;
							do {
								switch (optionUpdate)
								{
								case 1:
									cout << "\n\t INPUT NEW ID (0XXXX) : "; cin >> obj[i].id;
									break;
								case 2:
									cout << "\n\t INPUT NEW NAME : "; cin.clear(); cin.ignore(); getline(cin, name);
									break;
								case 3:
									cout << "\n\t INPUT NEW GENDER (M/F) : "; cin >> obj[i].gender;
									break;
								case 4:
									cout << "\n\t INPUT NEW ADDRESS : "; cin.clear(); cin.ignore(); getline(cin, address);
									break;
								case 5:
									cout << "\n\t INPUT NEW POSITION : "; cin.clear(); cin.ignore(); getline(cin, position);
									break;
								case 6:
									cout << "\n\t INPUT NEW DEPARTMENT : "; cin.clear(); cin.ignore(); getline(cin, department);
									break;
								case 7:
									cout << "\n\t INPUT NEW SALARY : "; cin >> obj[i].salary;
									break;
								case 8:
									cout << "\n\t INPUT NEW ID (0XXXX) : "; cin >> obj[i].id;
									cout << "\n\t INPUT NEW NAME : "; cin.clear(); cin.ignore(); getline(cin, name);
									cout << "\n\t INPUT NEW GENDER (M/F) : "; cin >> obj[i].gender;
									cout << "\n\t INPUT NEW ADDRESS : "; cin.clear(); cin.ignore(); getline(cin, address);
									cout << "\n\t INPUT NEW POSITION : "; cin.clear(); cin.ignore(); getline(cin, position);
									cout << "\n\t INPUT NEW DEPARTMENT : "; cin.clear(); cin.ignore(); getline(cin, department);
									cout << "\n\t INPUT NEW SALARY : "; cin >> obj[i].salary;
									break;
								}

								system("cls");

								cout << "\n ==========================================================================================================";
								cout << "\n                                    UPDATE EMPLOYEE INFORMATION";
								cout << "\n ==========================================================================================================\n";

								cout << "\n\tEMPLOYEE INFORMATION IS UPDATED SUCCESSFULY !\n";
								cout << "\n\tEMPLOYEE's INFORMATION AFTER MODIFY :\n";

								// Show employee data after modify
								cout << "\n ==========================================================================================================\n";
								obj->printHeader();
								obj[i].output();
								cout << " ==========================================================================================================\n";
								idFound = 1;
								cout << "\n\t"; system("pause");
								break;
							} while (optionUpdate != 9);
						}
					}
					if (idFound == 0) {

						system("cls");

						cout << "\n =====================================================================================";
						cout << "\n                               UPDATE EMPLOYEE INFORMATION";
						cout << "\n =====================================================================================\n";

						cout << "\n\t EMPLOYEE ID (" << idSearch << " ) NOT FOUND IN THE LIST !" << endl;
						cout << "\n\t "; system("pause");
					}
		}

		//User menu
		void userMenu() {
			system("cls");
			cout << "\n =====================================================================================";
			cout << "\n                                   USER MANAGER MENU";
			cout << "\n =====================================================================================\n";
			cout << "\n\t [1] ADD NEW USER";
			cout << "\n\n\t [2] VIEW ALL USERS";
			cout << "\n\n\t [0] EXIT";
			cout << "\n\n\t PLEASE CHOOSE OPTIONS (0-2) : ";
		}
};

