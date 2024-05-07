#include <stdio.h>

// Function to check if a number is prime or 1
int isPrimeOrOne(int num) {
    int divisorCount = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            divisorCount++;
        }
    }
    return (divisorCount == 2 || num == 1);
}

int main() {
    int sum = 0;
    int input;
    while (1) {
        printf("%d\n", sum);
        printf("Input? ");
        scanf("%d", &input);
        if (input == 0) break;
        if (isPrimeOrOne(input)) {
            sum += input;
        }
    }
    return 0;
}
