#pragma once
#include <iostream>

class Aircon
{
	static int sumAircon;

	int		temperature;
	int		windPower; // 0:誘명뭾 , 1:?쏀뭾 , 2: 媛뺥뭾
	bool	autoDirection; // 諛붾엺諛⑺뼢

	const int initialTemperature;

public:
	Aircon(); // Default Constructor
	Aircon(int t);
	Aircon(int t, int it);
	~Aircon();

	int GetTemperature() const; // ?꾩옱 ?⑤룄
	void TemperatureUp(); // ?⑤룄 議곗젅(?④쾪寃?
	void TemperatureDown(); // ?⑤룄 議곗젅(李④컩寃?
	void DirectionChanged(); // 諛붾엺諛⑺뼢 ?먮룞議곗젅 蹂寃?
	void ShowStatus(); // ?꾩옱 ?곹깭 由ы꽩

	static void ShowSumAircon();
};
int Aircon::sumAircon = 0;

void Aircon::ShowSumAircon()
{
	std::cout << "珥??앹꽦 ?먯뼱而?" << sumAircon << std::endl;
}

Aircon::Aircon() : temperature(24), windPower(0), autoDirection(false), initialTemperature(24)
{
	sumAircon++;
}

Aircon::Aircon(int t) : temperature(t), windPower(0), autoDirection(false), initialTemperature(24)
{
	sumAircon++;
}

Aircon::Aircon(int t, int it) : temperature(t), windPower(0), autoDirection(false), initialTemperature(it)
{
	sumAircon++;
}

Aircon::~Aircon()
{
	sumAircon--;
}

int Aircon::GetTemperature() const
{
	return temperature;
}

void Aircon::TemperatureUp()
{
	if(temperature < 30) temperature++;
}

void Aircon::TemperatureDown()
{
	if(temperature > 18) temperature--;
}

void Aircon::DirectionChanged()
{
	autoDirection = !autoDirection;
}

void Aircon::ShowStatus()
{
	std::cout << "******AirCooler******"<< std::endl;
	std::cout << "?⑤룄: " << temperature << std::endl;
	std::cout << "湲곕낯 ?⑤룄: " << initialTemperature << std::endl;
	std::cout << "諛붾엺?멸린: " << windPower << std::endl;
	std::cout << "諛⑺뼢 ?먮룞議곗젅:" << autoDirection << std::endl;
	std::cout << "珥??앹꽦 ?먯뼱而?" << sumAircon << std::endl;
}