// QUESTION 1
// Q1 Write a program to Calculate sum of first N 
//natural numbers.

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum = %d", sum);

    return 0;
}


// QUESTION 2
//Q2  Write a program to Print multiplication table of 
//a given number

#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}

//QUESTION 3
//Q3 Write a program to Find factorial of a number.


#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("Factorial = %lld", factorial);

    return 0;
}


//QUESTION 4
//Q4  Write a program to Count digits in a number. 

#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0) {
        n = n / 10;
        count++;
    }

    printf("Number of digits = %d", count);

    return 0;
}


