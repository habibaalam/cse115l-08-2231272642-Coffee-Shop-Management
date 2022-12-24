#include <stdio.h>
#include<string.h>
/*void login()
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

int login(void)
{
    char fname[25];
    char fpass[15];
    char username[25];
    char userpass[15];
    FILE *fptr;
    fptr = fopen("login.txt", "r");
    if(fptr==NULL)
    {
        printf("Cannot open the file");
        exit(1);
    }
    fscanf(fptr, "%s %s" , fname,fpass);
    while(1)
    {
        printf("Enter username : \n");
        scanf("%s", username );
        if(strcmp(fname,username)==0)
            {
            printf("Enter password:  ");
            scanf("%s",userpass);
            if(strcmp(fpass,userpass)==0)
            {
                printf("Password matched, you may continue");
                break;
            }
            else
                printf("Password unmatched\n");
            }
            else
                printf("Username unmatched\n");
    }
    fclose(fptr);
    return 0;

        }

