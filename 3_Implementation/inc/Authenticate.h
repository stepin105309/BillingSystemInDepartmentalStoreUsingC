

/**
* @file Authenticate.h
*
*/



#ifndef AUTHENTICATE_H_INCLUDED
#define AUTHENTICATE_H_INCLUDED


/**
* Test whether the user is authenticated or not
* @param[in] username and password(8 character)
* @return 1 for authenticated user
* @note Returns 0 for non authenticated user
*/
int authenticate(char username[],char userpwd[]);



#endif // AUTHENTICATE_H_INCLUDED
