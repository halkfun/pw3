#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "SibSUTIS";

    printf ("SIZEOF: %zu\n", sizeof (str1)); //общий массив
    printf ("STLEN: %zu\n", sizeof (str1)); //без учёта /0
    printf ("FREE_BYTES: %zu\n", sizeof (str1) - strlen(str1) - 1);
    
    char str2[20] = "СибГУТИ";

    printf ("SIZEOF: %zu\n", sizeof (str2));
    printf ("STLEN: %zu\n", sizeof (str2));
    printf ("FREE_BYTES: %zu\n", sizeof (str2) - strlen (str2) - 1);

    return 0;

}