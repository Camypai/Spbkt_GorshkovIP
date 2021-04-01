#pragma once
#include "Currency.h"
ref class Pound :
	public Currency
{
public:
	Pound(double dengi, double kurs) : Currency(dengi, kurs) {};
};

