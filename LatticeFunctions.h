/************************************************************************/
/* Name: LatticeFunctions.h						*/
/* Description: Personal Library for functions on lattices		*/
/* Purpose: Professional						*/
/* Author: Max Contreras					*/
/* Date: June 8 2016							*/
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
/* Function: LF_CircularDistance					*/
/* Input: Number of nodes, initial node and final node			*/
/* Return: integer k = min[ abs(ini-fin + kN) ]				*/
/* Description: Minimize the distance between 2 points in a circle	*/
/************************************************************************/

int LF_CircularDistance(int Total_number_of_nodes,int Initial_node,int Final_node);

/************************************************************************/
/* Function: LF_NormalizationFactor 					*/
/* Input: Number of nodes, range of interactions parameter		*/
/* Return: A double with the value of the normalization factor		*/
/* Description: Calculates the sum of the distance to the power alpha	*/
/************************************************************************/

double LF_NormalizationFactor(int total_number_of_nodes,double alpha);

/************************************************************************/
/* Function: LF_IsEven 													*/
/* Input: Number of nodes												*/
/* Return: 1 if the number is even, 0 if not 							*/
/* Description: Procedure that determines the parity of a number		*/
/************************************************************************/

int LF_IsEven(int total_number_of_nodes);
