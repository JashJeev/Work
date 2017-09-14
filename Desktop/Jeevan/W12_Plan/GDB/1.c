#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* strrev(char*);

int main(int argc, char *argv[])
{
        int t,i=0,temp=0;
        char *str[10],*rev[10];
        scanf("%d",&t); //input the number of test cases
        while(i<t)
        {
            scanf("%s",str[i]);	 
            i++;
        }
        while(temp<t) //reverse the string and display it
        {
           rev[temp]=strrev(str[temp]);
           printf("%s \n",rev[temp]);
           temp++;
        }
    return 0;
    getchar();
}
char *strrev(char *str) 
{

    int i = strlen(str)-1,j=0;

    char ch;
    while(i>j)
    {
        ch = str[i];
        str[i]= str[j];
        str[j] = ch;
        i--;
        j++;
    }
    return str;
} 
