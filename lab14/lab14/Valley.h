#include "Dollar.h"
#include "Euro.h"
#include "Pound.h"
#include <ctime>
#include <cstdlib>

#pragma once
ref class Valley
{
public:
	Valley() {
		doll.Add_money((rand() % 1800 - 900) / 10);
		eur.Add_money((rand() % 1800 - 900) / 10);
		funt.Add_money((rand() % 1800 - 900) / 10);
	};
	~Valley() {}

	double calc_total_money() {
		return doll.Convert_to_rouble() + eur.Convert_to_rouble() + funt.GetHashCode();
	}

	Dollar doll{ 100.0, 77.72 };
	Euro eur{100.0, 91.72};
	Pound funt{ 100.0, 101.38 };
};

