#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false; // 0 and 1 are not prime numbers
    }
    for (int i = 2; i * i <= num; i++) { // Check for factors up to the square root of num
        if (num % i == 0) {
            return false; // Found a factor, so it's not prime
        }
    }
    return true; // No factors found, it's prime
}

// Function to check if a number is even
bool isEven(int num) {
    return num % 2 == 0; // Returns true if the number is even
}

int main() {
    int number;

    // Prompt user for input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is prime
    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is a non-prime number.\n", number);
    }

    // Check if the number is even or odd
    if (isEven(number)) {
        printf("%d is an even number.\n", number);
    } else {
        printf("%d is an odd number.\n", number);
    }

    return 0;
}

