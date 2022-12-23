#include<stdio.h>

 int main(){

 char a, b, c, d, fac1, fac2;
 int  e, f, g, h, fac3, fac4;
 long long i, j, k, l, fac5, fac6;
 char x;

// Programmas datu tipa izvēle
  printf("Izvēlieties datu tipa burtu - char(c), int(i), long long(l)! \n");
  scanf("%c", &x);
// CHAR
 if(x == 0x63 || x == 0x43){
  printf("Izvēlētais datu tips ir char! \n");
  printf("Luudzu ievadiet vienu veselu dec skaitli: \n");
  scanf("%hhd", &c);


  if(c == 0)
    printf("Faktoriāla rezultāts ir: 1 \n");

  else{
    d = c - 1;
    fac1 = 1;
    fac2 = 1;

    for(a = 1; a <= c; a++){

      fac1 = fac1 * a;
     }

    for(b = 1; b <= d; b++){

      fac2 = fac2 * b;
      if(fac1 <= fac2)
      break;
   }

       if(fac2 == fac1 / c)
          printf("Faktoriāla rezultāts ir: %d \n", fac1);
       else
          printf("Ar izvēlēto datu tipu !%d pareizi aprēķināt faktoriālu nav iespējams! \n", c);
   }
  }

// INT
 if(x == 0x69 || x == 0x49){
  printf("Izvēlētais datu tips ir int! \n");
  printf("Luudzu ievadiet vienu veselu dec skaitli: \n");
  scanf("%d", &g);


  if(g == 0)
    printf("Faktoriāla rezultāts ir: 1 \n");

  else{
    h = g - 1;
    fac3 = 1;
    fac4 = 1;

    for(e = 1; e <= g; e++){

      fac3 = fac3 * e;
     }

    for(f = 1; f <= l; f++){

      fac4 = fac4 * f;
      if(fac3 <= fac4)
      break;
   }

       if(fac4 == fac3 / g)
          printf("Faktoriāla rezultāts ir: %d \n", fac3);
       else
          printf("Ar izvēlēto datu tipu !%d pareizi aprēķināt faktoriālu nav iespējams! \n", g);
   }
  }

//LONG LONG
 if(x == 0x6C || x == 0x4C){
  printf("Izvēlētais datu tips ir long long! \n");
  printf("Luudzu ievadiet vienu veselu dec skaitli: \n");
  scanf("%lld", &k);


  if(k == 0)
    printf("Faktoriāla rezultāts ir: 1 \n");

  else{
    l = k - 1;
    fac5 = 1;
    fac6 = 1;

    for(i = 1; i <= k; i++){

      fac5 = fac5 * i;
     }

    for(j = 1; j <= l; j++){

      fac6 = fac6 * j;
      if(fac5 <= fac6)
      break;
   }

       if(fac6 == fac5 / k)
          printf("Faktoriāla rezultāts ir: %lld \n", fac5);
       else
          printf("Ar izvēlēto datu tipu !%lld pareizi aprēķināt faktoriālu nav iespējams! \n", k);
   }
  }
  return 0;
 }
