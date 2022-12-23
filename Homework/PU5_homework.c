#include<stdio.h>

 int main(){

 char i, c, n, e, fac1, fac2;
 int  h, j, k, l, fac3, fac4;
 long long r, t, y, u, fac5, fac6;
 char a;

// Programmas datu tipa izvēle
  printf("Izvēlieties datu tipa burtu - char(c), int(i), long long(l)! \n");
  scanf("%c", &a);
// CHAR
 if(a == 0x63 || a == 0x43){
  printf("Izvēlētais datu tips ir char! \n");
  printf("Luudzu ievadiet vienu veselu dec skaitli: \n");
  scanf("%hhd", &n);


  if(n == 0)
    printf("Faktoriāla rezultāts ir: 1 \n");

  else{
    e = n - 1;
    fac1 = 1;
    fac2 = 1;

    for(i = 1; i <= n; i++){

      fac1 = fac1 * i;
     }

    for(c = 1; c <= e; c++){

      fac2 = fac2 * c;
      if(fac1 <= fac2)
      break;
   }

       if(fac2 == fac1 / n)
          printf("Faktoriāla rezultāts ir: %d \n", fac1);
       else
          printf("Ar izvēlēto datu tipu !%d pareizi aprēķināt faktoriālu nav iespējams! \n", n);
   }
  }

// INT
 if(a == 0x69 || a == 0x49){
  printf("Izvēlētais datu tips ir int! \n");
  printf("Luudzu ievadiet vienu veselu dec skaitli: \n");
  scanf("%d", &k);


  if(k == 0)
    printf("Faktoriāla rezultāts ir: 1 \n");

  else{
    l = k - 1;
    fac3 = 1;
    fac4 = 1;

    for(h = 1; h <= k; h++){

      fac3 = fac3 * h;
     }

    for(j = 1; j <= l; j++){

      fac4 = fac4 * j;
      if(fac3 <= fac4)
      break;
   }

       if(fac4 == fac3 / k)
          printf("Faktoriāla rezultāts ir: %d \n", fac3);
       else
          printf("Ar izvēlēto datu tipu !%d pareizi aprēķināt faktoriālu nav iespējams! \n", k);
   }
  }

//LONG LONG
 if(a == 0x6C || a == 0x4C){
  printf("Izvēlētais datu tips ir long long! \n");
  printf("Luudzu ievadiet vienu veselu dec skaitli: \n");
  scanf("%lld", &y);


  if(y == 0)
    printf("Faktoriāla rezultāts ir: 1 \n");

  else{
    u = y - 1;
    fac5 = 1;
    fac6 = 1;

    for(r = 1; r <= y; r++){

      fac5 = fac5 * r;
     }

    for(t = 1; t <= u; t++){

      fac6 = fac6 * t;
      if(fac5 <= fac6)
      break;
   }

       if(fac6 == fac5 / y)
          printf("Faktoriāla rezultāts ir: %lld \n", fac5);
       else
          printf("Ar izvēlēto datu tipu !%lld pareizi aprēķināt faktoriālu nav iespējams! \n", y);
   }
  }
  return 0;
 }
