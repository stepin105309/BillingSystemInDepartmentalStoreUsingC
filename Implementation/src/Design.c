#include "Design.h"
#include "Calculate_Bill.h"
#include "Add_Product.h"
#include "Edit_Product.h"
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <ctype.h>
COORD coord= {0,0};

void xycoord(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}


void curser(int no)
{
    int count=1;
    char ch='0';
    xycoord(30,20);
    while(1)
    {
        switch(ch)
        {
        case 80:
            count++;
            if (count==no+1) count=1;
            break;
        case 72:
            count--;
            if(count==0) count=no;
            break;
        }
        highlight(no,count);
        ch=getch();
        if(ch=='\r')
        {
           if(no==7)
            {
                if (count==1) bill() ;
                else if(count==2) add();
                else if(count==3) edit();
                else if (count==4) d_all();
                else if (count==5) d_search();

                else   exit(0);
            }
           if(no==4)
            {

                if (count==1) d_code();

                else mainmenu();
            }

        }
    }
}

void highlight(int no,int count)
{
    if (no==4)
    {
xycoord(30,6);
printf("BILLING SYSTEM IN DEPARTMENTAL STORE USING C");
        xycoord(30,10);
        printf("   By Code          ");

        xycoord(30,12);
        printf("   Back to main menu");

        switch (count)
        {
        case 1:
            xycoord(30,10);
            printf(" - By Code          ");
            break;

        case 2:
            xycoord(30,12);
            printf(" - Back to main menu");
            break;
        }
    }

    if(no==7)
    {

        xycoord (30,15);
        printf("   Calculate Bill ");
        xycoord (30,16);
        printf("   Add Products      ");
        xycoord (30,17);
        printf("   Edit Products     ");
        xycoord (30,18);
        printf("   Display          ");
        xycoord (30,19);
        printf("   Search Product       ");

        xycoord (30,20);
        printf("   Exit           ");

        switch(count)
        {
        case 1:
            xycoord (30,15);
            printf(" - Calculate Bill ");
            break;
        case 2:
            xycoord (30,16);
            printf(" - Add Products      ");
            break;
        case 3:
            xycoord (30,17);
            printf(" - Edit Products     ");
            break;
        case 4:
            xycoord (30,18);
            printf(" - Display     ");
            break;
        case 5:
            xycoord (30,19);
            printf(" - Search Product       ");
            break;
        case 6:
            xycoord (30,20);
            printf(" - Exit           ");
            break;

        }
    }
}

