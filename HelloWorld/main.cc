/*
 * main.cc
 *
 *  Created on: 15 ����. 2020 �.
 *      Author: inform
 */




#include <iostream>
#include <cmath>
#include <iomanip>

constexpr double Pi = acos(-1.);

int main(){
	std::cout << "������ ���!!" << std::endl;

	std::cout <<"������� ������ ����������: ";
	double radius;
	std::cin >> radius;
	double
		length = 2*Pi*radius,
		area = Pi*radius*radius;

	std::cout<<
			std::fixed<<
			"����� ���������� = "<< std::setw(9) << std::setprecision(3)<<length<<std::endl<<
			"������� �����    = " << std::setw(9) << std::setprecision(3)<<area<<std::endl;
	return 0;
}
