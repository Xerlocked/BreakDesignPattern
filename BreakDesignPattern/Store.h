#pragma once

#include "BreadFactory.h"
#include "Bread.h"
#include <iostream>
#include <vector>

using namespace std;

class Store {

	vector<Bread*> myBread;

public:
	void OrderBread(const string& s, int price)
	{
		Bread* orderBread = BreadFactory::BakeBread(s, price);

		if(orderBread == nullptr) return;

		myBread.push_back(orderBread);
	}

	void ShowBreadList() const
	{
		for (const auto bread : myBread)
		{
			cout << "종류: " << bread->BreadName() << " " << "가격: " << bread->Price() << endl;
		}
	}
};