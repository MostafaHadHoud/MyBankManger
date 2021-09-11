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
	void setName (string Name){
			if( Terms::isAlphabetic(Name)&& Terms::isLenght(Name,5,20))
				name = Name ;
				else 
				cout << "Error : the name must be alphabetic chars and min size 5 and max size 20 .\n\n" ;				
			}				
	void setNationalId (string nationalId){
			if( (Terms::isDigits(nationalId)) && (nationalId.length() == 14) )
				national_id = nationalId ;	
			else 
				cout << "Error :  national id must be digits chars and the size = 14 .\n\n" ;								
			}		
	void setId (int Id){
		id = Id ;
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
			cout << "name          = " << this->getName() <<endl;
			cout << "National Id   = " << this->getNationalId() << endl;
			cout << "Id            = " << this->getId() << endl;	
		}				
};

#endif
