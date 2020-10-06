/**
* @file Add_Product.h
*
*/


#ifndef ADD_PRODUCT_H_INCLUDED
#define ADD_PRODUCT_H_INCLUDED
/**
* Add the products in the file
* @param[in] NULL (Takes the input from the Console)

*/
void add();
/**
* To check whether the product is not added before
* @param[in] product code

*/
void c_code(char y[]);
/**
* To check whether the product is not added before
* @param[in] product code
* @return "AVAILABLE" if product is present
* @note "NOT AVAILABLE" if product is not present
*/
char * Search_Product_BYCode(char[]);


#endif // ADD_PRODUCT_H_INCLUDED
