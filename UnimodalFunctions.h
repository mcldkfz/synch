/************************************************************************/
/* Name: UnimodalFunctions.h						*/
/* Description: Declaration of Unimodal Functions for iterated maps	*/
/* Purpose: Physics MSc thesis						*/
/* Author: Max Lopez							*/
/* Date: June 7 2016							*/
/************************************************************************/



/************************************************************************/
/* Standard libraries							*/
/************************************************************************/

#include <math.h>
#include <stdio.h>



/************************************************************************/
/* Functions declarations						*/
/************************************************************************/

/************************************************************************/
/* Function: UF_logmap ( f = rx(1-x) )	 				*/
/* Input: parameter r and variable x					*/
/* Return: the value of the function with those inputs			*/
/* Description: standard logistic map					*/
/************************************************************************/

double UF_logmap(double r, double x);

/************************************************************************/
/* Function: UF_sinmap ( f = r sin(Pi x) ) 				*/
/* Input: parameter r and variable x					*/
/* Return: the value of the function with those inputs			*/
/* Description: standard sine map					*/
/************************************************************************/

double UF_sin(double r, double x);

/************************************************************************/
/* Function: UF_qmap ( f = 1 - r(x^2)			      		*/
/* Input: parameter r and variable x					*/
/* Return: the value of the function with those inputs			*/
/* Description: Quadratic map       					*/
/************************************************************************/

double UF_qmap(double r, double x);
