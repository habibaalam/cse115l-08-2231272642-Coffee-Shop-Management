#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void order()
{   int item,n;
    int price;
    char ag;
    li();



    printf("\nYOUR PREFERENCE = ");
    scanf("%d", &item);
    printf("\nEnter quantity :");
    scanf("%d", &n);

 bill(item,n,&price);
 userinfo(price);
 printf("\n Want to continue ?(Y/N)");
 scanf(" %c", &ag);
 while(ag!='n' && ag!='N')
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
void li()
{

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



}
void bill(int it, int q, int*pricep)
{

  if(it==1)
    {
        *pricep += q*300;
        printf("Your Bill is %d tk\n", *pricep);
    }
    else if(it==2)
    {
        *pricep += q*250;
        printf("Your Bill is %d tk\n", *pricep);
    }
    else if(it==3)
    {
        *pricep += q*180;
        printf("Your Bill is %d tk\n", *pricep);
    }

 else if(it==4)
    {
        *pricep += q*150;
        printf("Your Bill is %d tk\n", *pricep);
    }

}

