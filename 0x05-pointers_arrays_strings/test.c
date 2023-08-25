#include <stdio.h>
#include <string.h>

// Function
int _strlen(char *s) {
    int i = 0;
    while (s =! 0)
    {
        i++;
        s++;
    }
    
    return i;
}

// Main Function
int main(void) {
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return 0;
}
