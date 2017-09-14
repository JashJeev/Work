#include"header.h"
int main (int argc, char *argv[])

{
 int total,choice,a,b;
 float total1; 
while(1)
{ 
printf("Enter the Operation u want to perform\n");
 printf("1. ADD \t 2.SUB \t 3.MUL \t 4.DIV \t 5. Exit\n");
 scanf("%d",&choice);
if(choice<5)
{
 printf("enter the 2 variables\n");
 scanf("%d%d",&a,&b);
}
 switch(choice)
	{
	case 1:total = addnum(a,b);
		printf("Total=%d\n",total);
 		break;
 	case 2: total = subnum(a,b);
		printf("Total=%d\n",total);
		break;
 	case 3: total = mulnum(a,b);
		printf("Total=%d\n",total);
		break;
 	case 4: total1 = divnum(a,b);
		printf("Total=%f\n",total1);
		break;
	case 5: exit(0);
 	default: printf("Invalid Input\n");
	}
}
 return 0;
}

 
