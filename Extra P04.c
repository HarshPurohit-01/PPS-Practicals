#include<stdio.h>
int main() {
int a,b,c;
printf("enter numbers:  ");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c){
    printf("a is largest\n");
}
else if(a<b && b>c){
    printf("b is largest\n");
}
else if(a==b==c){
    printf("all values are equal\n");
}
else if((a==b) && (a!=c) || (a==c)&&a!=b){
    printf("two values are same\n");
}
else{
    printf("c is largest");
}
return 0;
}