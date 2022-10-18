#pragma once
#include <iostream>
using namespace std;

class Bread
{
public:
	virtual ~Bread() = default;
	virtual string BreadName() = 0;
	virtual int Price() = 0;
};

class Soboro : public Bread
{
	int m_price;
	const string name;

public:
	Soboro(int price) : m_price(price), name("소보로") {}

	string BreadName() override
	{
		return name;
	}

	int Price() override
	{
		return m_price;
	}
};

class Cream : public Bread
{
	int m_price;
	const string name;

public:
	Cream(int price) : m_price(price), name("크림") {}

	string BreadName() override {
		return name;
	}

	int Price() override
	{
		return m_price;
	}

};