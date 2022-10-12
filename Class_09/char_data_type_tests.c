#include<stdio.h>

int main()
 {
 char a = 10; // divas darbības:
              // mainīgā deklarēšana - char a - vietas piešķiršana atmiņā
              // kur? (vieta un adrese) un cik daudz? (atbilstoši datu tipam)
              // 1 byte: šī baita saturs nav zināms (0001 1110 vai 1100 1111 utt.)
              // vērtības piešķiršana - a = 10;
              //		            10 - vesela tipa konstante
              //			    int - vesela tipa konstantēm
              //			    double - reāla tipa konstantēm
	      // 1 byte: 0000 1010
              // char a = 10; - mainīgā definēšana
              // mainīgā nosaukums (vārds, identifikators) nevar saturēt atstarpes
	      //					   nevar sākties ar skaitli
              // var būt ar mnemonisko nosaukumu, piem., cilindra_tilpums

 printf("a mainīgā vēŗtība kā simbols: %c\n",a);
 printf("a mainīgā vēŗtība kā decimāls sk.: %d\n",a);
 printf("a mainīgā vērtībā kā heksadecimāls skaitlis: %#x\n",a);
 printf("a mainīgā vērtības piešķiršana kā oktāls sk.: %#o\n",a);

 //char a; // NEDRĪKST pārdeklarēt mainīgo!
 char b;
 printf("\nb mainīgā vēŗtība pirms vēŗtības piešķiršanas kā simbols: %c\n",b);
 printf("b mainīgā vēŗtība -\"-  kā decimāls sk.: %d\n",b);
 printf("b mainīgā vērtībā -\"-  kā heksadecimāls skaitlis: %#x\n",b);
 printf("b mainīgā vērtības piešķiršana -\"- kā oktāls sk.: %#o\n",b); 
 
 b = 250;
 // 250 vietā redzam -6 - kāpēc? 						       	   7654 3210
 // 250 (dec) = 128(2^7) + 64(2^6) + 32(2^5) + 16(2^4) + 8(2^3) + 4(2^2) + 2(2^1) -> (bin) 1111 1010
 // char -> signed char => vecākais bits zīmei                                           (1)111 1010
 //                                     					       ^ -> 000 0101
 //                                                                                   +1 -> 000 0001
 //										            ________
 //											    000 0110
 //                                                          0000 0110 (bin) -> 6 (dec)
 //							          rezultātā ir -6

 unsigned char c = 320;	
 printf("\nc mainīgā vēŗtība pēc vēŗtības piešķiršanas kā simbols: %c\n",c);
 printf("c mainīgā vēŗtība -\"-  kā decimāls sk.: %d\n",c);
 printf("c mainīgā vērtībā -\"-  kā heksadecimāls skaitlis: %#x\n",c);
 printf("c mainīgā vērtības piešķiršana -\"- kā oktāls sk.: %#o\n",c); 

 return 0;
 }
