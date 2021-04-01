#pragma once
ref class Currency
{
public:
	Currency(double dengi, double kurs) { money = dengi; rate = kurs; };
	~Currency() {};

	virtual double Convert_to_rouble() { return money * rate; };
	virtual double Return_money() { return money; };
	virtual void Add_money(double a) { money += a; }
	virtual void Substract_money(double a) { money -= a; }
	virtual void Change_rate(double a) { rate = a; }

private:
	double money;
	double rate;
};

