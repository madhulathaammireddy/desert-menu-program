\\ write a program for the food item selection
 

#include<studio.h>
int main()
{
printf("select an item:\n1.pizza,\n2.burger,\n3.pasta,\n4.french fries,\n5.sandwitch");
int choice=0;
scanf("%d",&choice);
int cost;
Scanf("%d",&cost);
printf ("cost of each item selected:\n1.Rs.239,\n2.Rs.129,\n3.Rs.179,\n4.Rs.99,\n5.Rs.149");
switch(choice)
case 1:
printf("you selected pizza");
printf("cost of pizza is Rs.239");
break;
case 2:
Printf("you selected burger");
printf("burger cost is Rs.129");
break;
case 3:
printf("you selected pasta");
printf("pasta cost is Rs.179");
break;
case 4:
printf("you selected french fries");
printf("french fries cost is Rs.99");
break;
case 5:
printf("you selected sand witch");
printf("sand witch cost is Rs.149");
break;
default:printf("invalid choice");
}
return 0;
}
