#include<stdio.h>
#include<math.h>

int main()
{
  long double a = 1.L, b = 1.L;
  double x, y, S, S2;
  int k = 0;
  
printf("Funkcijas cosh(x) aprēķināšana!\n");
printf("Jūsu ievadītais arguments x: ");
scanf("%lf", &x);
  
y = cosh(x);
printf("cosh(%lf) = %lf \n\n", x, y);
  
a = pow(x,2*k)/(1.);
S = a;
  
b = pow(x,2*k)/(1.);
S2 = b;
  
printf("a0 = %Le S0 = %lf\n", a, S); 
  
  while(k<501)
  {
    k++;
    a = a*x*x/(2*k*(2*k-1));
    S = S + a;
  }

  k = 0;
  while(k<500)
  {
    k++;
    b = b*x*x/(2*k*(2*k-1));
    S2 = S2 + b;
    }
 
  
 printf("a499 = %Le  S499 = %lf\n", b, S2);
 printf("a500 = %Le  S500 = %lf\n", a, S);
 printf("cosh(%lf) caur summu = %lf \n\n", x, S);


 printf("            500                              \n");
 printf("          -------                            \n");
 printf("          \\           2∗k                        \n");
 printf("           \\         x                         \n");
 printf("cosh(x) =>          -------                        \n");
 printf("           /         (2∗k)!                         \n");
 printf("          /                                  \n");
 printf("          -------                            \n");
 printf("           k=0                               \n");
 printf("                                 2            \n");
 printf("                                x           \n");
 printf(" Rekurences reizinātājs:   -----------          \n");
 printf("                           (2k-1)∗(2k)            \n");

 return 0;
 }
