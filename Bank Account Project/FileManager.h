#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include "Admin.h"
#include "Client.h"
#include "Currency.h"
#include "Employee.h"
using namespace std ;

class FileManager
{
	public:

//--------- saving to file ----------------	
	//save to Client.txt
    static void saveClient(Client s){
		ofstream ofs("Clients.txt");
		ofs << s; 
		ofs.close();    
	 }
	 	 
	//save to Currency.txt	
	static void saveCurrency(Client s){
		ofstream ofs("Currency.txt");
		ofs << s.getCurrency(); 
		ofs.close();    
	 }
	 
		//save to Employee.txt	
	static void saveEmployee(Employee s){
		ofstream ofs("Employee.txt");
		ofs << s; 
		ofs.close();  
	 }
	 
		//save to Admin.txt	
	static void saveAdmin(Admin s){
	ofstream ofs("Admin.txt");
		ofs << s;
		ofs.close(); 
	 }
	
//--------- retrieve from file ----------------	
	
		//retrieve from Admin.txt	
	static void readClient(){
		vector<string> vecOfStrs;
	ifstream in("Clients.txt");
	string str;
	while (std::getline(in, str))
			{
    if(str.size() > 0)
        vecOfStrs.push_back(str);
			}
	for(std::string & line : vecOfStrs)
            std::cout<<line<<std::endl;
    }
    
     	//retrieve from Currency.txt	
	static void readCurrency(){
		vector<string> vecOfStrs;
	ifstream in("Currency.txt");
	string str;
	while (std::getline(in, str))
			{
    if(str.size() > 0)
        vecOfStrs.push_back(str);
			}
	for(std::string & line : vecOfStrs)
            std::cout<<line<<std::endl;
    }

	 	//retrieve from Employee.txt	
	static void readEmployee(){
		vector<string> vecOfStrs;
	ifstream in("Employee.txt");
	string str;
	while (std::getline(in, str))
			{
    if(str.size() > 0)
        vecOfStrs.push_back(str);
			}
	for(std::string & line : vecOfStrs)
            std::cout<<line<<std::endl;
    }
	 
		//retrieve from Admin.txt		 
	static void readAdmin(){
		vector<string> vecOfStrs;
	ifstream in("Admin.txt");
	string str;
	while (std::getline(in, str))
			{
    if(str.size() > 0)
        vecOfStrs.push_back(str);
			}
	for(std::string & line : vecOfStrs)
            std::cout<<line<<std::endl;
    }
	 	 	
	
};

#endif
