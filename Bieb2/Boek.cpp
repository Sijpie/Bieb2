#include "stdafx.h"
#include "Boek.h"



Boek::Boek(std::string titel)
	: titel(titel)
	//: initialiser list
	//mijn titel = de opgegeven titel
	//roep voor eigenschap de constructor aan
{

}


Boek::~Boek()
{
}

std::string Boek::getTitel()
//zonder Boek:: behoort functie niet tot een class, oftewel hij zweeft rond in de ruimte buiten de stack om
{
	return titel;
	//deze functie is klaar en ik geef deze variable aan als waarde
}