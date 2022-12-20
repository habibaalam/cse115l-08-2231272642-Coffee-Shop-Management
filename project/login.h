/*#include <stdio.h>
#include<string.h>
void login()
{
   FILE *fptr;
   fptr = fopen("login.txt","r");
   char fname[6], fpass[6], username[6],userpass[6];
   fscanf(fptr,"%s %s", fname,fpass);
   printf("Enter the username : \n");
   gets(username);
   printf("Enter password : \n");
   gets(userpass);
   if((strcmp(fname,username)==0) && (strcmp(fpass,userpass)==0))
    {
        printf("Login successful");
    }
    else
    {
      printf("Invalid!");
    }
}*/
