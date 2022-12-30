#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
typedef struct{    //global structure
    int item;
    int quantity;
    double price;
   }order_item;



//bill file coffeedata.txt
 void menu(void)
 {    int choose;
     printf("\n\n\n\n\n\t\t\t*****************************************************************\n\n");
     printf("\n\t\t\t\t\tWELCOME TO RAISA'S COFFEE SHOP\n\n");
     printf("\n\n\n\n\t\t\t*****************************************************************\n\n");
     printf("\n\n\t\t\t\t1. Order Item\n");
     printf("\n\n\t\t\t\t2.Cancel your order\n");
     printf("\n\n\t\t\t\t3.Display the Bill       \n");
     printf("\n\n\t\t\t\t4.Exit              \n");
     printf("\n\n\n\t\t\t=====================================================================\n\n");
     printf("Enter a choice : ");
     scanf("%d", &choose);


     if(choose == 1)
       order();


     /*else if(choose == 2)
       cancel();
     else if(choose == 3)
        bill();*/
     else if(choose == 4)
        {   //total=price+total;
            printf("Thank You");
        }

     //read data fro coffeedata file
     /* char cof[25];
     FILE * fpb;


     //fpb=fopen("coffeedata.txt","w");
     //fpb=fopen("coffeebill.txt","r");
     fpb=fopen("coffeedata.txt", "r");
     fscanf(fpb,"%s",&cof);
     printf("%s", cof);
         //fgets(cof,25,fpb);
         //puts(cof);

     fclose(fpb);
     return 0;
 }*/
 /*if(fpb==NULL)
     {
         printf("cannot open");

     }
     else{
        printf("file is opened");
        printf("Enter the choice ");
        gets(cof);
        fputs(cof,fpb);
        fclose(fpb);
     }
     getch;*/ //this is creating file







     //return 0;
 }


