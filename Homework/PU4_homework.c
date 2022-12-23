// 5! = 1 * 2 * 3 * 4 * 5 = (5-0) * (5-1) * (5-2) * (5-3) * (5-4) =
//    = 4! * 5
// 5! / 5 = 4!

// 0! = 1 (faktoriāla darbība ir saistīta ar skaitļu kopām)
//         jautājums 0! - cik skaitļu kopas var uztaisīt no tukšas - 0
//         - kopas - [] - viena)

#include<stdio.h>
 int main(){

 char i, c, n, e, fac1, fac2;
 int  h, j, k, l, fac3, fac4;
 long long r, t, y, u, fac5, fac6;
 char a;
// Programmas datu tipa izvēle
  printf("Lūdzu izvēlieties datu tipa burtu - char(c), int(i), long long(l)! \n");
  scanf("%c", &a);

//CHAR
 if(a == 0x63 || a == 0x43){
  printf("Izvēlētais datu tips char! \n");
  printf("Lūdzu ievadiet vienu veselu dec skaitli: \n");
  scanf("%hhd", &n);


  if(n == 0)
    printf("Faktoriāla rezultāts ir: 1 \n");

  else{

    e = n - 1;
    i = n;
    c = 1;
    fac1 = 1;
    fac2 = 1;

    while(n / i !=n && c <= e){

      fac1 = fac1 * i;
      i--;

      fac2 = fac2 * c;
      c++;

      if(fac1 <= fac2)
      break;
     }


         if(fac1 / n == fac2)
          printf("Faktoriāla rezultāts ir: %d \n", fac1);
         else
          printf("Ar izvēlēto datu tipu skaitlim !%d pareizi aprēķināt faktoriālu nav iespējams! \n", n);
   }
  }

// INT
 if(a == 0x69 || a == 0x49){
  printf("Izvēlētais datu tips int! \n");
  printf("Lūdzu ievadiet vienu veselu dec skaitli: \n");
  scanf("%d", &k);


  if(k == 0)
    printf("Faktoriāla rezultāts ir: 1 \n");

  else{

    l = k - 1;
    h = k;
    j = 1;
    fac3 = 1;
    fac4 = 1;

    while(k / h !=k && j <= l){

      fac3 = fac3 * h;
      h--;

      fac4 = fac4 * j;
      j++;

      if(fac3 <= fac4)
      break;
     }


         if(fac3 / k == fac4)
          printf("Faktoriāla rezultāts ir: %d \n", fac3);
         else
          printf("Ar izvēlēto datu tipu skaitlim !%d pareizi aprēķināt faktoriālu nav iespējams! \n", k);
   }
  }
//LONG LONG

 if(a == 0x6C || a == 0x4C){
  printf("Izvēlētais datu tips long long! \n");
  printf("Lūdzu ievadiet vienu veselu dec skaitli: \n");
  scanf("%lld", &y);


  if(y == 0)
    printf("Faktoriāla rezultāts ir: 1 \n");

  else{

    u = y - 1;
    r = y;
    t = 1;
    fac5 = 1;
    fac6 = 1;

    while(y / r !=y && t <= u){

      fac5 = fac5 * r;
      r--;

      fac6 = fac6 * t;
      t++;

      if(fac5 <= fac6)
      break;
     }


         if(fac5 / y == fac6)
          printf("Faktoriāla rezultāts ir: %lld \n", fac5);
         else
          printf("Ar izvēlēto datu tipu !%lld pareizi aprēķināt faktoriālu nav iespējams! \n", y);
   }
  }
 return 0;
  }
