#include"Currency.h"

#pragma once
ref class Euro : public Currency
{
public:
	Euro(double dengi, double kurs) : Currency(dengi, kurs) {};

};

