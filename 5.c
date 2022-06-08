#include <stdio.h>
int main()
{
   int i,j, num, start, p = 0;
   printf("Please enter a starting range: ");
   scanf("%d",&start);
   printf("Please enter a ending range: ");
   scanf("%d", &num);

   if(start>num)
   {
       printf("start value can not be greater than end value");
       return 0;
   }

   for(j=start; j<=num; j++){
        p=0;
    for(i=1; i<=(j/2)+1; i++)
    {
        if(j%i==0)
        {
            p++;
        }
    }
    if(p==1)
    {
        printf("%d ",j);
    }
   }

   return 0;
}
