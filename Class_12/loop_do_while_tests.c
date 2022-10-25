// cikla operatori
// while - "kamēr"
// do while - "darīt kamēr"
// for - "līdz"

// do ; while(izteiksme);
// do
// ;
// while(izteiksme);
// do {;;;} while(izteiksme);
// do
// {
// ;
// ;
// }
// while(izteiksme)
// pirms while esošā datbība tiek izpildīta
// tikmēr, kamēr iekavās () izteiksmes rezultāts ir "true"
// NB! bet šī darbība (vai darbības) obligāti tiks izpildītas vismaz vienu reizi


#include<stdio.h>

int main()
 {
 int a=10;
 do
   { 
  printf("a: %d\n",a);
  a--; // a = a - 1; a -= 1;
  }
 while(a>=0); 

printf("a (pēc cikla): %d\n",a);

 return 0;
 }

