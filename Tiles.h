#include <iostream>
#include <string>

class Tiles {
private:
	std::string brand;
	int size_h;
	int size_w;
	float price;
public:
	void get_Data() {
		std::cout << "Enter brand name :" << std::endl;
		std::cin >> brand;
		std::cout << "Enter length :" << std::endl;
		std::cin >> size_h;
		std::cout << "Enter width :" << std::endl;
		std::cin >> size_w;

		std::cout << "Your brand is :" << brand << std::endl;
		std::cout << "Your length is :" << size_h << std::endl;
		std::cout << "Your width  is:" << size_w << std::endl;
	}
};