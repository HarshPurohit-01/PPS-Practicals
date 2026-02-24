#include<stdio.h>
int main(){
    float marks,s1,s2,s3,s4,s5;
    printf("enter marks of FAI: ");
    scanf("%f",&s1);
    while(s1>100 || s1<0){
    printf("enter correct marks: \n");
    scanf("%f",&s1);
    }
    printf("enter the marks of BE: ");
    scanf("%f",&s2);
     while(s2>100 || s2<0){
    printf("enter correct marks: \n");
    scanf("%f",&s2);
    }
    printf("enter the marks of EGD: ");
    scanf("%f",&s3);
     while(s3>100 || s3<0){
    printf("enter correct marks: \n");
    scanf("%f",&s3);
    }
    printf("enter the value of PPS: ");
    scanf("%f",&s4);
     while(s4>100 || s4<0){
    printf("enter correct marks: \n");
    scanf("%f",&s4);
    }
    printf("enter the marks of Maths: ");
    scanf("%f",&s5);
     while(s4>100 || s4<0){
    printf("enter correct marks: \n");
    scanf("%f",&s4);
    }
    marks = s1+s2+s3+s4+s5;
    printf("Total marks = %f\n",marks);
    int percentage = marks*100/500;
    printf("percentage = %f\n",marks*100/500);
    if(percentage>=90){
        printf("Grade A");
    }
    else if(percentage>=75){
        printf("Grade B");
    }
    else if(percentage>=60){
        printf("Grade C");
    }
    else if(percentage>=40){
        printf("Grade D");
    }
    else{
        printf("fail");
    }
    return 0;
}