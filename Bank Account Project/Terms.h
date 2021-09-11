#ifndef TERMS_H
#define TERMS_H
using namespace std ;
class Terms{
	public:
//------------------------------------------------------------------------------------------
		// 	string must be alphabetic chars
static bool isAlphabetic(string s){
		bool v = true ;
	for (int i = 0; i < s.length(); i++){
	if (s[i] >= 'a' && s[i] <= 'z'  || s[i] >= 'A' && s[i] <= 'Z'  ){
	}
	else 
		v = false ;
	}
					return v ;
	}
//------------------------------------------------------------------------------------------
		// 	min size  and max size of string
static bool isLenght(string s ,int min_size , int max_size ){
	if (s.length() >=min_size && s.length() <=max_size )
		return true;	
	else 
		return false ;	
	}	
//------------------------------------------------------------------------------------------
		// 	string must be digits chars
static bool isDigits (string s){
		for (int i = 0; i < s.length(); i++){
	if (s[i] >= '0' && s[i] <= '9' )
					return true;
		else
			return  false;		
	} 		
}
//------------------------------------------------------------------------------------------
		// 	string mustn’t contain white space
static bool Withoutspace (string s){
		for (int i = 0; i < s.length(); i++){
	if (s[i] != ' ' )
					return true;
		else
			return  false;		
	} 		
}	
};

#endif
