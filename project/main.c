#include <stdio.h>
#include <stdlib.h>
#include "login.h"
#include "splash.h"
#include "menu.h"
#include "order.h"
#include "userinfo.h"   /// created header file for user information
int main(void)
{
    splash();         /// function calling
    login();
    menu();
    printf("\n");
    return 0;
}
