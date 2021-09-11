#ifndef ADMIN_H
#define ADMIN_H
#include "Employee.h"

using namespace std ;

class Admin : public Employee
{
	public:
		
		
		
		//Operator Overloading to save object to file
		friend ostream& operator<<(ostream& os, Admin& s)
	{
		// write out individual members of s with an end of line between each one
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
