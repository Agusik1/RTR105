#include <stdio.h>
#include "user.h"

int main(void) {
print_hello_world(); 
print_number(72); 

int number = get_num(); 
printf("Return number: %d\n", number);

int plus = sum(7, 2); 
printf("Summa: %d\n", plus);

return 0;
}

