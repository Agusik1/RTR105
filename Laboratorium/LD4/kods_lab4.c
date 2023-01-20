#include <stdio.h>
#include <math.h>

double f(double x) {
    return cosh(x);
}

double rectangle_rule(double a, double b, double h) {
    double area = 0;
    for (double i = a; i < b; i += h) {
        area += f(i)*h;
    }
    return area;
}

double trapezoidal_rule(double a, double b, double h) {
    double area = 0;
    for (double i = a; i < b; i += h) {
        area += (f(i) + f(i+h)) * h / 2;
    }
    return area;
}

double simpson_rule(double a, double b, double h) {
    double area = 0;
    for (double i = a; i < b; i += h) {
        area += (f(i) + 4*f(i+h/2) + f(i+h)) * h / 6;
    }
    return area;
}

int main() {
    double a, b, precision;
    printf("Lūdzu ievadiet a vērtību: ");
    scanf("%lf", &a);
    printf("Lūdzu ievadiet b vērtību: ");
    scanf("%lf", &b);
    printf("Lūdzu ievadiet precizitāti: ");
    scanf("%lf", &precision);

    double h = (b-a)/2;
    double prev_integral;
    double integral = rectangle_rule(a, b, h);
    do {
        prev_integral = integral;
        h /= 2;
        integral = rectangle_rule(a, b, h);
    } while (fabs(integral - prev_integral) > precision);
    printf("Aprēķinātais rezultāts izmantojot taisnstūra likumu: %lf\n", integral);

    h = (b-a)/2;
    prev_integral = 0;
    integral = trapezoidal_rule(a, b, h);
    do {
        prev_integral = integral;
        h /= 2;
        integral = trapezoidal_rule(a, b, h);
    } while (fabs(integral - prev_integral) > precision);
    printf("Aprēķinātais rezultāts izmantojot trapeces likumu: %lf\n", integral);

    h = (b-a)/2;
    prev_integral = 0;
    integral = simpson_rule(a, b, h);
    do {
        prev_integral = integral;
        h /= 2;
        integral = simpson_rule(a, b, h);
    } while (fabs(integral - prev_integral) > precision);
    printf("Aprēķinātais rezultāts izmantojot Simpsona likumu: %lf\n", integral);

    return 0;
}
