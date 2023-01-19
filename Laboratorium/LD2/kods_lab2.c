#include<stdio.h>
#include<math.h>

int main()
{
  float a, b, x, c, delta_x, funkca, funkcb, funkcx;
  int reizes=0,precizitate;
  
printf("Cien.lietotāj, Jums būs jānorāda daži parametri un tiks aprēķināta funkcijas y=cosh(x) sakne Jūsu norādītajā intervālā.\n");
  
printf("Ievadiet intervāla sākuma punktu: \n");
scanf("%f",&a);
  
printf("Ievadiet intervāla beigu punktu: \n");
scanf("%f",&b);
  
printf("Ievadiet intervāla sākuma punktu: \n");
scanf("%f",&a);
  
printf("Pirms ievadiet vērtību, ņemiet vērā, ka dotās funkcijas vērtības nav mazākas par 1 !!!\n");
printf("Ievadiet funkcijas vērtību, kuru vēlaties atrast: \n");
scanf("%f",&c);

printf("Ievadiet vēlamo precizitāti (cipari aiz komata)!\n");
scanf("%d",&precizitate);
printf("\n");
  
delta_x=pow(10,-precizitate);
  
if(a>b)
{
  b=b+a;
  a=b-a;
  b=b-a
    
printf("Diemžēl Jūsu norādītais intervāla sākumpunkts ir lielāks par beigu punktu, tāpēc apmainījām tos vietām!\n");
}
  
funkca=cosh(a)-c;
funkcb=cosh(b)-c;
if (funkca*funkcb>0)
{
  printf("intervālā [%f;%f] cosh(x) funkcijai ",a,b);
  printf("sakņu nav vai tajā ir pāra skaits sakņu\n");
return 1;
}
  
  while((b-a)>delta_x)
  {
    x=(a+b)/2.;
    if(funkca*(cosh(x)-c)>0)
      a=x;
    else
      b=x;
    
    reizes++;
  }
  
  printf("Sakne atrodas intervālā [%.10f;%.10f] ar skaitļa precizitāti aiz komata %.10f\n",a,b,delta_x);
  printf("Tātad aptuvenā x vērtība ir %.10f\n",((a+b)/2);
  printf("Iterāciju skaits: %d \n",reizes);
         
  return 0;
}
                                                
 
