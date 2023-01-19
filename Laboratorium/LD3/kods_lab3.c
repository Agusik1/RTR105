#include <stdio.h>
#include <math.h>

double f(double x) {
    return cosh(x);
}

double df_analytical(double x) { 
    return sinh(x);
}

double df_forward_difference(double x, double h) {
    return (f(x + h) - f(x)) / h;
}

double d2f_analytical(double x) {
    return cosh(x);
}

double d2f_forward_difference(double x, double h) {
    return (f(x + h) - 2*f(x) + f(x - h)) / (h*h);
}

int main() {
    double a, b, precision;
  
    printf("Ievadiet vērtību a: ");
    scanf("%lf", &a);
  
    printf("Ievadiet vērtību b: ");
    scanf("%lf", &b);
  
    printf("Ievadiet precizitāti: ");
    scanf("%lf", &precision);

    FILE *fp;
    fp = fopen("derivativess.dat", "w");
  
if(fp == NULL)
    {
      printf("Error!");
      return 1;
    }
  
fprintf(fp, "\tx\tcosh(x)\t\tcosh\'(x)\t\tcosh\'(x)\t\tcosh''(x)\tcosh''(x)\n\n");
fprintf(fp, "\t\t\t\tanal. forma\tdife. forma\tanal. forma\tdife. forma\n\n");

    double x;
    for (x = a; x <= b; x += precision) {
        double fx = f(x);
        double dfx_analytical = df_analytical(x);
        double dfx_forward_difference = df_forward_difference(x, precision);
        double d2fx_analytical = d2f_analytical(x);
        double d2fx_forward_difference = d2f_forward_difference(x, precision);
        fprintf(fp, "%lf %lf %lf %lf %lf %lf\n", x, fx, dfx_analytical, dfx_forward_difference, d2fx_analytical, d2fx_forward_difference);
    }

    fclose(fp);
    return 0;
}
