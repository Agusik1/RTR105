#include<stdio.h>

int main()
 {
 char c1 = 'A', c2 = 0x45;
 int i1 = 2000, i2 = 01056;
 float f1 = 2.3, f2 = -770.896;
 double d1 = -5.6e4, d2 = 456.8e-3; 

 //*
 // 78 dec -> 0100 1110 bin
 // 7. bita saturs - 0 (kā tikt pie 7. bita satura) (0)100 1110 lai ir 0 - 0000 000(0)
 //                                                (unsigned char)(c1<<0)  >> 7
 // 6. bita saturs - 1 (kā tikt pie 6. bita satura) 0(1)00 1110 lai ir 1 - 0000 000(1)
 //                                                (unsigned char)(c1<<1)  >> 7
 // 5. bita saturs - 0 (kā tikt pie 5. bita satura) 01(0)0 1110 ir 0 - 000 000(0)
 //                                                (unsigned char)(c1<<2)  >> 7
 // 4. bita saturs - 0 (kā tikt pie 4. bita satura)
 // 3. bita saturs - 1 (kā tikt pie 3. bita satura)
 // 2. bita saturs - 1 (kā tikt pie 2. bita satura)
 // 1. bita saturs - 1 (kā tikt pie 1. bita satura)
 // 0. bita saturs - 0 (kā tikt pie 0. bita satura)

// "fokusēšanos" var realizēt ar ... & (loģisko un pa bitiem)
//  (0)100 1110
// &(1)000 0000 (128 dec)
//  (0)000 0000 >> 7

//  0(1)00 1110
// &0(1)00 0000 (64 dec)
//  0(1)00 0000 >> 6 

 return 0;
 }
