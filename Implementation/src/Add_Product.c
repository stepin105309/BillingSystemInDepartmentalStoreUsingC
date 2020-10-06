#include <stdio.h>
#include"Add_Product.h"
#include<string.h>
#include "Design.h"
#include "Calculate_Bill.h"
static char result[]="AVAILABLE";
static char result1[]="NOT AVAILABLE";
/*function to add Product_Detailss*/
void add ()
{
    FILE *file;
    char y[ACS],x[12];
    system("cls");

    xycoord(25,12);
    printf("Enter New Product Details(Y/N)?");
    while(toupper(getche())=='Y')
    {
        system("cls");
        file=fopen("Product_Details.txt","ab");
        c_code(y);
        strcpy(item.code,y);
        xycoord(22,14);
        printf("Enter Price Of The Product:");
        scanf("%f",&item.rate);
        xycoord(22,15);
        printf("Enter Quantity Of The Product:");
        scanf("%d",&item.quantity);
        xycoord(22,16);
        printf("Enter Name Of The Product:");
        scanf("%s",item.name);
        fseek(file,0,SEEK_END);
        fwrite(&item,sizeof(item),1,file);
        fclose(file);
        xycoord(22,20);
        printf("Enter New Product Details(Y/N)?");

    }
    mainmenu();
}


/*function to check availability of code*/
void c_code(char y[])
{
    int flag;
    FILE *file;
    file=fopen("Product_Details.txt","rb");
    while(1)
    {
        system("cls");
        //(20,58,23,36);
        xycoord(32,10);
        printf(" Add Product Details")  ;
        flag=1;
        rewind(file);
        xycoord(22,12);
        printf("Enter New Code Of The Product:");
        scanf(" %[^\n]",y);
        while(fread(&item,sizeof(item),1,file)==1)
        {
            if (strcmp(y,item.code)==0)
            {
                flag=0;
                xycoord(26,20);
                printf("Code Already Exists");
                xycoord(29,22);
                printf("Enter Again");
                getch();

                break;
            }
        }
        if (flag==1)

            break;
    }

}

char* Search_Product_BYCode(char z[])
{
    static char *p="AVAILABLE";
    static char *q="NOT AVAILABLE";
    FILE *file;
    file=fopen("Product_Details.txt","rb");


        rewind(file);

        while(fread(&item,sizeof(item),1,file)==1)
        {
            if (strcmp(z,item.code)==0)
            {

                return result;
            }
        }
        return result1;

}
