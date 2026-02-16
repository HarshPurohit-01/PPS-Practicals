#include<stdio.h>
int main(){
    char ch;
    printf("enter  a character: ");
    scanf("%c",&ch);
    if(ch == 'a' || ch == 'A'){
    printf("character is vowel\n");
    }
        else if(ch == 'e' || ch == 'E'){
             printf("character is vowel\n");
        }
        else if(ch == 'i' || ch == 'I'){
             printf("character is vowel\n");
        }
        else if(ch == 'o' || ch == 'O'){
             printf("character is vowel\n");
        }
        else if(ch == 'u' || ch == 'U'){
             printf("character is vowel\n");
        }

    else{
        printf("character is not a vowel\n");
    }
    return 0;
}
