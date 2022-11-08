#pragma once
#include <iostream>

using namespace std;

class TerranDamageType
{
public:
	virtual ~TerranDamageType() = default;
	virtual void SetDamageType() = 0;
};

class DamageTypeNormal : public TerranDamageType
{
public:
	void SetDamageType() override
	{
		cout << "Normal Type" << endl;
	}
};


class DamageTypeVibration : public TerranDamageType
{
public:
	void SetDamageType() override
	{
		cout << "Vibration Type" << endl;
	}
};

class DamageTypeSplash : public TerranDamageType
{
public:
	void SetDamageType() override
	{
		cout << "Splash Type" << endl;
	}
};