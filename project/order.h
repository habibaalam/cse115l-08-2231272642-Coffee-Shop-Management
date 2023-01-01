#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

                                      /// function to order
void order(void)
{   int item,n;
    int price;                       /// variables - item for kinds of coffee, n for quantity, ag for if the user want to choose again or not
    char ag;
    li();             /// calling function to show the list of available items



    printf("\nYOUR PREFERENCE = ");
    scanf("%d", &item);
    printf("\nEnter quantity :");
    scanf("%d", &n);

 bill(item,n,&price);                   /// function calling to the calculate and print the bill
 userinfo(price);                      /// function call for showing the data of the user
 printf("\n Want to continue ?(Y/N)");
 scanf(" %c", &ag);
 while(ag!='n' && ag!='N')             /// loop
 {  if(ag =='y' || ag == 'Y')
    {printf("YOUR PREFERENCE = ");
    scanf("%d", &item);
    printf("Enter quantity :");
    scanf("%d", &n);
    bill(item,n,&price);
    printf("Wanna continue?(Y/N)\n");
    scanf(" %c", &ag);
    if(ag=='N'|| ag=='n')
    {
      printf("GO back");
      menu();
    }
    }
 }
 if(ag=='N'|| ag=='n')
    {
      printf("GO back");
      menu();
    }
 printf("TOTAL PRICE : %d", price);


}
void li(void)       /// function for showing the list of available items
{

 printf("\t\t\t\t===================================================================\n");
    printf("\t\t\t\t**************************PICK YOUR CHOICE*************************\n");
    printf("\t\t\t\t===================================================================\n");
    printf("\t\tMENU\n");
    printf("\n\n");
    printf("\t\t\t\t                  AVAILABLE ITEMS                               \n\n");
    printf("\t\t1.MOCHA                 - 300tk\n");
    printf("\t\t2.LATTE                 - 250tk\n");
    printf("\t\t3.REGULAR COFFEE        - 180tk\n");
    printf("\t\t4.BLACK COFFEE          - 150tk\n");



}


void bill(int it, int q, int*pricep)   /// function to calculate the bill
{

  if(it==1)
    {
        *pricep += q*300;
        printf("Your Total Bill is %d tk\n", *pricep);
    }
    else if(it==2)
    {
        *pricep += q*250;
        printf("Your Total Bill is %d tk\n", *pricep);
    }
    else if(it==3)
    {
        *pricep += q*180;
        printf("Your Total Bill is %d tk\n", *pricep);
    }

 else if(it==4)
    {
        *pricep += q*150;
        printf("Your Total Bill is %d tk\n", *pricep);
    }

}

