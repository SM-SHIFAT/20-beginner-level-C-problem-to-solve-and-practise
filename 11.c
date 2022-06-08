// C program to find length of the string without using strlen() function
#include <stdio.h>
int main()
{
char s[100];
int i;

printf("Enter a string: ");
fgets(s, sizeof(s), stdin);

for(i = 0; s[i] != '\0'; ++i);

printf("Length of string: %d", i-1);
return 0;
}
