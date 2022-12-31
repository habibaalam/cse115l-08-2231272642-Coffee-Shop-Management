


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct {
  char username[25];
  char passwd[25];
  int total_bill;
  }show_bill;

void userinfo(int total_price)

{
  FILE *read_file;
  show_bill user1;
  read_file = fopen("userinfo.txt","r+");
  if(read_file == NULL)
  {
      printf("File Not Found");
      return;
  }
  fscanf(read_file, "%s", &user1.username);
  fscanf(read_file, "%s", &user1.passwd);
  fscanf(read_file,"%s", &user1.total_bill);
  user1.total_bill = total_price;
  printf("Username : %s\n", user1.username);
  printf("User password: %s\n", user1.passwd);
  printf("Your Total Bill is : %dtk\n", user1.total_bill);
  fprintf(read_file,"%d\n",user1.total_bill);
}
