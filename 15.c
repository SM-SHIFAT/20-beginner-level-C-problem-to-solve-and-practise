#include <stdio.h>
int main() {
  int n;

  printf("Enter the size of array: ");
  scanf("%d", &n);
  double arr[n],sum=0;

  for (int i = 0; i < n; ++i) {
    printf("Enter number%d: ", i + 1);
    scanf("%lf", &arr[i]);
  }

  // storing the largest number to arr[0]
  for (int i = 0; i < n; ++i) {
    sum = sum + arr[i];

  }

  printf("Sum of array elements = %.2lf", sum);

  return 0;
}

