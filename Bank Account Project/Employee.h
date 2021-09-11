#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Terms.h"
#include "Person.h"
using namespace std ;

class Employee : public Person 
{
	protected:
	string password ;
	double salary ;
	
	public:
		// constructor 
		Employee (){
			password = " ";
			salary = 0 ;
		}
		// Setters		
	void setPassword (string p){
					if( Terms::Withoutspace(p) && Terms::isLenght(p,8,20))
				password = p ;	
			else 
				cout << "Error :password must not contain white space and the sizebetween 8 and 20 .\n\n" ;
			}
	void setSalary (double b){
			if ( b>=5000)
				salary = b ;	
			else {
				salary = 5000 ;
				cout << " Error :Min Salary is 5000 .\n\n" << endl ;
			}
		}			
			// Getter					
	string getPassword (){
			return password ;
		}		
	double getSalary () {
			return salary ;
		}
			// Display					
	void display () {
			Person :: display () ;
			cout << "password      = " << this->getPassword() <<endl;
			cout << "Salary        = " << this->getSalary() <<endl;
		}	
		
			//Operator Overloading to save object to file
		friend ostream& operator<<(ostream& os, Employee& s)
	{
		os <<"Name          : " <<s.name << '\n';
		os <<"National Id   : " <<s.national_id << '\n';
		os <<"Id            : " <<s.id << '\n';
		os <<"Password      : " <<s.password << '\n';
		os <<"Salary        : " << s.salary<< '\n' ;
		os  << "---------------"<< '\n' ;
		return os;
		
	}
	
				
};

#endif
