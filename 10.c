#include <stdio.h>
#include <string.h>

int main () {
   char string[200];
   char temp;

   fgets(string, sizeof(string), stdin);

   int i, j;
   int n = strlen(string);


   for (i = 0; i < n-1; i++) {
      for (j = i+1; j < n; j++) {
         if (string[i] > string[j]) {
            temp = string[i];
            string[i] = string[j];
            string[j] = temp;
         }
      }
   }

   printf("%s\n", string);
   return 0;
}
