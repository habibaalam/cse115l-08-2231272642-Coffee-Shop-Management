/*Create an array of size given by the user. Find a number taken as input from user. Your task is
to print the memory address and the index of the  number using pointer to travel the array. Note
that if number is found at multiple position you should print all memory address. */
#include <stdio.h>

int main()
{
    int i,n,x,flag=0;

    printf("n =");
    scanf("%d", &n);
    int a[n];
    printf(" Enter the %d elements :\n ",  n);
    for(i=0; i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    int *p;
    p=&a[i];
    printf("Enter the number you wanna find \n");
    scanf("%d", &x);
    for(i=0;i<n;i++)
    {
    if(a[i]==x)
   { flag =1;
   printf("index %d\n", i);
   printf("address %d\n", p);
    }
    else if(flag = 0)
    {
        printf("invalid");
    }
    }
    return 0;
}
