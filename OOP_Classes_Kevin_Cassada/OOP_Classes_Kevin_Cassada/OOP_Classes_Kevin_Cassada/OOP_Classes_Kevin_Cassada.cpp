#include "pch.h"
#define _USE_MATH_DEFINES
/*Kevin Cassada working with 
Source URL: https://www.tutorialspoint.com/cplusplus/cpp_inheritance.htm
updated: 03/28/2019 by Kevin Cassada */

#include "Input_Validation_Extended.h"
#include "Color_in_CPP.h"
#include "Shape_Classes.h"
#include "Shape_Functions.h"
using namespace std;

int main()
{
	int o = 0;
	do
	{
		showMenu(o);
	} while (o != 6);

	return 0;
}





