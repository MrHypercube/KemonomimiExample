// Test.cpp : Defines the entry point for the console application.
//
#include "stdafx.h";
#include<iostream>
#include<Kemonomimi.h>


int main()
{
	bool x;
	Kemonomimi* Test = new Kemonomimi();
	Test->Name = "Kitsune";
	Test->Type = "Fox";
	Test->Gender = "Male";
	Test->Weight = 200.00f;
	Test->LogAll();
	Test->Headpat();
	std::cout << Test->Patted;
	
	std::cin >> x;
    return 0;
}

