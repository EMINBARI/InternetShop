#include "stdafx.h"
#include "Order.h"


Order::Order()
{
	timezone = 3; //часовой пояс
	
	GetSystemTime(&st);
	day = st.wDay;
	month = st.wMonth;
	hour = st.wHour + timezone;
	minute = st.wMinute;
	year = st.wYear;

	status = false; 
	orderId = 0;
	price = 0; 
	/*std::cout << day; // Вывод месяца
	std::cout << month; // Вывод дня 
	std::cout << hour; // Вывод часа
	std::cout << minute; // Вывод минуты*/


}




Order::~Order()
{
}

void Order::getStatus()
{
	if (Order::status == true) {
		std::cout << " Заказ отправлен! " << std::endl;
	}
	else {
		std::cout << " Заказ ожидает отправления. " << std::endl;
	}
}

void Order::setStatus()
{
	Order::status = true; 
}


void Order::getOrder() {

	Order::name = product.getProductName();
	std::cout << "Product name " << Order::name;
	//вывод дату
	std::cout << "Дата заказа: " << Order::day << "-" << Order::month << "-" << Order::year << " " << Order::hour << ":" << minute << std::endl;
	//вывод статуса
	if (Order::status == true) {
		std::cout << " Заказ отправлен! " << std::endl;
	}
	else {
		std::cout << " Заказ ожидает отправления. " << std::endl;
	}

	std::cout << "ID " << orderId << std::endl;
	std::cout <<"a/c "<< price << std::endl;
}
