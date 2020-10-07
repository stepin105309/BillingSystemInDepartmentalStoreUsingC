/*#include <stdio.h>
#include "Authenticate.h"
#include "Calculate_Bill.h"
#include <string.h>
int main()
{
  static char username[20];
  static char userpwd[8];
  static int i;
system("cls");
xycoord(35,6);
printf("BILLING SYSTEM IN DEPARTMENTAL STORE USING C");
xycoord(40,10);
printf("                                                                ");
xycoord(40,12);
printf("                                                                ");
xycoord(40,10);
printf("Enter your username : ");
scanf("%s",username);

xycoord(40,12);
printf("Enter your password : ");
for(i=0;i<8;i++)
{
    userpwd[i]=getch();
    printf("*");
}
userpwd[i]='\0';

if(authenticate(username,userpwd)){
    mainmenu();
}
else{
main();
}

return 0;
}

*/


