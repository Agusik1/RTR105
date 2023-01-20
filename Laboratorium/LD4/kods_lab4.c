#include<stdio.h>
#include<math.h>

int main(){
  
  float a, b, x, delta_x, summa=0, k;
  int precizitate,n=0;
 
 printf("Lūdzu ievadiet intervāla sākumpunktu: ");
 scanf("%lf",&a);
 printf("Lūdzu ievadiet intervāla beigu punktu: ");
 scanf("%lf",&b);
 printf("Lūdzu ievadiet intervāla precizitāti (cipari aiz komata): ");
 scanf("%d",&precizitate);
 delta_x=pow(10,-precizitate); 
  
 if(a>b){
   a=b-a;
   b=b+a;
   b=b-a;
 printf("Diemžēl Jūsu norādītais sākuma punkts bija lielāks par beigu punktu, tāpēc tie tika samainīti vietām. \n");
 }
  
 //Aprēķins izmantojot taisnstūra likumu
   
 x=a;
  while(x<=b){
    summa=summa+(cosh(x)*delta_x);
    x+=delta_x;
  }
 printf("Aprēķinātais rezultāts ar taisnstūra likumu: %f\n",summa);
  
  //Aprēķins izmantojot trapeces likumu
    
 summa=0;
  x=a;
  while(x<=b){
    summa=summa+(cosh(x)+(cosh(x+delta_x))*delta_x/2);
    x+=delta_x;
  }
 printf("Aprēķinātais rezultāts ar trapeces likumu: %f\n",summa);
  
  //Aprēķins izmantojot Simpsona likumu
  
  summa=0;
  x=a;
  while(x<b){
    n++;
    if(n==1)k=cosh(x);
    else if((x+delta_x)>b)k=cosh(x);
    else if(n%2==0)k=4*cosh(x);
    else if(n%2==0)k=2*cosh(x);
    summa=summa+k;
    x+=delta_x;
  }
  summa=summa*delta_x/3;
  printf("Aprēķinātais rezultāts ar Simpsona likumu: %f\n",summa);
}
