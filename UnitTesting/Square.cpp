#include "Square.h"
#include <iostream>
#include "pch.h"

bool isSquare(int a, int b, int c, int d) {
	
	if (((a = b) && (b = c) && (c = d)) && (a && b && c && d > 0))
		return true;
	else
		return false;
}
