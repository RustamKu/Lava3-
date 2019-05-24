#include <iostream>
#include <string>
class child {
private:
	std::string name;
	std::string surname;
	int age;
public:
	void vvod() {
		std::cout << "Enter name :" << std::endl;
		std::cin >> name;
		std::cout << "Enter surname :" << std::endl;
		std::cin >> surname;
		std::cout << "Enter age :" << std::endl;
		std::cin >> age;

		std::cout << "Your child's name :" << name << std::endl;
		std::cout << "Your child's surname :" << surname << std::endl;
		std::cout << "Your child's age :" << age << std::endl;


	}
};
