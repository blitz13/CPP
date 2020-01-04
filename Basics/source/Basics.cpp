#include <iostream>

int main()
{
	for (int i = 0; i < 4; i++)
	{
		// "Continue"
		/*if (i % 2)		
			continue;
		std::cout << i << " ";
		std::cout << "Hello" << std::endl;*/

		// "Break"
		if (i % 2)
			break;
		std::cout << i << " ";
		std::cout << "Hello" << std::endl;
	}
}