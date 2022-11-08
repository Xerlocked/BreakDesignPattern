#pragma once
#include "TerranWeapon.h"
#include "TerranDamageType.h"
#include "TerranMass.h"

using namespace std;

class TerranFactory
{
public:
	virtual ~TerranFactory() = default;
	virtual TerranWeapon* SetWeaponType() = 0;
	virtual TerranDamageType* SetDamageType() = 0;
	virtual TerranUnitMass* SetMassType() = 0;
};

class Vulture : public TerranFactory
{
public:
	TerranWeapon* SetWeaponType() override
	{
		return new VehicleWeapon;
	}

	TerranDamageType* SetDamageType() override
	{
		return new DamageTypeVibration;
	}

	TerranUnitMass* SetMassType() override
	{
		return new UnitMassSmall;
	}
};

class Tank : public TerranFactory {
public:
	TerranWeapon* SetWeaponType() override
	{
		return new VehicleWeapon;
	}

	TerranDamageType* SetDamageType() override
	{
		return new DamageTypeSplash;
	}

	TerranUnitMass* SetMassType() override
	{
		return new UnitMassLarge;
	}
};

class Goliath : public TerranFactory {
public:
	TerranWeapon* SetWeaponType() override
	{
		return new VehicleWeapon;
	}

	TerranDamageType* SetDamageType() override
	{
		return new DamageTypeNormal;
	}

	TerranUnitMass* SetMassType() override
	{
		return new UnitMassMedium;
	}
};