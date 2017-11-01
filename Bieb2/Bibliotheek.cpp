#include "stdafx.h"
#include "Bibliotheek.h"
#include <string>


Bibliotheek::Bibliotheek()
{
}

Bibliotheek::Bibliotheek(const Bibliotheek& original)
//: boekenlijst(eviltwin.boekenlijst)
{
	for (Boek* originboek : original.boekenlijst) {
		Boek* boekcopy = new Boek(*originboek);

		boekenlijst.push_back(boekcopy);
	}
}



Bibliotheek::~Bibliotheek()
{
	for (Boek* boek : boekenlijst) {
		delete boek;
	}
}

void Bibliotheek::voegBoekToe(std::string titel)
{
	Boek* boekpointer = new Boek(titel);
	boekenlijst.push_back(boekpointer);

}

void Bibliotheek::printBoekenlijst()
{
	for (Boek* boek : boekenlijst) {
		std::cout << boek->getTitel() << std::endl;
	}
}

Bibliotheek & Bibliotheek::operator=(const Bibliotheek & original)
{
	//if (this != &original) { is niet nodig? (check for self assignment)
	for (Boek* boek : boekenlijst) {
		delete boek;
		
		
	}

	boekenlijst.clear();
	//self assignment


	// TODO: insert return statement here


	return *this;
}
