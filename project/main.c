#include <stdio.h>
#include <stdlib.h>
#include "login.h"
#include "splash.h"
#include "menu.h"
#include "order.h"
#include "userinfo.h"
int main(void)
{
    splash();
    login();
    printf("\t\t\tWelcome to The Coffee Shop! \t\t\t\n");
    menu();
    printf("\n");
    return 0;
}
