#include <iostream>
#include "Client.h"
#include "Employee.h"
using namespace std ;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
 // parameters
string name , national_id , pin_code , Currency , password ;
int id ;
double balance , salary ;

//--------------------------------------------------------------
 //  client
Client c1 ;
cout << " Enter Client Name : ";
cin >> name ;
c1.setName(name);
cout << c1.getName() <<endl ;

cout << " Enter National Id : ";
cin >> national_id ;
c1.setNationalId(national_id);
cout << c1.getNationalId() <<endl ;
   
cout << " Enter Pin Code : ";
cin >> pin_code ;
c1.setPinCode(pin_code);
cout << c1.getPinCode() <<endl ;
 
cout << " Enter Balance : ";
cin >> balance ;
c1.setBalance(balance);
cout << c1.getBalance() <<endl ;
  
cout << " Enter ID : ";
cin >> id ;
c1.setId(id);
cout  << c1.getId() <<endl ;
  
cout << " Enter Currency : ";
cin >> Currency ;
c1.setCurrency(Currency);
cout  << c1.getCurrency() <<endl ;
   
cout << "-------- Client Info is --------" << endl ;
c1.display();

//-----------------------------------------------------------

 //  Employee
Employee emp1 ;
cout << " Enter Employee Name : ";
cin >> name ;
emp1.setName(name);
cout << emp1.getName() <<endl ;

cout << " Enter National Id : ";
cin >> national_id ;
emp1.setNationalId(national_id);
cout << emp1.getNationalId() <<endl ;
 
cout << " Enter ID : ";
cin >> id ;
emp1.setId(id);
cout  << emp1.getId() <<endl ;
 
cout << " Enter password : ";
cin >> password ;
emp1.setPassword(password);
cout << emp1.getPassword() <<endl ;
 
cout << " Enter Salary : ";
cin >> salary ;
emp1.setSalary(salary);
cout << emp1.getSalary() <<endl ;
  
   
cout << "-------- Employee Info is --------" << endl ;
emp1.display();

	return 0;
}
