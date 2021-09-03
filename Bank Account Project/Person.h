#ifndef PERSON_H
#define PERSON_H

class Person
{
	public:
		Person();
		
		void setName(string n){
			if(n.size()>=5 && n.size()<20){
				name=n;
			}else{
				cout<<"this name is too long write a shorter name"<<endl;
			}
		}
		
		string getName(){
				return name;
		}
		
		void setNationalId(string I){
			if(I.size()==14){
				national_id=I;
			}else{
				cout<<"Unvalid ID"<<endl;	
			}
		}
		
		string getNationalId(){
				return national_id;
		}
		
		
		void setPin_code(string PC){
			if(PC.size()==4){
				pin_code=PC;
			}else{
				cout<<"Unvalid pin code"<<endl;	
			}
			
		}
		
		string getPin_code(){
				return pin_code;
		}
		
		void setId(int Id){
			this.id=Id;
		}
		
		
		int setId(){
			return id;
		}
	protected:
		string name;
		string national_id;
		string pin_code;
		int id;
};

#endif
