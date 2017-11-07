// Import Stuff

#include "stdafx.h";
#include<iostream>
#include<Kemonomimi.h>
#include <string>

// The main function of the app

int main()
{ 
	// Main stuff

	std::string x;

	Kemonomimi* Test = new Kemonomimi();

	// Specify values

	Test->Name = "Kitsune";
	Test->Type = "Fox";
	Test->Gender = "Female";
	Test->Weight = 200.00f;
	Test->NameBeforeMessage = true;
	// Log everything.

	Test->LogAll();
	std::cout << "\n";

	// Get input
	std::cout << "\n Would you like to headpat " << Test->Name << "?" << "\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "A: Yes \n";
	std::cout << "\n";
	std::cout << "B: Yes \n";
	std::cout << "\n";
	std::cout << "P: Get the ammount of times patted \n";
	std::cout << "\n";
	std::cout << "C: Check if " << Test->Name << " likes you." << "\n";
	std::cout << "\n";

start:

	std::cin >> x;

	if (x == "A" || x == "a")
	{
		Test->Headpat();
		goto start;

	}

	if (x == "B" || x == "b")
	{
		std::cout << "Ok then I guess. \n";
		goto start;
	}

	if (x == "P" || x == "p")
	{
		std::cout << Test->Patted << "\n";
		goto start;
	}
	if (x == "C" || x == "c")
	{
		std::cout << Test->ReturnLikes() << "\n";
		goto start;
	}
	if (x != "A" || x != "a" || x != "B" || x != "b" || x != "P" || x != "P" || x != "C" || x != "c")
	{
		std::cout << "Unknown command. \n";
		goto start;
	}
	// End the app
    return 0;
}

