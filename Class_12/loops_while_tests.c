// cikla operatori
// while - "kamēr"
// do while - "darīt kamēr"
// for - "līdz"

// while(izteiksme);
// while(izteiksme)
// ;
// while(izteiksme){;;;}
// while(izteiksme)
// {
// ;
// ;
// }
// aiz while () iekavām esošā darbība (vai darbības) tiks izpildītas
// tikmēr, kamēr iekavāš () izteiksmes rezultāts ir "true"
// "true" - izteiksmes rezultātā bitu secībā ir vismaz viens vienineks 1
// "false" vai "absolūtā nulle" - visi biti ar 0 stāvokli

#include<stdio.h>

int main()
 {
 int a=10;
 while(a>=0)
 {
 printf("a: %d\n", a);
 a--; // a = a - 1; a -= 1;
 }
 // sākumā a ir 10
 // pirmo reizi tiek pārbaudīts a>=10  (true)
 // prinf izrukā 10 -  printf -> 10
 // a samazinās par 1 -> 9
 // a (9) >= 0  (true)
 // printf -> 9
 // a samazinās par 1 -> 8
 // ...
 // a (0) >= 0 (true)
 // printf -> 0
 // a samazinās par par 1 -> -1
 // a (-1) >= 0 (false)
 printf("a (pēc cikla): %d\n", a);
 return 0;
 }

