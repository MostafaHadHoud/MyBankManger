#ifndef PERSON_H
#define PERSON_H
#include "Terms.h"
using namespace std ;

class Person
{
	protected:
		string name ;
		string national_id ;
		int id ;	
				
	public:
	// constructor	
	Person (){
		name = " ";
		national_id = " ";
		id = 0 ;
	}	
	//setters	
	void setName (string n){
		Terms t1 ;
			if( t1.isAlphabetic(n) == 0&& t1.isLenght(n,5,20) == 1){
				name = n ;
			}
			else {
				cout << "the name must be alphabetic chars and min size 5 and max size 20" ;
			}		
		}
				
	void setNationalId (string n){
		Terms t1 ;
			if( (t1.isDigits(n) == 1) && (n.length() == 14) ){
				national_id = n ;
			}
			else {
				cout << " national id must be digits chars and the size = 14" ;
			}					
		}		
		void setId (int i){
		id = i ;
		}		
	
				
		// Getters		
			string getName (){
			return name ;
		}		
		string getNationalId (){
		return national_id ;
		}
				
		int getId (){
		return id ;
		}	
		
		// Display Function
		void display (){
			cout << "name is = " << this->getName() <<endl;
			cout << "National Id is = " << this->getNationalId() << endl;
			cout << "Id is = " << this->getId() << endl;	
		}		
		
		
		
};

#endif
