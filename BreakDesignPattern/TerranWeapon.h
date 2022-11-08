#pragma once
#include <iostream>

using namespace std;

class TerranWeapon
{
public:
	virtual ~TerranWeapon() = default;
	virtual void AttachWeapon() = 0;
};

class VehicleWeapon : public TerranWeapon
{
public:
	void AttachWeapon() override
	{
		cout << "Terran Vehicle Weapon" << endl;
	}
};

class ShipWeapon : public TerranWeapon
{
public:
	void AttachWeapon() override
	{
		cout << "Terran Ship Weapon" << endl;
	}
};