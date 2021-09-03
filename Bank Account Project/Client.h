#ifndef CLIENT_H
#define CLIENT_H
#include "Person.h"

class Client : public Person
{
	public:
		Client();
		
		
		
		void setBalance(double b){
			if (b>=1500){
				blance = b;
	
			}else{
				cout<<"the minimum blance is 1500, please enter again"<<endl;
			}
		}
		
		double getBalance(){
				return blance = b;
		}
		
		void setCurrency(string C){
			currency = C;
		}
		
		string getCurrency(){
			return currency;
		}
		
	protected:
		double balance;
		string currency;
};

#endif
