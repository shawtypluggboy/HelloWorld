/*
 * main.cc
 *
 *  Created on: 15 сент. 2020 г.
 *      Author: inform
 */




#include <iostream>
#include <cmath>
#include <iomanip>

constexpr double Pi = acos(-1.);

int main(){
	std::cout << "Привет Мир!!" << std::endl;

	std::cout <<"Введите радиус окрыжности: ";
	double radius;
	std::cin >> radius;
	double
		length = 2*Pi*radius,
		area = Pi*radius*radius;

	std::cout<<
			std::fixed<<
			"Длина окружности = "<< std::setw(9) << std::setprecision(3)<<length<<std::endl<<
			"Площадь круга    = " << std::setw(9) << std::setprecision(3)<<area<<std::endl;
	return 0;
}
