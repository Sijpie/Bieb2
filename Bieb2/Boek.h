#pragma once
#include <iostream>


class Boek
{
public:
	Boek(std::string titel);
	~Boek();
	std::string getTitel();


private:
	std::string titel;

	//je wilt niet dat een bezoeker van de bieb de titels van de
	//boeken kan aanpassen
};
