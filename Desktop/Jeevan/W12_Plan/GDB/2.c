#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void strrev(char*);  // Change return type to void

int main(void)
{
    int t,i=0,temp=0, ch;
    char *str[10];
    scanf("%d",&t); //input the number of test cases
    while((ch = getchar()) != EOF && ch != '\n'); // To consume newline character after scanf

    // Allocate memory for str elements
    if(t <= 10)
        for(size_t i = 0; i < t; i++)
            str[i] = malloc(50); // Assuming string is no more than 50characters.
    else
        exit(0);

    i = 0;
    while(i < t)
    {
        fgets(str[i],50,stdin); // Use fgets instead of scanf to read string
        i++;
    }
    while(temp<t) //reverse the string and display it
    {
        // Since you are reversing string by flipping the characters the same 
        // string just pass pointer to it. str[temp] will be updated in function.
        strrev(str[temp]);
        printf("Reverse is %s \n", str[temp]);
        temp++;
    }
    return 0;
}

void strrev(char *str)
{

    size_t i = strlen(str)-1,j=0;
    char ch;
    while(i>j)
    {
        ch = str[i];
        str[i]= str[j];
        str[j] = ch;
        i--;
        j++;
    }
    //printf("Reverse is %s \n", str);
}
