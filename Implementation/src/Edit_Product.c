#include "Edit_Product.h"
#include "Calculate_Bill.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
static char result2[]="TRY AGAIN";
static char result3[]="PRODUCT EDITED";


void edit()
{
    int flag=0,choice;
    char x[ACS],y[ACS];
    FILE *file;
    int size;
    system("cls");

    xycoord(35,10);
    printf("EDIT PRODUCT DETAILS");

    xycoord(25,12);
    printf("Enter Item Code: ");
    scanf("%s",x);
    flag=check(x);
    if(flag==0)
    {
        file=fopen("Product_Details.txt","r+b");
        rewind(file);
        while (fread(&item,sizeof (item),1,file))
        {
            if(strcmp(item.code,x)==0)
            {
                xycoord(25,15);
                printf("name       = %s",item.name);
                xycoord(25,16);
                printf("code       = %s",item.code);
                xycoord(25,17);
                printf("rate       = %g",item.rate);
                xycoord(25,18);
                printf("quantity   = %d",item.quantity);
                xycoord(25,19);;
                printf("Do You Want To Edit This Record?(y/n):");
                fflush(file);
                if(toupper(getche())=='Y')
                {
                    xycoord(25,21);
                    printf("1- Edit Name ");
                    xycoord(25,22);
                    printf("2- Edit Code ");
                    xycoord(25,23);
                    printf("3- Edit Rate ");
                    xycoord(25,24);
                    printf("4- Edit Quantity ");
                    xycoord(25,25);  ;
                    printf(" Enter Your Choice(1, 2, 3, 4) ");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                        system("cls");

                        xycoord(35,10);
                        printf("EDIT PRODUCT DETAILS");
                        xycoord(25,12);
                        printf(" Enter New Name: ");
                        scanf("%s",item.name);
                        size=sizeof(item);
                        fseek(file,-size,SEEK_CUR);
                        fwrite(&item,sizeof(item),1,file);
                        break;
                    case 2:
                        system("cls");

                        xycoord(35,10);
                        printf("EDIT PRODUCT DETAILS");
                        xycoord(25,12);
                        c_code(y);
                        strcpy(item.code,y);
                        size=sizeof(item);
                        fseek(file,-size,SEEK_CUR);
                        fwrite(&item,sizeof(item),1,file);
                        break;
                    case 3:
                        system("cls");

                        xycoord(35,10);
                        printf("EDIT PRODUCT DETAILS");
                        xycoord(25,12);
                        printf(" Enter New Rate: ");
                        scanf("%f",&item.rate);
                        size=sizeof(item);
                        fseek(file,-size,SEEK_CUR);
                        fwrite(&item,sizeof(item),1,file);
                        break;
                    case 4:
                        system("cls");
                        //(23,65,20,40);
                        xycoord(35,10);
                        printf("EDIT PRODUCT DETAILS");
                        xycoord(25,12);
                        printf(" Enter New Quantity: ");
                        scanf("%d",&item.quantity);
                        size=sizeof(item);
                        fseek(file,-size,1);
                        fwrite(&item,sizeof(item),1,file);
                        break;
                    }
                    xycoord(27,18);
                    printf("--- Item Edited---");
                    break;
                }
            }
        }
    }
    if (flag==1)
    {
        xycoord(32,30);
        printf("Item Does Not Exist.");
        xycoord(36,32);
        printf("TRY AGAIN");

    }
    getch();
    fclose(file);
    mainmenu();
}

int check(char x[ANS])
{
    FILE *file;
    int flag=1;
    file=fopen("Product_Details.txt","rb");
    rewind(file);
    while (fread(&item,sizeof (item),1,file))
    {
        if(strcmp(item.code,x)==0)
        {
            flag=0;
            break;
        }
    }
    fclose (file);
    return flag;
}

