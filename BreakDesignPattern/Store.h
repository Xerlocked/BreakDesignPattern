#pragma once

#include "BreadFactory.h"
#include "Bread.h"
#include <vector>

using namespace std;

class Store : public BreadFactory {
private:
	Bread* CreateBread(BreadType bt) override
	{
		switch (bt) {
		case BreadFactory::soboro:
			return new Soboro();
		case BreadFactory::cream:
			return new Cream();
		default:
			return nullptr;
		}
	}
};