// operācijas:                      operands_1 operācja operands_2    |operācija operands|
//                                 (datu tips)         (datu tips)
//                                               || 
//                                               \/
//                                     operācijas_rezultāts
//                                         (datu tips)
// parasti operācijas datu tips ir "lielākais" datu tips, kas tiek izmantots operācijā
// matemātiskās: +, -, *, /, %, ++, --
//                int i1 = 5, i2 = 6, ir;
//                ir = i1 + i2;
//                ir = ir + 10;
//                ir += 10; // tas ir tas pats ir = ir + 10, tikai kompakti pierakstīts;
//                ir ++; // ir = ir + 1; vai ir +=1;
// attiecību: <, <=, >=, >, ==, !=
// loģiskās: &&, ||, !
// loģiskās pa bitiem: &, |, ^, ~
// bitu: >>, <<
//
// Ko pētīt šodien: Kā strādā operācija?
//                  Vai operācijai drīkst izmantot jebkuru datu tipu?
//                  Operāciju izpildīšanas secība (to nosaka prioritāte; secības kontrolei izmanto iekavas)
// / (int/int vai char/char), %, |, ^, !, &&, ||, <<, >>

#include<stdio.h>

int main()
 {
 char c = 'A';
 int i = 2000;
 float f = 2.3;
 double d = -5.6e4;

 printf("%d (%ld bytes) * %d (%ld bytes) = %d (%ld bytes)\n",c,sizeof(c),i,sizeof(i),c*i,sizeof(c*i));

 return 0;
 }
