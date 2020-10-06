#include "authenticate.h"
#include "Design.h"
#include <stdio.h>
#include <string.h>

int authenticate(char username[],char userpwd[])
{
 if(!strcmp(username,"sachin") && !strcmp(userpwd,"admin123"))
 {
     return 1;
 }
 else
 {
  printf("\n\nIncorrect username or password");
  return 0;
 }
}

