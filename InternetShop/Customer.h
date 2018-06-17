#pragma once

#include <iostream>
#include <string>

using namespace std; 

class Customer
{
public:
	Customer();
	~Customer();

	void askSeller();
	//void buyProduct();
	void viewProducts(); 

	void customerLogin(); 
	bool check;

protected:

	string initials;
	string mail;
	string adress;

};

