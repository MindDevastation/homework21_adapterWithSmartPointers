#include<iostream>
#include "ChemicalElement.h"
#include "ExtendedChemicalElement.h"
#include <memory>
using namespace std;
int main()
{
	auto ptr = std::make_shared<ExtendedChemicalElement>(ExtendedChemicalElement("silicon"));
	//std::shared_ptr <ChemicalElement> ptr(new ExtendedChemicalElement("silicon"));
	//ChemicalElement* ptr = new ExtendedChemicalElement("silicon");
	ptr->Show();
	ptr.reset();
	//delete ptr;

	ptr = std::make_shared<ExtendedChemicalElement>(ExtendedChemicalElement("aluminum"));
	//std::shared_ptr <ChemicalElement> ptr(new ExtendedChemicalElement("aluminum"));
	ptr->Show();
	ptr.reset();
	////delete ptr;

	ptr = std::make_shared<ExtendedChemicalElement>(ExtendedChemicalElement("barium"));
	ptr->Show();
	ptr.reset();
	//delete ptr;

	return 0;
}