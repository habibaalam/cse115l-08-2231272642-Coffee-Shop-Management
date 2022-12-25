#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void bill(void);


//bill file coffeebill.txt
 int menu(void)
 {   char cof[25];
     FILE * fpb;
     fpb=fopen("coffeebill.txt","r");
     if(fpb==NULL)
     {
         printf("cannot open");

     }
     else
        puts(cof);
     fclose(fpb);
     struct options
     {
         /*char items[40];
         int quantity;
         double price;
         int data;
         struct *options;*/
     };

     /*switch()
     {




     }*/






     return 0;
 }
