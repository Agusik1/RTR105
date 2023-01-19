#include<stdio.h>
#include<math.h>

int main()
{
  long double a = 1.L, b = 1.L;
  double x, y, S, S2;
  int k = 0;
  
printf("Funkcijas cosh(x) aprēķināšana!\n")
printf("Ievadiet argumentu x:");
scanf("%lf", &x);
  
y = cosh(x);
printf("cosh(%lf) = %lf \n\n", x, y);
  
a = pow(x,2*k)/(1.);
S = a;
printf("a0 = %Le S0 = %lf\n", a, S);
  
b = pow(x,2*k)/(1.);
S2 = b;
  
  
