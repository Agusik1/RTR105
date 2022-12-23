#include<stdio.h>
 int  main()
 {
    char a, b, c;
    int i; 

    printf("Ja vēlaties augošā secībā lūdzu ievadiet(1) \nJa vēlaties dilstošā secībā lūdzu ievadiet(2) \nPēc tam ievadi trīs burtus!\n");
    scanf("%d %c %c %c",&i , &a ,&b ,&c);

  if(i == 1){

    if (a <= b && a <= c){   //Augošā secībā
       if(b <= c)
            printf("%c, %c, %c \n", a, b, c);
        else
            printf("%c, %c, %c \n", a, c, b);
    }
    else{
        if(b <= a && b <= c){
            if(a <= c)
                printf("%c, %c, %c \n", b, a, c);
            else
                printf("%c, %c, %c \n", b, c, a);
        }
        else{
            if(b <= a)
                printf("%c, %c, %c \n", c, b, a);
            else
                printf("%c, %c, %c \n", c, a, b);
            }
        }
    }

  if(i == 2){

    if (a >= b && a >= c){   //Dilstošā secībā
       if(b >= c)
            printf("%c, %c, %c \n", a, b, c);
        else
            printf("%c, %c, %c \n", a, c, b);
    }
    else{
        if(b >= a && b >= c){
            if(a >= c)
                printf("%c, %c, %c \n", b, a, c);
            else
                printf("%c, %c, %c \n", b, c, a);
        }
        else{
            if(b >= a)
                printf("%c, %c, %c \n", c, b, a);
            else
                printf("%c, %c, %c \n", c, a, b);
            }
        }
    }

   return 0;
 }
