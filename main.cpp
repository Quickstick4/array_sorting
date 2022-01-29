//Program written by Greg Keenan to learn/tinker with arrays in C++
//Nothing fancy, just learning
//On github to learn/get more familiar with using git

#include <iostream>
#include "MYArray.h"


class secondObject{

	//Just tinkering with how objects are made
	public: 
	void aFunctionOftime(int test)
	{
		std::cout << "SecondObject number is: " << test << "\n";
	}



};

int main() 
{
	std::cout << "Print from main program \n";


	//Declare the object 'Array' from type GKArray
	GKArray Array(5);
	
	Array.MyFunc();

	int arraySize = Array.getSizeOfArray();

	std::cout << "Array Size is: " << arraySize << "\n";

	

	//Declare and instanciate the secondObject
	secondObject Second; 
	Second.aFunctionOftime(20);


	

}