#pragma once
#include <iostream>
#include <string>
class Complex {
private:
	double c1, c2;
	double x, y;

public:
	void cplx() {
		std::cout << "Enter real  :" << std::endl;
		std::cin >> c1;
		std::cout << "Enter imaginary part :" << std::endl;
		std::cin >> c2;
		x = sqrt(pow(c1, 2) + pow(c2, 2));
		y = atan(c2 / c1);
		std::cout << "Your module " << x << std::endl;
		std::cout << "argument " << y << ";";
		std::cout << "\n";
	}

};