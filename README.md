## credit card validator (Luhn algorithm) in C

This C code is a simple program that validates a credit card number using the Luhn algorithm. The Luhn algorithm is used to validate various identification numbers, including credit card numbers.

Let's break down the code step by step:

Header Files:
```
#include <stdio.h>
#include <string.h>
```
The #include directive is used to include necessary header files for input/output and string manipulation functions.

Function Prototypes:
```
int getDigit(const int number);
int sumOddDigits(const char *cardNumber);
int sumEvenDigits(const char *cardNumber);
```
These are function prototypes for three functions:

- `getDigit`: Calculates the sum of digits in a number.
- `sumOddDigits`: Sums the odd-indexed digits of the credit card number.
- `sumEvenDigits`: Sums the even-indexed digits of the credit card number using the getDigit function.

Main Function:
```
int main() {
    // ... (variable declarations and initialization)

    // Prompt the user to enter a credit card number
    printf("Enter a credit card #: ");
    scanf("%s", cardNumber);

    // Calculate the sum of even and odd digits using sumEvenDigits and sumOddDigits functions
    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    // Check if the result is a multiple of 10, indicating a valid credit card number
    if (result % 10 == 0) {
        printf("%s is valid!\n", cardNumber);
    } else {
        printf("%s is not valid!\n", cardNumber);
    }

    return 0;
}
```
The main function prompts the user to enter a credit card number, calculates the sum of even and odd digits using the provided functions, and checks if the sum is a multiple of 10 to determine if the credit card number is valid.

`getDigit` Function:
```
int getDigit(const int number) {
    return number % 10 + (number / 10 % 10);
}
```
The getDigit function calculates the sum of the digits of a number. It takes an integer number as input and returns the sum of its digits.

`sumOddDigits` Function:
```
int sumOddDigits(const char *cardNumber) {
    // ... (loop to sum odd-indexed digits of the card number)
}
```
The `sumOddDigits` function calculates the sum of odd-indexed digits of the credit card number.

`sumEvenDigits` Function:
```
int sumEvenDigits(const char *cardNumber) {
    // ... (loop to sum even-indexed digits of the card number using getDigit function)
}
```
The `sumEvenDigits` function calculates the sum of even-indexed digits of the credit card number using the getDigit function.

Overall, this program takes a credit card number as input, calculates the sum of even and odd digits using the Luhn algorithm, and determines if the credit card number is valid based on the sum being a multiple of 10.
