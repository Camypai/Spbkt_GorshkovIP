#pragma once
#include "Currency.h"
ref class Dollar :
	public Currency
{
public:
	Dollar(double dengi, double kurs) : Currency(dengi, kurs) {};
};

