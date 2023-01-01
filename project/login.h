#include <stdio.h>
#include<string.h>


int login(void)   /// login
{
    char fname[25];        /// name stored in login file
    char fpass[15];       /// password stored in login file
    char username[25];   /// user input for name
    char userpass[15];  /// user input for password
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
        if(strcmp(fname,username)==0)    /// comparing strings
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
    fclose(fptr);   /// file closed
    return 0;

        }

