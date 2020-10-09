/**
* @file Calculate_Bill.h
*/

#ifndef CALCULATE_BILL_H_INCLUDED
#define CALCULATE_BILL_H_INCLUDED

#define ANS 15
#define ACS 4

/**
* This function used to display the main menu in the console
* @param[in] NULL
*/
void main_menu();

/**
* This function used to calculate the customer bill in the console
* @param[in] NULL
*/
void bill();

/**
* This function used to display the customer bill in the console
* @param[in] NULL
*/
void dbill();

void add();

/**
* This function used to check the product by giving the product code in the console
* @param[in] NULL
*/


typedef struct
{
    char name[ANS],code[ACS];
    float rate;
    int quantity;
} rec;
rec item;

#endif // CALCULATE_BILL_H_INCLUDED
