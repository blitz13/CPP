#include <iostream>
#include <string>

//Function with return type and parameters
float Sum(float a, float b) //parameters are "a" and "b"
{
	return a + b; // return type is float
}

//Function with return type only
float SumFixed()//no parameter
{
	return 2 + 2;// return type is float
}

//Function without return type but with parameter
void DispalySum(float a, float b)
{
	float result = Sum(a, b);// "Sum()" function with return type
	std::cout << result << std::endl;// Displays the sum of two numbers
}

//Function without return type and parameter
void Instructions()
{
	std::cout << "Copy and Paste" << std::endl;
}

int main()
{
	DispalySum(2, 2);
}