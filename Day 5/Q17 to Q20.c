//Question 5
// Q5 Write a program to Find sum of digits of a 
//number. 


#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}

//Question 6
//Q6 Write a program to Reverse a number. 


#include <stdio.h>

int main() {
    int num, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    printf("Reversed number = %d", reverse);

    return 0;
}

//Question 7
//Q7 Write a program to Find product of digits. 


#include <stdio.h>

int main() {
    int num, product = 1, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        product *= digit;
        num /= 10;
    }

    printf("Product of digits = %d", product);

    return 0;
}

//Question 8
//Q8 Write a program to Check whether a number is 
//palindrome.


#include <stdio.h>

int main() {
    int num, original, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    if (original == reverse)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}



