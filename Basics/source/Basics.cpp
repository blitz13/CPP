#include <iostream>

// "Return"
bool IsAdult()
{
	int age = 18;
	std::cin >> age;
	if (age >= 18) {
		std::cout << "True..." << std::endl;
		return true;
	}
	else {
		std::cout << "False..." << std::endl;
		return false;
	}
}

int main()
{
	//for (int i = 0; i < 4; i++)
	//{
	//	// "Continue"
	//	/*if (i % 2)		
	//		continue;
	//	std::cout << i << " ";
	//	std::cout << "Hello" << std::endl;*/

	//	// "Break"
	//	/*if (i % 2)
	//		break;
	//	std::cout << i << " ";
	//	std::cout << "Hello" << std::endl;*/

	//}

	// "Return"
	while (!IsAdult())
	{
		IsAdult();
	} 
}