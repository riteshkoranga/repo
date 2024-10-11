#include <stdio.h>
#include <stdbool.h>



bool isEven(int num) {
    return num % 2 == 0; 
}

int main() {
    int number;

   
    printf("Enter a number: ");
    scanf("%d", &number);

 
   
    if (isEven(number)) {
        printf("%d is an even number.\n", number);
    } else {
        printf("%d is an odd number.\n", number);
    }

    return 0;
}

