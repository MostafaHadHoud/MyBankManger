#include <iostream>
#include <fstream>
#include "Client.h"
#include "Employee.h"
#include "SaveObjects.h"
#include "Admin.h"
#include "FileManager.h"
using namespace std ;
	
//Add Employee Function
void addEmployee() {
	string StrVar ;
	int intVar ;
	double douVar ;
	
Employee* emp1 = new Employee ;
cout << "Enter Employee Name : ";
cin >> StrVar ;
emp1->setName(StrVar);

cout << "Enter National Id : ";
cin >> StrVar ;
emp1->setNationalId(StrVar);
 
cout << "Enter ID : ";
cin >> intVar ;
emp1->setId(intVar);
 
cout << "Enter password : ";
cin >> StrVar ;
emp1->setPassword(StrVar);
 
cout << "Enter Salary : ";
cin >> douVar ;
emp1->setSalary(douVar);
cout << "-------- Employee Info is --------" << endl ;
emp1->display();
FileManager::saveEmployee(*emp1);

}

//Add Client Function
void addClient() {
	string StrVar ;
	int intVar ;
	double douVar ;
		
Client* c1 = new Client  ;
cout <<"\nEnter Client Name : ";
cin >> StrVar ;
c1->setName(StrVar);	

cout << "Enter National Id : ";
cin >> StrVar ;
c1->setNationalId(StrVar);
   
cout << "Enter Pin Code : ";
cin >> StrVar ;
c1->setPinCode(StrVar);
 
cout << "Enter Balance : ";
cin >> douVar ;
c1->setBalance(douVar);
  
cout << "Enter ID : ";
cin >> intVar ;
c1->setId(intVar);
  
cout << "Enter Currency Name : ";
cin >> StrVar ;
cout << "Enter Currency id : " ;
cin >> intVar ;
cout << "Enter Currency value : " ;
cin >> douVar ;
c1->setCurrency(StrVar , intVar , douVar);

cout << "-------- Client Info is --------" << endl ;
c1->display();

FileManager::saveClient(*c1);
FileManager::saveCurrency(*c1);

}
//Add Admin Function
void addAdmin() {
	string StrVar ;
	int intVar ;
	double douVar ;	
	
Admin* admin2 = new Admin ;
cout << "Enter Admin Name : ";
cin >> StrVar ;
admin2->setName(StrVar);

cout << "Enter National Id : ";
cin >> StrVar ;
admin2->setNationalId(StrVar);
 
cout << "Enter ID : ";
cin >> intVar ;
admin2->setId(intVar);
 
cout << "Enter password : ";
cin >> StrVar ;
admin2->setPassword(StrVar);
 
cout << "Enter Salary : ";
cin >> douVar ;
admin2->setSalary(douVar);

cout << "-------- Admin Info is --------" << endl ;
admin2->display();
FileManager::saveAdmin(*admin2);
}


int main(int argc, char** argv) {

// Variables to use
string StrVar ;
int intVar ;
double douVar ;

// object from Admin class to enter to Administrate
Admin* admin1 = new Admin ;
admin1->setPassword("12345678");

// welcome screen 
cout << endl << " ------------------- welcome to Egypt Bank System ------------------- " << endl <<endl ;
cout << endl << "Please Enter Your Type \n\n"  <<"1- Admin . \n\n" <<"2- Employee . \n\n" << "choice : " ;
cin >>intVar ;
cout << "-------------------------------------------------------" <<endl << endl ;
if (intVar == 1 ) {	
// Admin screen 
{cout<<"\nAdmin Enter Your Password : ";
cin>>StrVar;
	if (StrVar == admin1->getPassword()){
		cout<<"\n*****WELCOME ADMINISTRATOR*****\n";
		cout << endl << "Please Enter Your Service \n\n"  <<"1- Add Admin . \n\n" <<"2- Add Employee . \n\n"<<"3- show Database . \n\n" << "choice : " ;
		cin >> intVar ;
		if (intVar ==1)
		// can add admin 
		 addAdmin();	
	
		else if (intVar == 2)
		// can add Employee
		addEmployee();
		
		else if (intVar == 3){
		// can show Database
		cout << "-------------------------------------------------------" <<endl << endl ;
	cout << endl << "Show Database of what ? \n\n"  <<"1-All Admins . \n\n" <<"2-All Employees . \n\n"<<"3-All Currencies . \n\n"<<"4-All Clients . \n\n" << "choice : " ;
		cin >> intVar ;
		if (intVar == 1 )
			FileManager::readAdmin();
		else if (intVar == 2)
			FileManager::readEmployee();
		else if (intVar == 3)
			FileManager::readCurrency();
		else if (intVar == 4)
			FileManager::readClient();		
			
		else {
			cout<<"Error : Not a valid Number ";
		}			
		}
		
		else   
		{cout<<"Error : Not a valid Number "; 
		} 				
		}
		else{	
		cout<<"\nYou Are No Admin\n";
		}
	}
	}

else if (intVar == 2 ){
// Employee screen 
cout<<"\n*****WELCOME Employee*****\n";
		cout << endl << "Please Enter Your Service \n\n"  <<"1- Add Client . \n\n" << "choice : " ;
 		cin >> intVar ;
		if (intVar == 1)
		// can add Client 
		 addClient();	
		else				  
			{cout<<"Error : Not a valid Number "; 
			} 	
		}
	else   
	{cout<<"Error : Not a valid Number "; 
	} 

	return 0;
}
