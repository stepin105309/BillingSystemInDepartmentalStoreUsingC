/**
* @file Edit_Product.h
*/



#ifndef EDIT_PRODUCT_H_INCLUDED
#define EDIT_PRODUCT_H_INCLUDED
#include "Calculate_Bill.h"

/**
* The function used to product details
* @param[in] NULL
* note parameters are taken from the console
*/
void edit();

/**
* The function used to check the product code is correct or not
* @param[in] product code
* return 1 if the Product is present in the file
* note returns 0 if the product is not present in the file
*/
int check(char x[ANS]);
/**
* The function used to check the edit function works properly
* @param[in] NULL
* return "TRY AGAIN" if the code entered in the console is wrong
* note returns PRODUCT EDITED if the edit function works properly
*/
char * edit_Product();


#endif // EDIT_PRODUCT_H_INCLUDE;D
