#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int R = 0;
	int r = 0;
	double x = 0;
	double y = 0;
	std::cout << "������� ������� ������: " << std::endl;
	std::cin >> R;
	std::cout << "������� ������� ������: " << std::endl;
	std::cin >> r;
	std::cout << "������� x: " << std::endl;
	std::cin >> x;
	std::cout << "������ y: " << std::endl;
	std::cin >> y;
	if (r*r < x*x + y*y < R*R)
	{
		std::cout << "������" << std::endl;
	}
	else
	{
		std::cout << "�� ������" << std::endl;
	}

	return 0;
}