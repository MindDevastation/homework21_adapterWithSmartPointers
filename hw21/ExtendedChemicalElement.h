#pragma once
#include "ChemicalElement.h"
#include "ChemicalElementsInformation.h"
#include <memory>

// Адаптер
class ExtendedChemicalElement :
	public ChemicalElement
{
private:
	std::shared_ptr<ChemicalElementsInformation> pInformation;
	//ChemicalElementsInformation* pInformation;
public:
	ExtendedChemicalElement(string);
	virtual ~ExtendedChemicalElement();
	void Show();
};