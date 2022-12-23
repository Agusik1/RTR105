// 5! = 1 * 2 * 3 * 4 * 5 = (5-0) * (5-1) * (5-2) * (5-3) * (5-4) =
//    = 4! * 5
// 5! / 5 = 4!

// 0! = 1 (faktoriāla darbība ir saistīta ar skaitļu kopām)
//         jautājums 0! - cik skaitļu kopas var uztaisīt no tukšas - 0
//         - kopas - [] - viena)

#include<stdio.h>
 int main(){

 char a, b, c, d, fac1, fac2;
 int  e, f, g, h, fac3, fac4;
 long long i, j, k, l, fac5, fac6;
 char x;
// Programmas datu tipa izvēle
  printf("Lūdzu izvēlieties datu tipa burtu - char(c), int(i), long long(l)! \n");
  scanf("%c", &x);

//CHAR
 if(x == 0x63 || x == 0x43){
  printf("Izvēlētais datu tips char! \n");
  printf("Luudzu ievadiet vienu veselu dec skaitli: \n");
  scanf("%hhd", &c);


  if(c == 0)
    printf("Faktoriāla rezultāts ir: 1 \n");

  else{

    d = c - 1;
    a = c;
    b = 1;
    fac1 = 1;
    fac2 = 1;

    while(c / a !=c && b <= d){

      fac1 = fac1 * a;
      a--;

      fac2 = fac2 * b;
      b++;

      if(fac1 <= fac2)
      break;
     }


         if(fac1 / c == fac2)
          printf("Faktoriāla rezultāts ir: %d \n", fac1);
         else
          printf("Ar izvēlēto datu tipu skaitlim !%d pareizi aprēķināt faktoriālu nav iespējams! \n", c);
   }
  }

// INT
 if(x == 0x69 || x == 0x49){
  printf("Izvēlētais datu tips int! \n");
  printf("Luudzu ievadiet vienu veselu dec skaitli: \n");
  scanf("%d", &g);


  if(g == 0)
    printf("Faktoriāla rezultāts ir: 1 \n");

  else{

    h = g - 1;
    e = g;
    f = 1;
    fac3 = 1;
    fac4 = 1;

    while(g / e !=g && f <= l){

      fac3 = fac3 * e;
      e--;

      fac4 = fac4 * f;
      f++;

      if(fac3 <= fac4)
      break;
     }


         if(fac3 / g == fac4)
          printf("Faktoriāla rezultāts ir: %d \n", fac3);
         else
          printf("Ar izvēlēto datu tipu skaitlim !%d pareizi aprēķināt faktoriālu nav iespējams! \n", g);
   }
  }
//LONG LONG

 if(x == 0x6C || x == 0x4C){
  printf("Izvēlētais datu tips long long! \n");
  printf("Luudzu ievadiet vienu veselu dec skaitli: \n");
  scanf("%lld", &k);


  if(k == 0)
    printf("Faktoriāla rezultāts ir: 1 \n");

  else{

    l = k - 1;
    i = k;
    j = 1;
    fac5 = 1;
    fac6 = 1;

    while(k / i !=k && j <= l){

      fac5 = fac5 * i;
      i--;

      fac6 = fac6 * j;
      j++;

      if(fac5 <= fac6)
      break;
     }

         if(fac5 / k == fac6)
          printf("Faktoriāla rezultāts ir: %lld \n", fac5);
         else
          printf("Ar izvēlēto datu tipu !%lld pareizi aprēķināt faktoriālu nav iespējams! \n", k);
   }
  }
 return 0;
  }
