#include <iostream>
#include "BreadFactory.h"
#include "Bread.h"
#include "Store.h"

#include "TerranFactory.h"

using namespace std;

class FactoryInstance
{
public:
	static TerranFactory* getFactoryUnit(int Unit)
	{
		switch (Unit) {
		case 1:
			return new Vulture;

		case 2:
			return new Tank;

		case 3:
			return new Goliath;

		default:
			return nullptr;
		}
	}
};


int main()
{
	int i;

	cout << "Select Unit to Generate (1. Vulture / 2. Tank / 3. Goliath): ";
	cin >> i;
	if(i < 1 || i > 3) return 0;

	cout << "Generate..." << endl;

	auto Factory = FactoryInstance::getFactoryUnit(i);

	auto Weapon = Factory->SetWeaponType();
	Weapon->AttachWeapon();

	auto DamageType = Factory->SetDamageType();
	DamageType->SetDamageType();

	auto Mass = Factory->SetMassType();
	Mass->SetUnitMass();

	cout << "Success Generation !" << endl;
}