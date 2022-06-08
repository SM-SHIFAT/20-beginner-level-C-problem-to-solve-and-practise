#include <ctype.h>
#include <stdio.h>

int main()
{
	int j = 0;
	char str[100];
	fgets(str, sizeof(str), stdin);

	char ch = 'G';

	while (str[j]) {
		ch = str[j];
		putchar(tolower(ch));
		j++;
	}

	return 0;
}

