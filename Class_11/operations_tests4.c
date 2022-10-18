#include<stdio.h>

int main()
 {
 char c1 = 'A', c2 = 0x45;
 int i1 = 2000, i2 = 01056;
 float f1 = 2.3, f2 = -770.896;
 double d1 = -5.6e4, d2 = 456.8e-3;

// >
 printf("\n%.1f (%ld bytes) > %.2f (%ld bytes)",f1,sizeof(f1),f2,sizeof(f2));
 //printf(" = %.1f (%ld bytes)\n\n",f1>f2,sizeof(f1>f2));
 printf(" = %d (%ld bytes)\n\n",f1>f2,sizeof(f1>f2));

// !
 printf("\n%d (%ld bytes) -> !%d (%ld bytes)\n",c1,sizeof(c1),!c1,sizeof(!c1));
 c1 = 0;
 printf("\n%d (%ld bytes) -> !%d=%d (%ld bytes)\n",c1,sizeof(c1),c1,!c1,sizeof(!c1));
 f1 = 0.0000001;
 printf("\n%e (%ld bytes) -> !%e=%d (%ld bytes)\n",f1,sizeof(f1),f1,!f1,sizeof(!f1));

 return 0;
 }
