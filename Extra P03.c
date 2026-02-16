#include<stdio.h>
int main(){
    char ch;
    printf("enter the character: ");
    scanf("%c",&ch);
    if(ch>='A' && ch<'Z'){
        printf("it is uppercase character");
    }
    else if(ch>='a' && ch<'z'){
        printf("it is a lowercase character");
    }
    else if(ch>='0' && ch<='9'){
        printf("it is a number");
    }
    else{
        printf("it is a special symbol");
    }
    return 0;
}
    