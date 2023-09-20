#include <stdio.h>
#include <string.h>

int getDigit(const int number);
int sumOddDigits(const char *cardNumber);
int sumEvenDigits(const char *cardNumber);

int main() {
    printf("********** card # validator **********\n");
    char cardNumber[100];
    int result = 0;

    printf("Enter a credit card #: ");
    scanf("%s", cardNumber);

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if (result % 10 == 0) {
        printf("%s is valid!\n", cardNumber);
    } else {
        printf("%s is not valid!\n", cardNumber);
    }

    return 0;
}

int getDigit(const int number) {
    return number % 10 + (number / 10 % 10);
}

int sumOddDigits(const char *cardNumber) {
    int sum = 0;
    int length = strlen(cardNumber);

    for (int i = length - 1; i >= 0; i -= 2) {
        sum += cardNumber[i] - '0';
    }

    return sum;
}

int sumEvenDigits(const char *cardNumber) {
    int sum = 0;
    int length = strlen(cardNumber);

    for (int i = length - 2; i >= 0; i -= 2) {
        sum += getDigit((cardNumber[i] - '0') * 2);
    }

    return sum;
}
