#include<stdio.h>

int main()
 {
 char c1 = 'A', c2 = 0x45;
 int i1 = 2000, i2 = 01056;
 float f1 = 2.3, f2 = -770.896;
 double d1 = -5.6e4, d2 = 456.8e-3; 


// >> (pa labi) << (pa kreisi)
 unsigned char uc1 = 1; // 0000 0001 (3 dec 000 0011 << 3 0000 001100)
 c1 = 0;
 printf("\n%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1<<c1,sizeof(uc1<<c1)); // 0000 0001 (1 dec)

 c1 = 1;
 printf("\n%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1<<c1,sizeof(uc1<<c1)); // 0000 0010 (2 dec)
                                                        // 0 no 7. pozīcijas ārā
                                                        // 0 no 0. pozīcijas iekšā
 c1 = 3;
 printf("\n%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1<<c1,sizeof(uc1<<c1)); // 0000 0100 (4 dec)

 c1 = 4;
 printf("\n%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1<<c1,sizeof(uc1<<c1));

 c1 = 5;
 printf("\n%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1<<c1,sizeof(uc1<<c1)); 

 c1 = 6;
 printf("\n%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1<<c1,sizeof(uc1<<c1)); 

 c1 = 7;
 printf("\n%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1<<c1,sizeof(uc1<<c1)); // 0000 1000 (8 dec)

 return 0;
 }
