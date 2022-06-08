#include <stdio.h>

int main() {
  int n, rev = 0, remainder, number;
    printf("Enter an integer number: ");
    scanf("%d", &n);
    number = n;


    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }


    if (number == rev)
        printf("%d is a palindrome.", number);
    else
        printf("%d is not a palindrome.", number);

    return 0;
}
