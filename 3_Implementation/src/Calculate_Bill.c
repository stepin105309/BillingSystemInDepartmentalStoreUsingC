
#include <stdio.h>
#include "Design.h"
#include <stdlib.h>
#include "Calculate_Bill.h"

void mainmenu()
{
    int i;

    const char *menu[]= {"   Calculate Bill","   Add products","   Edit Products","   Display   ","   Search products","   Exit"};
    system("cls");
    xycoord(35,8);
    printf("BILLING SYSTEM IN DEPARTMENTAL STORE USING C");
    xycoord(50,12);
    printf("MAIN MENU");
    curser(7);
}


void bill()
{
    char x[4]= {0};
    int j=29,q=0,size=0,i=1;
    float total=0,gtotal=0;
    FILE *file;
    file=fopen("Product_Details.txt","r+b");
    rewind(file);
    system("cls");
    dbill();
    xycoord(30,14);
    printf("Enter  \"done\" to finish input");
    while(1)
    {
        xycoord(25,18);
        printf("                         ");
        xycoord(25,19);
        printf("                         ");
        xycoord(25,18);
        printf("Enter Product Code:");
        scanf("%s",x);
        if(strcmp(x,"done")==0)
            break;
        xycoord(25,19);
        printf("Enter Quantity:");
        scanf("%d",&q);
        rewind(file);

        while(fread(&item,sizeof(item),1,file))
        {
            if((strcmp(item.code,x)==0))
            {
                total=item.rate*q;
                xycoord(11,j);
                printf("%4d",i);
                printf("%9s",item.name);
                printf("%13d",q);
                printf("%15.2f",item.rate);
                printf("%13.2f",total);
                gtotal=gtotal+total;
                size=sizeof(item);
                item.quantity=item.quantity-q;
                j+=2;
                i++;
                fseek(file,-size,SEEK_CUR);
                fwrite(&item,sizeof(item),1,file);
                break;
            }
        }

    }
    if(gtotal!=0)
    {
        xycoord(30,j+5);
        printf("TOTAL AMOUNT = Rs. %6.2f",gtotal);
    }
    fclose(file);
    getch();
    mainmenu();
}
/*function to display bill */
void dbill()
{



    xycoord(30,10);
    printf("BILLING SYSTEM IN DEPARTMENTAL STORE USING C");

    xycoord(32,22);
    printf("CUSTOMER'S BILL") ;

    xycoord(13,24);
    printf("SN.   Product Name     Quantity     Price          Total");

}

void d_all()
{
    int i,j=1;
    FILE *file;
    dis_con();
    file=fopen("Product_Details.txt","rb");
    rewind(file);
    i=26;
    fflush(file);
    while(fread(&item,sizeof(item),1,file))
    {
        display(&item,i,j);
        i++;
        j++;
        if ((j%20)==0)
        {
            xycoord(27,47);/*textcolor(0)*/;
            printf("Press Any Key To See More...........");
            getch();
            system("cls");
            dis_con();
            i=26;
            continue;
        }
    }
    getch();
    if (i==26)
    {
        xycoord(24,30);
        printf("-- No Products Found --");
    }
    getch();
    fclose(file);
    mainmenu();
}


void dis_con()
{

    system("cls");

    xycoord(30,11);
    printf("BILLING SYSTEM IN DEPARTMENTAL STORE USING C");

    xycoord(32,17);
    printf("AVAILABLE PRODUCTS") ;
//textcolor(8);
    xycoord(18,23);
    printf ("SN.   Product Name   Product Code     Price     Quantity");
}

/*function to display in screen*/
void display(rec *item,int i,int j)
{
    xycoord(16,i);
    printf("%4d",j);
    printf("%9s",item->name);
    printf("%12s",item->code);
    printf("%14.2f",item->rate);
    printf("%11d",item->quantity);
}

void d_search()
{
    xycoord(25,10);
    const char *menu[]= {"   By Code","   Back to main menu"};
    system("cls");
    curser(4);
}

void d_code()
{
    int i,j=1;
    char x[4]= {0};
    FILE *file;
    dis_con();
    file=fopen("Product_Details.txt","rb");
    rewind(file);
    i=26;
    xycoord(16,20);;
    printf("Enter Product Code: ");
    scanf("%s",x);
    fflush(file);
    while(fread(&item,sizeof(item),1,file))
    {
        if((strcmp(item.code,x)==0))
        {
            display(&item,i,j);
            i++;
            j++;
            break;
        }
    }
    if (i==26)
    {
        xycoord(28,30);
        printf("No Product Found");
    }
    getch();
    fclose(file);
    d_search();
}






