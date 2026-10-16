#include <stdio.h>
#include <string.h>

int main () {
    char name[50];

    scanf ("%s", name);

    printf ("\"%s\"\n", name);
    printf ("\%20s\"\n", name);
    printf ("\"%-20s\"\n", name);

    int dyn = strlen(name) + 5;
    
    printf ("\"%*s\"\n", dyn, name); //"*" подставляет ширину из переменной

    return 0;
}