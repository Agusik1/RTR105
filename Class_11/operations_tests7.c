#include<stdio.h>

int main()
 {
 char c1 = 'A', c2 = 0x45;
 int i1 = 2000, i2 = 01056;
 float f1 = 2.3, f2 = -770.896;
 double d1 = -5.6e4, d2 = 456.8e-3; 


// &&
 c1 = 1;
 c2 = 2;
 printf("\%d (%ld bytes) && %d (%ld bytes)",c1,sizeof(c1),c2,sizeof(c2));
 printf(" = %d (%ld bytes)\n\n",c1&&c2,sizeof(c1&&c2));

 printf("\%d (%ld bytes) && %d (%ld bytes)",c2,sizeof(c2),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n\n",c2&&c1,sizeof(c2&&c1));


 return 0;
 }
