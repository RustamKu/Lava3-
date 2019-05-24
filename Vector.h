#include <iostream>;
#include <string>
class Vector {

private:
	double x, y, x1, y1, r, x2, y2;
	char c;

public:
	void module() {

		std::cout << "Enter coordinates " << std::endl;
		std::cin >> x >> y;
		std::cout << std::endl;
		r = sqrt(pow(x, 2) + pow(y, 2));
		std::cout << "The modulus of your vector is :" << r << std::endl;
		std::cout << "\n";
	}
	void Vecplus() {

		std::cout << "Enter fitst vector " << std::endl;
		std::cin >> x1 >> y1;
		std::cout << "Enter second vector " << std::endl;
		std::cin >> x2 >> y2;
		std::cout << " Enter operation : (+ , - )" << std::endl;
		std::cin >> c;
		switch (c) {
		case '+':
			x = x1 + x2;
			y = y1 + y2;
			break;
		case '-':
			x = x2 - x1;
			y = y2 - y1;
			break;
		default: std::cout << "Error ";

		}
		std::cout << " Vector = : " << "(" << x << "," << y << ")" << "\n";
	}
};
