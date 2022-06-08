#include<stdio.h>

int main(){
    int i, number;
    long long int sum;

    scanf("%d",&number);
    sum = number;

    printf("Factorial of %d is: %dx",number,number);

    for(i= number-1;i>0;i--)
    {
        sum = sum* i;
        printf("%d",i);
        if(i!=1)
            printf("x");
        else
            printf("=");
    }

    printf("%llu",sum);




}
