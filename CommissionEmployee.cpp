// CommissionEmployee.cpp

#include <iostream>
#include "CommissionEmployee.h"
#include "pch.h"
using namespace std;

// constructor
CommissionEmployee::CommissionEmployee(const string &first, const string &last, const string &ssn, double sales, double rate)
{
	firstName = first;
	lastName = last;
	socialSecurityNumber = ssn;
	setGrossSales(sales);
	setCommissionRate(rate);
}

void CommissionEmployee::setFirstName(const string &first)
{
	firstName = first;
}

string CommissionEmployee::getFirstName() const
{
	return firstName;
}

void CommissionEmployee::setLastName(const string &last)
{
	lastName = last;
}

string CommissionEmployee::getLastName() const
{
	return lastName;
}

void CommissionEmployee::setSocialSecurityNumber(const string &ssn)
{
	socialSecurityNumber = ssn;
}

string CommissionEmployee::getSocialSecurityNumber() const
{
	return socialSecurityNumber;
}

void CommissionEmployee::setGrossSales(double sales)
{
	if (sales >= 0.0)
		grossSales = sales;
	else
		throw invalid_argument("Gross sales must be >= 0.0");
}

double CommissionEmployee::getGrossSales() const
{
	return grossSales;
}

// return commission rate
void CommissionEmployee::setCommissionRate(double rate)
{
	if (rate > 0.0 && rate < 1.0)
		commissionRate = rate;
	else
		throw invalid_argument("Commission rate must be > 0.0 and < 1.0");
}

double CommissionEmployee::getCommissionRate() const
{
	return commissionRate;
}

// calculate earnings
double CommissionEmployee::earnings() const
{
	return commissionRate * grossSales;
}

// printCommissionEmployee object
void CommissionEmployee::print() const
{
	cout << "commission employee: " << firstName << ' ' << lastName
		<< "\nsocial security number: " << socialSecurityNumber
		<< "\ngross sales: " << grossSales
		<< "\ncommission rate: " << commissionRate;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
