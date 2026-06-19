//QUESTION 25
//Q25 Write a program to Recursive factorial.

#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial = %d", factorial(n));
    return 0;
}

//QUESTION 26
//Q26 Write a program to Recursive Fibonacci. 

#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

//QUESTION 27
//Q27 Write a program to Recursive sum of digits. 

#include <stdio.h>

int sumDigits(int n)
{
    if (n == 0)
        return 0;

    return (n % 10) + sumDigits(n / 10);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of digits = %d", sumDigits(num));

    return 0;
}

//QUESTION 28
//Q28 Write a program to Recursive reverse number

#include <stdio.h>

int reverseNum(int n, int rev)
{
    if (n == 0)
        return rev;

    return reverseNum(n / 10, rev * 10 + n % 10);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reversed Number = %d", reverseNum(num, 0));

    return 0;
}