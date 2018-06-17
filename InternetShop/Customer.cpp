#include "stdafx.h"
#include "Customer.h"


Customer::Customer()
{
}


Customer::~Customer()
{
}

void Customer::askSeller()
{

}


void Customer::viewProducts()
{

}

void Customer::customerLogin()
{
	cout << "\nPlease fill this values : " << std::endl;
	cout << "\nEnter your name: ";
	cin >> Customer::initials;
	cout << "\nEnter your mail: ";
	cin >> Customer::mail;
	cout << std::endl;
	cout << "\nEnter your adress: ";
	cin >> Customer::adress;

	if (!initials.size() && !mail.size() && !adress.size()) {
		Customer::check = false;
	}
	else {
		Customer::check = true;
	}
}

