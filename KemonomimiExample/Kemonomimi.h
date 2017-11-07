#include<iostream>

class Kemonomimi
{
public:
	// The values for the kenomimi
	char* Name;

	char* Type;

	char* Gender;

	float Weight;

	bool LikesYou = false;

	int Patted;

	int Points;

	int MainPoints = 2;

	int PatReward = 1;

	char* AnnoyedMessage = " Is starting to get kind of annoyed. \n";

	char* RabbitHappy = " Is really loving you right now! \n";

	char* FoxHappy = " Is really loving you right now! \n";

	char* CatHappy = " has started purring! \n";

	char* DogHappy = " has started panting in happyness! \n";

	bool NameBeforeMessage = false;

	// Prints the following value
	void CheckPoints()
	{
		if (Points <= MainPoints)
		{
			LikesYou = true;
		}
		if (Points > MainPoints)
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
			std::cout << Name << AnnoyedMessage;
		}

		if (Type == "Bunny" || Type == "bunny" || Type == "Rabbit" || Type == "rabbit")
		{
			if (Patted < 2)
			{
				if (NameBeforeMessage == true)
				{
					std::cout << Name << RabbitHappy;
				}
				else
				{
					std::cout << RabbitHappy;
				}
				CheckPoints();
			}

		}


		if (Type == "Fox" || Type == "fox" || Type == "Kitsune" || Type == "kitsune")
		{
			if (Patted < 2)
			{
				if (NameBeforeMessage == true)
				{
					std::cout << Name << FoxHappy;
				}
				else
				{
					std::cout << FoxHappy;
				}
				CheckPoints();
			}

		}


		if (Type == "Cat" || Type == "cat" || Type == "Neko" || Type == "neko")
		{
			if (Patted < 2)
			{
				if (NameBeforeMessage == true)
				{
					std::cout << Name << CatHappy;
				}
				else
				{
					std::cout << CatHappy;
				}
				CheckPoints();
			}
		}


		if (Type == "Dog" || Type == "dog" || Type == "Wolf" || Type == "wolf" || Type == "Okami" || Type == "okami")
		{
			if (Patted < 2)
			{
				if (NameBeforeMessage == true)
				{
					std::cout << Name << DogHappy;
				}
				else
				{
					std::cout << DogHappy;
				}
				CheckPoints();
			}
		}
	}
};