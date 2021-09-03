#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Person.h"

class Employee : public Person
{
	public:
		
		Employee();
		
		void setPassword(string pinCode ){
			if(pinCode.size()>=8 && pinCode.size()<20){
				password=pinCode ;
			}else{
				cout<<"the paswword must be between 8 and 20 numbers"<< endl;
			}
		}
		
		void setSalary(double s){
			if (s>=5000){
				salary = s;
	
			}else{
				salary = 5000 ;
			}
		}
		
		string getPassword (){
			return password ;
		}
		
		double getSalary (){
			return salary ;
		}
		
	protected:
		
		string password ;
		double salary ;
		
};

#endif
