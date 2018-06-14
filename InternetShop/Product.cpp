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
		 
}

	string Product::getProductName()
	{
		
	}

	void Product::buyProduct()
	{


	}

Product::~Product()
{
}

void Product::getProductInfo(int i)
{


}
