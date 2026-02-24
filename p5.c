#include<stdio.h>
int main(){
   int n,n2,n3;
   printf("enter the Function: ");
   scanf("%d",&n);
   switch(n){
    case 1: 
    printf("enter the value: ");
    scanf("%d",&n);
    if(n%2==0){
        printf("number is even");
    } else{
        printf("number is odd");
    } break;
    case 2:
    printf("enter the number");
        scanf("%d",&n);
    if(n>=0){
        printf("number is positive");
    } else{ 
        printf("number is negative");
    } break;
    case 3:
    printf("enter the values: ");
        scanf("%d %d %d",&n,&n2,&n3);
        printf("1 is the greatest");
    if(n>n2 && n>n3){
    } else if(n2>n && n2>n3){
        printf("2 is the greatest");
    } else{
        printf("3 is the greatest");
    } break;
    case 4:
    printf("enter the digits: ");
    scanf("%d %d %d",&n,&n2,&n3);
    printf("sum of the digits= %d",n+n2+n3);
    break;
    case 5:
    break;
   } 
   return 0;

}