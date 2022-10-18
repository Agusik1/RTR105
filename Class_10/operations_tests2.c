#include<stdio.h>

int main()
 {
 char c1 = 'A', c2 = 0x45;
 int i1 = 2000, i2 = 01056;
 float f1 = 2.3, f2 = -770.896;
 double d1 = -5.6e4, d2 = 456.8e-3;

 printf("\n%d (%ld bytes) * %d (%ld bytes)",c1,sizeof(c1),i1,sizeof(i1));
 printf(" = %d (%ld bytes)\n\n",c1*i1,sizeof(c1*i1));

// % - nedrīkst lietot reāliem skaitļiem (C valodā...)
 printf("\n%.1f (%ld bytes) %c %.2f (%ld bytes)",f1,sizeof(f1),'%',f2,sizeof(f2));
 printf("\n%.1f (%ld bytes) %% %.2f (%ld bytes)",f1,sizeof(f1),f2,sizeof(f2));
// 78 % 65 -> 13
// 999 % 1000 -> 999

// >
 printf("\n%.1f (%ld bytes) > %.2f (%ld bytes)",f1,sizeof(f1),f2,sizeof(f2));
 //printf(" = %.lf (%ld bytes)\n\n",f1>f2,sizeof(f1>f2));
 printf(" = %d (%ld bytes)\n\n",f1>f2,sizeof(f1>f2));



 return 0;
 }

