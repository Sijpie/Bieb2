// Bieb2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>
#include "Bibliotheek.h"
#include "Boek.h"



int main()
{
	Bibliotheek bieb1;

	bieb1.voegBoekToe("Dune");
	bieb1.voegBoekToe("Watership Down");
	bieb1.voegBoekToe("Wind in the Willows");
	bieb1.voegBoekToe("Nights Watch");
	bieb1.voegBoekToe("Colour of Magic");

	Bibliotheek bieb2(bieb1);

	bieb1.voegBoekToe("Moby Dick");
	bieb1.voegBoekToe("Pride and Prejudice");

	bieb2.voegBoekToe("Lord of the Flies");
	bieb2.voegBoekToe("Mrs. Frisby and the Rats of Nimh");

	std::cout << "Bieb 1" << std::endl;
	bieb1.printBoekenlijst();



	std::cout << std::endl << "Bieb 2" << std::endl;
	bieb2.printBoekenlijst();


	return 0;
}
