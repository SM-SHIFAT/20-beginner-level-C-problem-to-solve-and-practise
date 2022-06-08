#include<stdio.h>

int recursionFunc(int num){

    // Find total number of digits in num
    int digit = (int) log10(num);

    if(num == 0)
        return 0;

    return ((num%10 * pow(10, digit)) + recursionFunc(num/10));

}

int main()
{

    int number, rnumber, numIsNegative;
    scanf("%d",&number);

    int tnumber = number;

    numIsNegative = (number < 0);

    if(numIsNegative)
		number *= -1;


    rnumber = recursionFunc(number);


	if(numIsNegative)
		rnumber *= -1;

    printf("Number: %d \nReverse: %d", tnumber, rnumber);


return 0;
}

