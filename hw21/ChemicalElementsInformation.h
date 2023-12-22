#pragma once
#include <string>
using namespace std;
// Адаптований клієнт
class ChemicalElementsInformation
{
public:
	ChemicalElementsInformation();
	virtual ~ChemicalElementsInformation();
	double GetDensity(string) const;
	int    GetPositionFromPeriodicTable(string) const;
};