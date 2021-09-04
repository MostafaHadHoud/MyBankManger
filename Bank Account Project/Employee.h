#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Terms.h"
#include "Person.h"
using namespace std ;

class Employee : public Person 
{
	private:
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
			Terms t1 ;
					if( t1.Withoutspace(p) == 1 && t1.isLenght(p,8,20) == 1){
				password = p ;
			}
			else {
				cout << "password must not contain white space and the sizebetween 8 and 20" ;
			}
		}
		
		void setSalary (double b){
			if ( b>=5000){
				salary = b ;	
			}
			else {
				cout << " Min Salary is 5000 " << endl ;
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
			cout << "password is = " << this->getPassword() <<endl;
			cout << "Salary is = " << this->getSalary() <<endl;
		}	
		
};

#endif
