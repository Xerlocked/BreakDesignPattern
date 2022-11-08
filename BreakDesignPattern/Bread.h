#pragma once
#include <iostream>
using namespace std;

class Bread
{
public:
	virtual ~Bread() = default;
	virtual int GetPrice() = 0;
};

class Soboro : public Bread
{
	const int m_price;
public:
	Soboro() : m_price(1500) {}
	Soboro(int price) : m_price(price) {}

	int GetPrice() override
	{
		return m_price;
	}
};

class Cream : public Bread
{
	const int m_price;
public:
	Cream() : m_price(2000) {}
	Cream(int price) : m_price(price) {}

	int GetPrice() override
	{
		return m_price;
	}
};