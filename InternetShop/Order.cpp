#include "stdafx.h"
#include "Order.h"


Order::Order()
{
	timezone = 3; //������� ����
	
	GetSystemTime(&st);
	day = st.wDay;
	month = st.wMonth;
	hour = st.wHour + timezone;
	minute = st.wMinute;
	year = st.wYear;

	status = false; 
	orderId = 0;
	price = 0; 
	/*std::cout << day; // ����� ������
	std::cout << month; // ����� ��� 
	std::cout << hour; // ����� ����
	std::cout << minute; // ����� ������*/


}




Order::~Order()
{
}

void Order::getStatus()
{
	if (Order::status == true) {
		std::cout << " ����� ���������! " << std::endl;
	}
	else {
		std::cout << " ����� ������� �����������. " << std::endl;
	}
}

void Order::setStatus()
{
	Order::status = true; 
}


void Order::getOrder() {

	Order::name = product.getProductName();
	std::cout << "Product name " << Order::name;
	//����� ����
	std::cout << "���� ������: " << Order::day << "-" << Order::month << "-" << Order::year << " " << Order::hour << ":" << minute << std::endl;
	//����� �������
	if (Order::status == true) {
		std::cout << " ����� ���������! " << std::endl;
	}
	else {
		std::cout << " ����� ������� �����������. " << std::endl;
	}

	std::cout << "ID " << orderId << std::endl;
	std::cout <<"a/c "<< price << std::endl;
}
