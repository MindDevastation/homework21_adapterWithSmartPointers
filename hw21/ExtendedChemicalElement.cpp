#include "ExtendedChemicalElement.h"

ExtendedChemicalElement::ExtendedChemicalElement(string pName) :ChemicalElement(pName)
{
	pInformation = std::make_shared<ChemicalElementsInformation> (ChemicalElementsInformation());
}

ExtendedChemicalElement::~ExtendedChemicalElement()
{
	//delete pInformation;
}

void ExtendedChemicalElement::Show()
{
	cout << "\n============================\n";
	ChemicalElement::Show();
	density = pInformation->GetDensity(name);
	position = pInformation->GetPositionFromPeriodicTable(name);
	cout << "\nDensity of Element: " << density << endl;
	cout << "\nPosition in Periodic Table: " << position << endl;
	cout << "\n============================\n";
}
