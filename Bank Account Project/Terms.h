#ifndef TERMS_H
#define TERMS_H
using namespace std ;
class Terms{
	public:
		// 	string must be alphabetic chars
	int isAlphabetic(string s){
		int v = 0 ;
	for (int i = 0; i < s.length(); i++){
	if (s[i] >= 'a' && s[i] <= 'z'  || s[i] >= 'A' && s[i] <= 'Z'  ){
	}
	else {
		v++ ;
		}
	}
					return v ;
	}

		// 	min size  and max size of string
	bool isLenght(string s ,int a , int b ){
	if (s.length() >=a && s.length() <=b ){
		return true;	
	}
	else {
		return false ;
	}	
	}	
		// 	string must be digits chars
	bool isDigits (string s){
		for (int i = 0; i < s.length(); i++){
	if (s[i] >= '0' && s[i] <= '9' ){
					return true;
	}
		else{
			return  false;
		}		
	} 
		
}
		// 	string mustn’t contain white space
	bool Withoutspace (string s){
		for (int i = 0; i < s.length(); i++){
	if (s[i] != ' ' ){
					return true;
	}
		else{
			return  false;
		}		
	} 
		
}
		
	
};

#endif
