/**
/**
* @file Design.h
*
*/

#ifndef DESIGN_H_INCLUDED
#define DESIGN_H_INCLUDED

/**
* The function points to the given x and y co=ordinate in the console
* @param[in] x-coordinate and y-coordinate
* note returns the curser to the specified point in the console
*/
void xycoord(int x,int y);
/**
* The function to display the main and sub menu in the console
* @param[in] number either 4 or 7
* note if number is 7 it displays the main menu and if number is 4 it displays sub menu
*/
void curser(int no);
/**
* The function to display the main and sub menu in the console
* @param[in] number either 4 or 7 and count
* note if number is 7 it displays the main menu and if number is 4 it displays sub menu in the console and count value is used to go for the function associated with the menus
*/
void highlight(int no,int count);


#endif // DESIGN_H_INCLUDED
