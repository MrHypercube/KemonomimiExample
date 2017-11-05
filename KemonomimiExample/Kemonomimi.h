#include<iostream>

class Kemonomimi
{
public:
	//The values for the kenomimi
	char* Name;
	char* Type;
	char* Gender;
	float Weight;
	int Patted = 0;

	//Prints the following value

	void LogName()
	{
		std::cout << Name << "\n";
	}


	void LogType()
	{
		std::cout << Type << "\n";
	}


	void LogGender()
	{
		std::cout << Gender << "\n";
	}


	void LogWeight()
	{
		std::cout << Weight << "\n";
	}


	void LogAll()
	{
		std::cout << Type << "\n";
		std::cout << Gender << "\n";
		std::cout << Weight << "\n";
	}

	//A fun function

	void Headpat()
	{
		Patted = Patted + 1;
		if (Type == "Fox" || Type == "fox" || Type == "Kitsune" || Type == "kitsune" || Type == "Bunny" || Type == "bunny" || Type == "Rabbit" || Type == "rabbit")
		{
			std::cout << Name << " Is really loving you right now! \n";
		}
		if (Type == "Cat" || Type == "cat" || Type == "Neko" || Type == "neko")
		{
			std::cout << Name << " has started purring! \n";
		}
		if (Type == "Dog" || Type == "dog" || Type == "Wolf" || Type == "wolf" || Type == "Okami" || Type == "okami")
		{
			std::cout << Name << " has started panting in happyness! \n";
		}
	}
};