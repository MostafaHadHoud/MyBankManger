#include <iostream>
#include <fstream>
#include "Client.h"
#include "Employee.h"
#include "Currency.h"
using namespace std ;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
 // parameters
string s ;
int x , i ;
double d ;
fstream MyClient ("Client.txt",ios :: out);
fstream MyEmployee ("Employee.txt",ios :: out);
fstream MyAdmin ("Admin.txt",ios :: out);
fstream MyCurrency ("Currency.txt",ios :: out);
 
 // objects
Client* c1 = new Client ;
Employee* emp1 = new Employee ;

// welcome screen 
cout << endl << " ------------------- welcome to Egypt Bank System ------------------- " << endl <<endl ;
cout << endl << "Please Enter Your Type \n\n"  <<"1- Client . \n\n" <<"2- Employee . \n\n" << "choice : " ;
cin >>x ;
cout << "-------------------------------------------------------" <<endl << endl ;
switch (x ) {	
case 1 :
//----------------------Client-------------------------------------
cout <<"\nEnter Client Name : ";
cin >> s ;
c1->setName(s);	

cout << "Enter National Id : ";
cin >> s ;
c1->setNationalId(s);
   
cout << "Enter Pin Code : ";
cin >> s ;
c1->setPinCode(s);
 
cout << "Enter Balance : ";
cin >> d ;
c1->setBalance(d);
  
cout << "Enter ID : ";
cin >> i ;
c1->setId(i);
  
cout << "Enter Currency : ";
cin >> s ;
c1->setCurrency(s);

cout << "-------- Client Info is --------" << endl ;
c1->display();	
break ;
case 2 :
//----------------------Employee-------------------------------------
cout << "Enter Employee Name : ";
cin >> s ;
emp1->setName(s);

cout << "Enter National Id : ";
cin >> s ;
emp1->setNationalId(s);
 
cout << "Enter ID : ";
cin >> i ;
emp1->setId(i);
 
cout << "Enter password : ";
cin >> s ;
emp1->setPassword(s);
 
cout << "Enter Salary : ";
cin >> d ;
emp1->setSalary(d);
 
cout << "-------- Employee Info is --------" << endl ;
emp1->display();	
break;	
default :cout<<"Error : Not a valid Number ";	
}


	return 0;
}
