/*
 * main.cc
 *
 *  Created on: 15 ����. 2020 �.
 *      Author: inform
 */




#include <iostream>
#include <cmath>
#include <iomanip>

//constexpr double Pi = acos(-1.);

int main(){
//	std::cout << "������ ���!!" << std::endl;
//
//	std::cout <<"������� ������ ����������: ";
//	double radius;
//	std::cin >> radius;
//	double
//		length = 2*Pi*radius,
//		area = Pi*radius*radius;
//
//	std::cout<<
//			std::fixed<<
//			"����� ���������� = "<< std::setw(9) << std::setprecision(3)<<length<<std::endl<<
//			"������� �����    = " << std::setw(9) << std::setprecision(3)<<area<<std::endl;
	std::cout<<"��� ����� ������������ �����!"<< std::endl;
	double start, end, step;
	std::cout<<"������� ������ ����������: ";
	std::cin>> start;
	std::cout<<"������� ����� ����������:";
	std::cin>>end;
	std::cout<<"������� ���: ";
	std::cin>>step;
	std::cout<<
			"   x    |   sin(x)   \n"
			".....................\n";

	std::cout<<std::fixed;

	for (double x=start; x<=end;x+=step){
		double y = sin(x);

		int w = int(2.+(y+1.)*20.);

		std::cout<<
				std::setw(9)<<
				std::setprecision(3)<<
				x << " | " <<
				std::setw(8)<<
				std::setprecision(5)<<
				y<<
				std::setw(w)<< '*' <<
				std::endl;

	}
	return 0;
}
