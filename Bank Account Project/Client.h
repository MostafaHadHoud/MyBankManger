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
			Currency = " " ;
		}
			// Setter
			void setPinCode (string n){
			Terms t1 ;
			if( (t1.isDigits(n) == 1) && (n.length() == 4) ){
				pin_code = n ;
			}
			else {
				cout << "pinCode must be digits chars and the size = 4" ;
			}			
			
		}						
		void setBalance (double b){
			if ( b>=1500){
				balance = b ;	
			}
			else {
				cout << " Min balance is 1500 " << endl ;
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
			cout << "PinCode is = " << this->getPinCode() <<endl;
			cout << "Balance is = " << this->getBalance() <<endl;
			cout << "Currency is = "<< this->getCurrency() <<endl;	
		}
};

#endif
