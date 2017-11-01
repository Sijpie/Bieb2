#pragma once
#include <iostream>
#include "Boek.h"
#include <vector>

class Bibliotheek
{
public:
	Bibliotheek();
	Bibliotheek(const Bibliotheek& original);
	~Bibliotheek();
	void voegBoekToe(std::string titel);
	void printBoekenlijst();
	Bibliotheek& operator=(const Bibliotheek& original);

private:
	std::vector<Boek*> boekenlijst;

};

