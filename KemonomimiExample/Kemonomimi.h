#include<iostream>

class Kemonomimi
{
public:
	// The values for the kenomimi
	char* Name;
	char* Type;
	char* Gender;
	float Weight;
	bool LikesYou;
	int Patted;
	int Points;

	// Prints the following value
	void CheckPoints()
	{
		if (Points <= 2)
		{
			LikesYou = true;
		}
		if (Points > 2)
		{
			LikesYou = false;
		}
	}

	char* ReturnLikes()
	{
		if (LikesYou == true)
		{
			return "True";
		}
		if (LikesYou == false)
		{
			return "False";
		}
	}

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

	void LogLikes()
	{
		std::cout << "Likes you: " << LikesYou << "\n";
	}


	void LogAll()
	{
		std::cout << Type << "\n";
		std::cout << Gender << "\n";
		std::cout << Weight << "\n";
		std::cout << "Likes you: " << ReturnLikes() << "\n";
	}

	// A fun function

	void Headpat()
	{
		Patted = Patted + 1;
		if (Patted <= 2)
		{
			Points = Points + 1;
		}


		if (Patted > 2)
		{
			Points = Points - 1;
			std::cout << Name << " Is starting to get kind of annoyed. \n";
		}


		if (Type == "Fox" || Type == "fox" || Type == "Kitsune" || Type == "kitsune" || Type == "Bunny" || Type == "bunny" || Type == "Rabbit" || Type == "rabbit")
		{

			if (Patted < 2)
			{
				std::cout << Name << " Is really loving you right now! \n";
				CheckPoints();
			}

		}


		if (Type == "Cat" || Type == "cat" || Type == "Neko" || Type == "neko")
		{
			std::cout << Name << " has started purring! \n";
			CheckPoints();
		}


		if (Type == "Dog" || Type == "dog" || Type == "Wolf" || Type == "wolf" || Type == "Okami" || Type == "okami")
		{
			std::cout << Name << " has started panting in happyness! \n";
			CheckPoints();
		}




	}
};