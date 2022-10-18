#include <iostream>
#include "Store.h"
int main()
{
	Store seoulBakery;

	seoulBakery.OrderBread("Soboro", 1000);
	seoulBakery.OrderBread("Cream", 1500);

	seoulBakery.ShowBreadList();

	seoulBakery.OrderBread("Soboro", 2500);

	std::cout << "---------------------------------------" << std::endl;

	seoulBakery.ShowBreadList();
}