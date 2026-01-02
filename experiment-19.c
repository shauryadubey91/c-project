#include <stdio.h>
#include <string.h>

int main() {
    char a[20]="Hello";
    char b[20]="World";

    printf("%d\n", strlen(a));
    strcpy(b,a);
    strcat(a,b);
    printf("%d\n", strcmp(a,b));

    return 0;
}
