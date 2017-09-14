#include <stdio.h>
int main()
{
    int num;
    
        printf("Enter an integer: ");
        scanf("%d",&num);
    int fact=1;
    for(int i=1; i<=num; ++i)
        fact *= i;              // factorial = factorial*i;
     
        printf("Factorial of %d = %d", num, fact);
    

    return 0;
}
             
