// InternetShop.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "Product.h"
#include "Question.h"
#include "Administrator.h"
#include "Customer.h"
#include "Seller.h"
#include "Order.h"
#include <conio.h>
#include <stdio.h>


using namespace std;

void customerMenu();
void catalogMenu();
void viewCatalogCheck();
Customer customer1;
Product product1;

//void initilizeProducts() {
//	for (int j = 0; j < product1.productsList.size(); j++) {
//		product1.productsList[j];
//	}
//}





//меню программы
void mainMenu() {

	unsigned int i;
	while (1)
	{
		
		cout << " 0 : EXIT" << " || 1 : Enter as a CUSTOMER||2 : Enter as a SELLER||3 : Enter as an ADMINISTRATOR ||\n"
			<< "\nPlease, enter your choise:  ";

		cin >> i;
		if (cin.good())
			switch (i)
			{
			case 0: cout << "Program is canceled "; getchar(); exit(1);
			case 1:customerMenu();
				/*case 2:
				case 3: */
			default:cout << "It is not this variant... please repeat\n";
			}
		else {
			cout << "Please repeat"; getchar(); cin.clear();
			while (cin.get() != '\n') continue;
		}
	}
}

//меню для покупателя
void customerMenu() {
	unsigned int j;
	while (1)
	{

		cout << "\n------------------------------------------------------------------------------------------"
			<< "\n0 : Back to main menu" << " || 1 : LOGIN Internet Shop ||2 : View products catalog||3 :  ||\n"
			<< "\nPlease, enter your choise:  ";
		cin >> j;
		if (cin.good())
			switch (j)
			{
			case 0: cout << "Backing into main menu"; mainMenu();
			//case 1: customer1.customerLogin();
			//case 2: viewCatalogCheck();

				/*case 3: */
				//default:cout << "It is not this variant... please repeat\n";
			}
		else {
			cout << "Please repeat"; getchar(); cin.clear();
			while (cin.get() != '\n') continue;
		}

}

	void catalogMenu() {
		unsigned int k;

		product1.setArray();

		while (1)
		{

			cout << "\n0: Back to menu" <<
				"\n-----CATALOG-----\n" <<
				"1: Computer HP\n" <<
				"2: Computer Asus\n" <<
				"3: Computer Apple\n" <<
				"4: CPU Intel i7\n" <<
				"5: Samsung Galaxy Tab S\n" <<
				"6: Iphone 7\n" <<
				"7: Ipad Air 3\n" <<
				"8: Canon 2035\n" <<
				"9: Xiaomi Mi 5\n" <<
				"10: Samsung S9\n" <<
				"11: Iphone 8\n" <<
				"12: Ipod Touch 6\n" <<
				"13: HP Spectre\n";

			cin >> k;
			int q = k + 1;
			if (cin.good())
				switch (k)
				{
				case 0: cout << "Back to menu "; getchar(); exit(1);
				default: product1.getProductInfo(q);
				}
			else {
				cout << "Please repeat"; getchar(); cin.clear();
				while (cin.get() != '\n') continue;
			}
		}
}


void viewCatalogCheck() {
	
}


int main()
{

	Customer customer1;
	Seller seller1;
	Administrator administrator1; 

	Product product1; 
	product1.setArray();
	mainMenu(); 
	
	
	
	getchar();
	system("pause");
    return 0;
}


