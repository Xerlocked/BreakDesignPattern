#pragma once
#include "Bread.h"

class BreadFactory abstract {
protected:
	virtual ~BreadFactory() = default;

public:
	enum BreadType {
		soboro = 0,
		cream = 1
	};

	Bread* Order(BreadType bt)
	{
		return CreateBread(bt);
	}

protected:
	virtual Bread* CreateBread(BreadType bt) abstract;
};