#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void bill(void);
void choose(void);
void item(void);

//bill file coffeebill.txt
 int menu(void)
 {  //imcomplete, file is not ready
      char cof[25];
     FILE * fpb;

     fpb=fopen("coffeebill.txt","w");
     fpb=fopen("coffeebill.txt","r");
     if(fpb==NULL)
     {
         printf("cannot open");

     }
     printf("Enter contents to store in file : \n");
     scanf("%s", &cof);
     //fgets(cof,25,stdin);
     fprintf(fpb, "%s", cof);
     //puts(cof);
     /*else
        puts(cof);*/
     fclose(fpb);
       printf("file created and saved successfully.");


     struct options
     {
         char items[40];
         int quantity;
         double price;
         int data;
         //struct *options;
     };




     return 0;
 }
 void choose(void)
 {
int choose;
    printf("Choose an option : \n ");
    printf("1.Order \n 2.Billing 3.Exit");
    scanf("%d", &choose);
    switch(choose)
    {
    case 1:
        item();
        //imcomplete, i have to add more statements
    case 2:
        bill();
    case 3:
        exit(0);
    }


 }
void item(void)
{
  //imcomplete, i have to complete it
}

