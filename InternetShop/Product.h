#pragma once

#include <vector>
#include <string>

using namespace std;

class Product
{
public:
	Product();
	~Product();

	Product(int id, int cost, std::string name);

	void getProductInfo(int i);  //function
	void setArray();  //function
	string getProductName();

	void buyProduct();

	string condition; 

protected:
	int productID;
	std::string productName;
	unsigned int productCost;
	
	//const int a=5; 

	//Product productArray[a];

	std::vector<Product> productsList;





};

