#include<stdio.h>
int main() {
int a,b;
printf("enter numbers: ");
scanf("%d %d",&b,&a);
printf("addition is %d \n", a+b);
printf("subtraction is %d \n", a-b);
printf("division is %d \n", a/b);
printf("multiplication is %d \n", a*b);
printf("moduluo is %d \n", (int)a%(int)b);
return 0;
}
