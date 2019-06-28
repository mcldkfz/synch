/************************************************************************/
/* Name: UnimodalFunctions.c						*/
/* Description: Implementation of Unimodal Functions			*/
/* Author: Max Contreras						*/
/* Date: June 7 2016							*/
/************************************************************************/

#include "UnimodalFunctions.h"

// Logistic map
double UF_logmap(double r, double x)
{
	double y = 0.0;

	y = r * x * (1 - x);

	return y;
}

// Sine map
double UF_sin(double r, double x)
{
	double y = 0.0;

	y = r * sin(M_PI * x);

	return y;
}

// Quadratic map 
double UF_qmap(double r, double x)
{
	double y = 0.0;

	y = 1 - r * pow(x,2.0);

	return y;
}
