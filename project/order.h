#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void order()
{   int item,n;
    int price;
    /*order_item coffee1;
   FILE *fpord;

   fpord=fopen("order.txt", "a+");
   if(fpord=NULL)
   {
       printf("\t\t\tCan not open ");
       return;
   }*/
    printf("\t\t\t\t===================================================================\n");
    printf("\t\t\t\t**************************PICK YOUR CHOICE*************************\n");
    printf("\t\t\t\t===================================================================\n");
    printf("\t\t\t\tMENU\n");
    printf("\n\n");
    printf("\t\t\t\t                  AVAILABLE ITEMS                               \n\n");
    printf("1.MOCHA                 - 300tk\n");
    printf("2.LATTE                 - 250tk\n");
    printf("3.REGULAR COFFEE        - 180tk\n");
    printf("4.BLACK COFFEE          - 150tk\n");

    printf("choice = ");
    //scanf("%d", &coffee1.item);
     scanf("%d", &item);
    printf("Enter quantity :");
    scanf("%d", &n);
 //scanf("%d", &coffee1.item);

    if(item==1)
    {
        price = n*300;
        printf("Your Bill is %d tk", price);
    }
    else if(item==2)
    {
        price = n*250;
        printf("Your Bill is %d tk", price);
    }
    else if(item==3)
    {
        price = n*180;
        printf("Your Bill is %d tk", price);
    }

 else if(item==4)
    {
        price = n*150;
        printf("Your Bill is %d tk", price);
    }
    /*printf("\n\t\t\t\tNAME :");
    fflush(stdin);
    //gets(coffee1.item);
    fprintf(fpord, "%s",coffee1);


    printf("\n\t\t\tQUANTITY :");
    fflush(stdin);
    //gets(coffee1.quantity);
    fprintf(fpord, "%s",&coffee1);
   // fprintf(fpord, "%s", coffee1);*/



}
