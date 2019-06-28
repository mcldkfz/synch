/************************************************************************/
/* Name: VectorOperators.h												*/
/* Description: Declaration of functions over vectors (double arrays)	*/
/* Purpose: MSc thesis													*/
/* Author: Max Lopez													*/
/* Date: January 21 2017												*/
/************************************************************************/

/************************************************************************/
/* Standard libraries													*/
/************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/************************************************************************/
/* Non standard libraries												*/
/************************************************************************/

/************************************************************************/
/* Functions declarations												*/
/************************************************************************/

/************************************************************************/
/* Function: VO_Initialize												*/
/* Input: vector, Number of nodes, decimal precision 					*/
/* Return: integer; 1 error / 0 ok  									*/
/* Description: Initializes a vector of the input size with random		*/ 
/* 				in each component with the input precision				*/
/************************************************************************/

int VO_Initialize(double *vector, int total_number_of_nodes);

/************************************************************************/
/* Function: VO_Clean													*/
/* Input: vector, Number of nodes 										*/
/* Return: integer; 1 error / 0 ok  									*/
/* Description: Put a zero in each component of the N-dim vector		*/
/************************************************************************/

int VO_Clean(double *vector, int total_number_of_nodes);

/************************************************************************/
/* Function: VO_Copy													*/
/* Input: vector1, vector2, Number of nodes 							*/
/* Return: integer; 1 error / 0 ok  									*/
/* Description: Copy the content of vector 1 into 2 					*/
/************************************************************************/

int VO_Copy(double *vector1, double *vector2, int total_number_of_nodes);

/************************************************************************/
/* Function: VO_ReadFile												*/
/* Input: filename, vector1, Number of nodes 							*/
/* Return: integer; 1 error / 0 ok  									*/
/* Description: Copy the vector in the file into vector1 				*/
/************************************************************************/

int VO_ReadFile(char *name_of_file, double *vector1, int total_number_of_nodes);

/************************************************************************/
/* Function: VO_InitializeFile											*/
/* Input: file name, Number of nodes, decimal precision 				*/
/* Return: integer 														*/
/* Description: Initializes a file with random numbers 					*/ 
/* 				with the input precision								*/
/************************************************************************/

int VO_InitializeFile(char *name_of_file, int total_number_of_nodes);

/************************************************************************/
/* Function: VO_InitializeFile_2										*/
/* Input: file name, Number of nodes, decimal precision 				*/
/* Return: integer 														*/
/* Description: Initializes two sets of files 							*/
/* 				one with random numbers and the other					*/ 
/* 				with a +0.00000001 for Lyapunov							*/
/************************************************************************/

int VO_InitializeFile_2(char *name_of_file, int total_number_of_nodes);

/************************************************************************/
/* Function: VO_Delta													*/
/* Input: vector1, vector2, Number of nodes 							*/
/* Return: integer; 1 error / 0 ok  									*/
/* Description: Copy the content of vector 1 into 2 + delta				*/
/************************************************************************/

int VO_Delta(double *vector1, double *vector2, int total_number_of_nodes, double delta);

/************************************************************************/
/* Function: VO_Distance												*/
/* Input: vector1, vector2, Number of nodes 							*/
/* Return: double 					  									*/
/* Description: return the euclidean distance between the vectors		*/
/************************************************************************/

double VO_Distance(double *vector1, double *vector2, int total_number_of_nodes);

/************************************************************************/
/* Function: VO_Adjustment												*/
/* Input: vector1, vector2, vector3, Number of nodes, distance 1 and 2	*/
/* Return: integer; 1 error / 0 ok	  									*/
/* Description: Readjust v1 so its separation is d0 and is in the same  */
/*              direction as d1 with respect to v2 (put it in v3)		*/
/*              Then v2 is the original orbit  							*/
/************************************************************************/

int VO_Adjustment(double *vector1, double *vector2, double *vector3, int total_number_of_nodes, double d_zero, double d_one);

/************************************************************************/
/* Function: VO_LinearCombination										*/
/* Input: vector1, vector2, vector3, 2 parameters and the # of nodes	*/
/* Return: integer; 1 error / 0 ok	  									*/
/* Description: Put in v3 the linear combination of v1 and v2 			*/
/*              v3 = p1 x v1 + p2 x v2									*/
/************************************************************************/

int VO_LinearCombination(double *vector3, double parameter_1, double *vector1, double parameter_2, double *vector2, int total_number_of_nodes);
