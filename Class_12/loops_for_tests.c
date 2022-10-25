// cikla operatori
// while - "kamēr"
// do while - "darīt kamēr"
// for - "līdz"

// NB! for( ; ; ) - for cikla () vienmēr satur divus semikolus - ;

// for( ; izteiksme ; );
// for( ; izteiksme ; )
// ;
// for( ; izteiksme ; );


#include<stdio.h>

int main()
 {
 int a=10;
 for(a=10 ; a>=0 ; a--)
 // darbības pirms pirmā ; tiek izpildītas tikai 1 reizi cikla sākumā
 // tālāk izteiksmes rezultāta aprēķins jeb nosacījumu pārbaude
 // cikla ķermeņa (iekš {})  darbību pildīšana
 // cikla mainīgo izmaiņa atbilstoši aprakstam - aprakstīta aiz otrā ;
 // turpinājumā cikla izteiksmes (nosacījuma) rezultāta aprēķins
 {
 printf("a: %d\n", a);
 a--; // a = a - 1; a -= 1;
 }
 printf("a (pēc cikla): %d\n", a);

 return 0;
 }

