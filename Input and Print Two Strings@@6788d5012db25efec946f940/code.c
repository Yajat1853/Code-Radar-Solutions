#include <stdio.h>

int main() {
    char str[10], str2[10];
    fgets(str, sizeof(str), stdin);
    fgets(str2, sizeof(str2), stdin);

    str[strcspn(str, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    printf("You entered: %s and %s\n",str,str2);
    return 0;
}