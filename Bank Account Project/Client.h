#ifndef CLIENT_H
#define CLIENT_H
#include "Terms.h"
#include "Person.h"
#include "Currency.h"
#include <fstream>

using namespace std ;

class Client : public Person
{
	protected:
		string pin_code ;
		double balance ;
		Currency currency_ob ;
		
	public :
		// constructor
		Client (){
			pin_code = " " ;
			balance = 0 ;
			 
		}
			// Setter
	void setPinCode (string pinCode){
		if( (Terms::isDigits(pinCode)) && (pinCode.length() == 4) )
			pin_code = pinCode ;
		else 
		cout << "Error : pinCode must be digits chars and the size = 4.\n\n" ;	
			}						
	void setBalance (double Balance){
	if ( Balance>=1500)
		balance = Balance ;	
		else {
		balance = 1500 ;
		cout << "Error : Min balance is 1500 .\n\n" << endl ;
			}
		}
		
	void setCurrency (string Name , int Id , double Value) {
		currency_ob.setName(Name) ;
		currency_ob.setId(Id) ;
		currency_ob.setValue(Value) ;

	}
	
			// Getter			
	string getPinCode (){
		return pin_code ;
		}		
	double getBalance (){
		return balance ;
		}	
		
	Currency getCurrency (){
		return currency_ob ;
	}	
					
		
			// Display Function						
	void display (){
		Person :: display () ;
		cout << "PinCode       = "  << this->getPinCode() <<endl;
		cout << "Balance       = "  << this->getBalance() <<endl;
		cout << "Currency Name = "  << this->getCurrency().getName() <<" ,";
		cout << "Id = "  << this->getCurrency().getId() <<" ,";
		cout << "Value = "  << this->getCurrency().getValue()  << endl;
		}
		
		
			//Operator Overloading to save object to file
  friend ostream& operator<<(ostream &os,  Client& s)
	{
		os <<"Name          : " <<s.getName() << '\n';
		os <<"National Id   : " <<s.getNationalId() << '\n';
		os <<"Id            : " <<s.getId() << '\n';
		os <<"Pin Code      : " <<s.getPinCode() << '\n';
		os <<"Balance       : " << s.getBalance()<< '\n' ;
		os <<"Currency Name = " << s.getCurrency().getName()<< " ," ;
		os <<"Id = "  << s.getCurrency().getId()<< " ," ;
		os <<"Value = " << s.getCurrency().getValue()<< '\n' ;
		os  << "---------------"<< '\n' ;
		return os;
		
	}
	
		
		
};

#endif
