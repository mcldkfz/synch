/************************************************************************/
/* Name: Operators.h													*/
/* Description: Declaration of functions over functions for CML			*/
/* Purpose: MSc thesis													*/
/* Author: Max Lopez													*/
/* Date: July 17 2016													*/
/************************************************************************/

/************************************************************************/
/* Standard libraries													*/
/************************************************************************/

#include <math.h>
#include <stdio.h>

/************************************************************************/
/* Non standard libraries												*/
/************************************************************************/

#include "LatticeFunctions.h"
#include "UnimodalFunctions.h"

/************************************************************************/
/* Functions declarations												*/
/************************************************************************/

/************************************************************************/
/* Function: OP_Sum														*/
/* Input: current node, past states vector, alpha, 						*/
/*							epsilon, Number of nodes 					*/
/* Return: double 														*/
/* Description: Calculates the sum of the lattice dynamics 				*/
/************************************************************************/

double OP_Sum(int current_node, double *x, double mu, double alpha, int total_number_of_nodes);

/************************************************************************/
/* Function: OP_Average													*/
/* Input: states vector, Number of nodes 								*/
/* Return: double 									 					*/
/* Description: Calculates the average of the vector					*/
/************************************************************************/

double OP_Average(double *x, int total_number_of_nodes);

/************************************************************************/
/* Function: OP_Deviation												*/
/* Input: states vector, number of nodes, average 						*/
/* Return: double 									 					*/
/* Description: Calculates the deviation of the vector from the avg		*/
/************************************************************************/

double OP_Deviation(double *x, int total_number_of_nodes, double vector_average);

/************************************************************************/
/* Function: OP_Sum_Open												*/
/* Input: current node, past states vector, alpha, 						*/
/*							epsilon, Number of nodes 					*/
/* Return: double 														*/
/* Description: Calculates the sum of the lattice dynamics 				*/
/*				Opens the sum in 2 terms for the advective model		*/
/************************************************************************/

double OP_Sum_Open(int current_node, double *x, double mu, double alpha, int total_number_of_nodes);

/************************************************************************/
/* Function: OP_Sub_Open												*/
/* Input: current node, past states vector, alpha, 						*/
/*							epsilon, Number of nodes 					*/
/* Return: double 														*/
/* Description: Calculates the substraction of the lattice dynamics 	*/
/*				Opens the operation in 2 terms for the advective model	*/
/************************************************************************/

double OP_Sub_Open(int current_node, double *x, double mu, double alpha, int total_number_of_nodes);
