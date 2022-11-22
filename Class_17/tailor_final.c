#include<stdio.h>
#include<math.h>
double mans_sinuss(double x){
 double a,S;
 int k=0;

a = pow(-1,k)*pow(x,2*k+1)/(1.);
S = a;
 printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);

 while(k<3){
 k++; 
 a = a * (-1) *x*x / ((2*k)*(2*k+1)); 
 S = S + a;
 printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);
 }
 return S;
}

void main(){
 double x=2.05,y,yy;
 y = sin(x);
 printf("standarta funkcija sin - y=sin(5.2f)=%.2f\n",x,y);

 yy = mans_sinuss(x);
 printf("lietotaaja funkcija - y=mans_sinuss(%.2f)=%.2f\n",x,yy);
}
