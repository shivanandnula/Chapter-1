#include <stdio.h>

int main()
{

    int age;
    printf("Enter your age :");
    scanf("%d", &age);

    if (age > 0 && age < 14)
    {
        printf("You're a kid !");
    }
    else if (age > 14 && age <= 18)
    {
        printf("You're a Teen !");
    }
    else if (age > 18 && age <= 25)
    {
        printf("You're a Young !");
    }
    else if (age > 25 && age <= 45)
    {
        printf("You're a Adult !");
    }
    else if (age > 45)
    {
        printf("You're a Old !");
    }
    else
    {
        printf("Your age is invalid");
    }

    // return 0;
}