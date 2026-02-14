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
else{
    printf("c is largest");
}
return 0;
}