#pragma once
#include <iostream>

using namespace std;

class TerranUnitMass
{
public:
	virtual ~TerranUnitMass() = default;
	virtual void SetUnitMass() = 0;
};

class UnitMassLarge : public TerranUnitMass
{
public:
	void SetUnitMass() override
	{
		cout << "Large Unit" << endl;
	}
};

class UnitMassMedium : public TerranUnitMass {
public:
	void SetUnitMass() override {
		cout << "Medium Unit" << endl;
	}
};


class UnitMassSmall : public TerranUnitMass {
public:
	void SetUnitMass() override {
		cout << "Small Unit" << endl;
	}
};