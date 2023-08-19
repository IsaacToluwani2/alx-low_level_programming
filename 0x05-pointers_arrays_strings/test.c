#include <stdio.h>
#include <string.h>
#include "main.h"


// Function
int _strlen(char *s)
{
return strlen(s);
}

// Main Function
 int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}