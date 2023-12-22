#pragma once
#include <iostream>
using namespace std;
//  Î≥∫ÌÚ
class ChemicalElement
{
protected:
	string name;
	double density;
	int    position;
public:
	ChemicalElement(string);
	virtual ~ChemicalElement();
	virtual void Show()
	{
		cout << "\nChemical Element: " << name << endl;
	}
};