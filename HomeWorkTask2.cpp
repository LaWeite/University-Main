#include <iostream>
#include <cmath>

void roots(double a, double b, double dis)
{
	int count = 0;
	double root1 = (-b + sqrt(dis)) / (2 * a);
	double root2 = (-b - sqrt(dis)) / (2 * a);
	if ((double)(int) root1 != root1)
	{
		++count;
	}
	if ((double)(int)root2 != root2)
	{
		++count;
	}
	std::cout << "���-�� R ������: " << count << std::endl;
}

void rootsFind(double a, double b, double c)
{
	if (a != 0)
	{
		double dis = b * b - 4 * a * c;
		if (dis < 0)
		{
			std::cout << "��� ������";
		}
		else {
			roots(a, b, dis);
		}
	}
	else {
		int count = 0;
		double root = -c / b;
		if ((double)(int)root != root)
		{
			++count;
		}
		std::cout << "���-�� R ������: " << count << std::endl;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");

	double a = 0;
	double b = 0;
	double c = 0;
	std::cout << "������� ����������� a: " << std::endl;
	std::cin >> a;
	std::cout << "������� ����������� b: " << std::endl;
	std::cin >> b;
	std::cout << "������� ����������� c: " << std::endl;
	std::cin >> c;
	rootsFind(a, b, c);

	return 0;
}