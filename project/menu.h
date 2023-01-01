#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


 void menu(void)  /// main menu
 {    int choose;
     printf("\n\n\n\n\n\t\t\t*****************************************************************\n\n");
     printf("\n\t\t\t\t\tWELCOME TO RAISA'S COFFEE SHOP\n\n");
     printf("\n\n\n\n\t\t\t*****************************************************************\n\n");
     printf("\n\n\t\t\t\t1. Order Item\n");
     printf("\n\n\t\t\t\t2.Exit              \n");
     printf("\n\n\n\t\t\t=====================================================================\n\n");
     printf("Enter a choice : ");
     scanf("%d", &choose);


     if(choose == 1)
       order();



     else if(choose == 2)
        {
            printf("Thank You\n");
        }

 }


