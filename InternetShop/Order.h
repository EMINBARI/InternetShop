#pragma once
#include <iostream>
#include <windows.h>
#include <string>
#include "Product.h"

class Order
{

protected:
	Product product;

	unsigned int price;
	int day, month,hour,minute, year;
	bool status;
	int orderId;
	int timezone; 
	SYSTEMTIME st;

	std::string name; 

	


public:
	Order();
	~Order();

	void getStatus();
	void setStatus();
	void getOrder();

};

