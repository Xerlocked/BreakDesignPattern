#pragma once
#include "Bread.h"
#include <string>

class BreadFactory {
public:
	static Bread* BakeBread(string orderBread, int price)
	{
		if(orderBread._Equal("Soboro"))
		{
			return new Soboro(price);
		}
		if(orderBread._Equal("Cream"))
		{
			return new Cream(price);
		}

		return nullptr;
	}
};