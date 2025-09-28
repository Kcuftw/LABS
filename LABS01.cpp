
#include <iostream>
#include <cmath>
#include <limits>

int main()
{
	setlocale(LC_ALL, "RU");
	int base1, base2, height;
	std::cout << "Введите первое основание трапеции (не более 1000): ";
	std::cin >> base1;

	std::cout << "Введите второе основание трапеции (не более 1000): ";
	std::cin >> base2;

	std::cout << "Введите высоту трапеции (не более 255): ";
	std::cin >> height;
	int area = (base1 + base2) * height / 2.0;
	std::cout << "Площадь трапеции равна: " << area << std::endl;

	std::cout << " " << std::endl;
	int db_bit = sizeof(int);
	std::cout << "int, занимает " << db_bit << " бита,мин. значение = " << std::numeric_limits<double>::min() << " ,макс. значение = " << std::numeric_limits<double>::max() << std::endl;

	return 0;
}
