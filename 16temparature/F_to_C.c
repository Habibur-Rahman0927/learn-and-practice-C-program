// c = (F-32)/1.8;
#include<stdio.h>
int main()
{
  float C, F;

  printf("Enter Farn : ");
  scanf("%f", &F);

  C = (F - 32) / 1.8;
  printf("The Centigrade = %.2f", C);
}
