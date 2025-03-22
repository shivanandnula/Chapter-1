#include <stdio.h>

int main()
{

    // We will take 3 inputs from user as marks

    printf("Please provide marks for Maths , Science and History respectively :\n");
    
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    
    // We will calculate the marks and show the results

    if (a>=33 && b>=33 && c>= 33)
    {
            printf("You're Passed !");
        
    }
    else{
        printf("You're failed. ");
    }
    return 0;
}