/*
* Name:				Hasan Siddiqui, Talha Ali, Asalat Kamal
* MacID:			siddih8, alit3, kamala6
* Student Number:	1450148, 1419194, 1426466
* Description: 		bleh
*/

#ifndef MULTIPLICATION_H
#define MULTIPLICATION_H

#include "ArithmeticExpression.h"

class Multiplication : public ArithmeticExpression
{
public:
	// Inherit ArithmeticExpression constructor
	Multiplication(string s, string a) :ArithmeticExpression(s, a) {};

	string evaluate();
	void print();
};

#endif