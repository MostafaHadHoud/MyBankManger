#ifndef CLIENT_H
#define CLIENT_H
#include "Terms.h"
#include "Person.h"
using namespace std ;

class Client : public Person
{
	private:
		string pin_code ;
		double balance ;
		string Currency ;
		
	public :
		// constructor
		Client (){
			pin_code = " " ;
			balance = 0 ;
			Currency = "EGP" ;
		}
			// Setter
			void setPinCode (string n){
			Terms t1 ;
			if( (t1.isDigits(n) == 1) && (n.length() == 4) ){
				pin_code = n ;
			}
			else {
				cout << "Error : pinCode must be digits chars and the size = 4.\n\n" ;
			}			
			
		}						
		void setBalance (double b){
			if ( b>=1500){
				balance = b ;	
			}
			else {
				balance = 1500 ;
				cout << "Error : Min balance is 1500 .\n\n" << endl ;
			}
		}
		void setCurrency (string c){
			Currency = c ;
		}
			// Getter			
		string getPinCode (){
		return pin_code ;
		}		
		double getBalance (){
		return balance ;
		}
				
		string getCurrency (){
		return Currency ;
		}
		
			// Display Function
						
			void display (){
			Person :: display () ;
			cout << "PinCode     = " << this->getPinCode() <<endl;
			cout << "Balance     = " << this->getBalance() <<endl;
			cout << "Currency    = "<< this->getCurrency() <<endl;	
		}
};

#endif
