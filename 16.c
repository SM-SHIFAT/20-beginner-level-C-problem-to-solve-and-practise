#include <stdio.h>

int main()
{
    char str[50];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    printf("%d",strlen(str)-1);
    return 0;
}
