#include <iostream>
#include "Tree.hpp"



int main() {
	setlocale(0, "");
	int n;

	Tree Apple{
		"Apple",
		93,
		7
	};

	print_tree(Apple);
	std::cout << "���� �� ��� �����: " << full_price(Apple) << " ���\n";
	std::cout << "������� ������ ������ �������? -> ";
	std::cin >> n;
	if (collect(Apple, n) == 1)
		std::cout << "������!" << std::endl;
	else
		std::cout << "��������� ����� ����� ������� �� " << collect(Apple, n) << std::endl;




	return 0;
}