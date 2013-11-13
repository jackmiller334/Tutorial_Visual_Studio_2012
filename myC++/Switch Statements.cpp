#include <iostream>

int main()
{
	int applesToday;

	applesToday = 2;

	switch(applesToday)
	{
	case(0):
		std::cout << "You have eaten 0 apples today" << std::endl;
		break;
	case(1):
		std::cout << "You have eaten 1 apples today" << std::endl;
		break;
	case(2):
		std::cout << "You have eaten 2 apples today" << std::endl;
		break;
	case(3):
		std::cout << "You have eaten 3 apples today" << std::endl;
		break;
	default:
		std::cout << "You have eaten lots of apples today! ...or maybe none at all" << std::endl;
	}

	system("pause");
	return 0;
}