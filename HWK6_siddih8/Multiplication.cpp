/*
* Name:				Hasan Siddiqui, Talha Ali, Asalat Kamal
* MacID:			siddih8, alit3, kamala6
* Student Number:	1450148, 1419194, 1426466
* Description: 		bleh
*/

#include "Multiplication.h"

#include <iostream>
using namespace std;

string Multiplication::evaluate()
{
	float result;

	result = convert((*left).evaluate()) * convert((*right).evaluate());

	return to_string(result);
}

void Multiplication::print()
{
	// Print expression with brackets and calling corresponding print functions
	cout << "(";
	(*left).print();
	cout << " * ";
	(*right).print();
	cout << ")";
}
