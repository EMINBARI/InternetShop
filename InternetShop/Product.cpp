#include "stdafx.h"
#include <iostream>
#include <ostream>
#include <string>
#include "Product.h"
#include "Order.h"

using namespace std; 

Product::Product()
{
	productID = 0;
	productCost = 0;
	productName = "no value";

}

Product::Product(int id, int cost, std::string name) {
	Product::productID = id;
	Product::productCost = cost;
	Product::productName = name;
}

	void Product::setArray(){

		/*productsList.push_back(Product(123523, 500, "Computer HP"));
		productsList.push_back(Product(879554, 100, "Computer Asus"));
		productsList.push_back(Product(562656, 800, "Computer Apple"));
		productsList.push_back(Product(232085, 550, "CPU Intel i7"));
		productsList.push_back(Product(123065, 200, "Samsung Galaxy Tab S"));
		productsList.push_back(Product(789855, 450, "Iphone 7"));
		productsList.push_back(Product(123025, 420, "Ipad Air 3"));
		productsList.push_back(Product(696364, 500, "Canon 2035"));
		productsList.push_back(Product(203225, 250, "Xiaomi Mi 5"));
		productsList.push_back(Product(456231, 650, "Samsung S9"));
		productsList.push_back(Product(120523, 800, "Iphone 8"));
		productsList.push_back(Product(753698, 380, "Ipod Touch 6"));
		productsList.push_back(Product(120365, 1500, "HP Spectre"));*/
}

	string Product::getProductName()
	{
		return this->productName;
	}

	void Product::buyProduct()
	{

		/*cout << "Do u wanna buy this staf?\n Enter yes or no" << endl;
		cin >> condition;
		if (condition == "yes") {
			Order order1;
		}*/
		/*.jkgfgcfvhvckhgjhckuhjkfglcykugkfkudyfg*/


	}

Product::~Product()
{
}

void Product::getProductInfo(int i)
{
	cout << "I equal" << i << endl;
	cout << "Name: " << Product::productsList[i].productName <<
		"  Cost: " << Product::productsList[i].productCost <<
		"  ID: " << Product::productsList[i].productID << endl;

}
